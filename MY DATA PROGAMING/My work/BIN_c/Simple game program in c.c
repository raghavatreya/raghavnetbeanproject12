#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>
#include <stdbool.h>
#include <time.h>
#define N_OBJ 10
 
typedef struct {
        float life,
               money,
               score;
        char name[30];
        struct {
               int speed,
                   high,
                   force;
               }skills;
}character;
 
typedef struct {
        float life;
        }Enemy;
 
typedef struct {
        int x,y;
        }pos;
 
 
bool upload(character *MainCh)
{
 FILE *fr=fopen("ch","rb");
 if(fr!=NULL)
  fread(&(*MainCh),sizeof(character),1,fr);
 fclose(fr);
 return fr!=NULL;
}
 
void createGUI(character MainCh)
{
 system("MODE CON: COLS=100 LINES=100");
 printf("PROFILE NAME : %s",MainCh.name);
 gotoxy(80,1);
 printf("LIFE : %.1f",MainCh.life);
 gotoxy(80,3);
 printf("MONEY : %.1f",MainCh.money);
}
 
void initPlayer(character *MainCh)
{
 MainCh->life=100;
 MainCh->money=50;
 MainCh->score=0;
 MainCh->skills.speed=1;
 MainCh->skills.force=1;
 MainCh->skills.high=1;
 printf("Set player's name : ");
 scanf("%s",MainCh->name);
}
 
void endGame()
{
  gotoxy(45,4);
  printf("YOU WIN!");
}
 
void loseGame()
{
 gotoxy(45,4);
 printf("YOU LOSE!");
}
 
void boom()
{
 gotoxy(45,4);
 printf("BOOM HEADSHOT!");
 sleep(500);
 gotoxy(45,4);
 printf("              ");
}
 
void initEnemy(Enemy *alien)
{
 alien->life=100;
}
 
void download(character MainCh)
{
 FILE *fw=fopen("ch","wb");
 fwrite(&MainCh,sizeof(character),1,fw);
 fclose(fw);
}
 
void checkBorders(pos *curr)
{
 if(curr->x==0)
  curr->x=5;
 if(curr->y=0)
  curr->y=5;
}
 
void go(int dx,int dy,pos current)
{
 gotoxy(current.x,current.y);
 printf(" ");
 gotoxy(current.x+dx,current.y+dy);
 printf("#");
}
 
void destroy(pos posXY)
{
 gotoxy(posXY.x,posXY.y);
 printf(" ");
}
 
void enemyGo(int dx,pos current)
{
   gotoxy(current.x,current.y);
   printf(" ");
   gotoxy(current.x+dx,current.y);
   printf("@");
}
 
bool shot(int x,pos enemy,Enemy *alien,character MainCh)
{
 if(x==enemy.x)
 {
  alien->life-=25;
  if(alien->life==0)
  {
   destroy(enemy);
   endGame();
   getch();
   download(MainCh);
   exit(0);
  }
  return true;
 }
 return false;
}
 
void moveCh(character *MainCh,pos *curr,pos enemy,Enemy *alien)
{
int key=getch();
switch(key){
case 97: 
    {
           go(-1,0,*curr);
           curr->x--;
           break;
     }
 
case 115:
     {   
           go(0,1,*curr);
           curr->y++;
           break;
     }
case 119:
     { 
           go(0,-1,*curr);
           curr->y--;
           break;
     }
case 100: 
     {
           go(1,0,*curr);
           curr->x++;
           break;
     }
 case 32:
      {
       if(shot(curr->x,enemy,alien,*MainCh))
       {
        boom();
        MainCh->money+=100;
       }
      }
  } 
}
 
bool checkPlayerLife(float life)
{
  return life<=0;
}
 
void update(character MainCh,pos curr)
{
 gotoxy(87,1);
 printf("%.1f",MainCh.life);
 gotoxy(88,3);
 printf("%.1f",MainCh.money);
 gotoxy(80,5);
 printf("X=%d Y=%d\n",curr.x,curr.y);
}
 
void createRndObj(pos currEatPos[])
{
 srand(time(NULL));
 int index=0;
 for(;index<N_OBJ;index++)
 {
  currEatPos[index].x=rand()%75+1;
  currEatPos[index].y=rand()%55+2;
  gotoxy(currEatPos[index].x,currEatPos[index].y);
  printf("*");
 }
}
 
bool matchObj(pos curr,pos curr1)
{
 if(curr.x==curr1.x&&curr.y==curr1.y)
  return false;
 return true;
}
 
int matchPosXY(pos curr,pos currEatPos[])
{
 int index=0;
 while(index<N_OBJ&&matchObj(curr,currEatPos[index]))
  index++;
 if(index!=N_OBJ) 
  return index;
 return -1;
}
 
void deleteObj(pos *currEatPos)
{
 gotoxy(currEatPos->x,currEatPos->y);
 printf("#");
 currEatPos->x=-1;
 currEatPos->y=-1;
}
 
bool checkSpawnPoint(character *MainCh,pos curr,pos currEatPos[])
{
 int index=matchPosXY(curr,currEatPos);
 if(index!=-1)
 {
     MainCh->money+=10;
     MainCh->life+=10;
     deleteObj(&currEatPos[index]);
 }
 return index!=-1;
}
 
void enemyShot(int PosX,int Pos1X,character *MainCh)
{
 srand(time(NULL));
 if((rand()%2+1)%2==0)
  if(PosX==Pos1X)
   MainCh->life-=25;
}
 
int createEnemy(character *MainCh,pos currentPos,pos *enemyPos)
{
 character Enemy;
 gotoxy(enemyPos->x,enemyPos->y);
 printf("@");
 if(currentPos.x>50&&enemyPos->x<99)
 {
  enemyGo(1,*enemyPos);
  enemyPos->x++;
 }
 else if(enemyPos->x>2)
 {
  enemyGo(-1,*enemyPos);    
  enemyPos->x--;
 }
 enemyShot(enemyPos->x,currentPos.x,MainCh);       
}
 
 
 
int main(){
character MainCh;
Enemy alien;
pos curr={5,5},currEatPos[N_OBJ],enemyPos={4,4};
int index=0;
if(!upload(&MainCh))
 initPlayer(&MainCh);
MainCh.life=100;
initEnemy(&alien);
createGUI(MainCh);
createRndObj(currEatPos);
curr.y=5;
gotoxy(curr.x,curr.y);
printf("#");
while(index<N_OBJ)
{
 moveCh(&MainCh,&curr,enemyPos,&alien);
 if(checkSpawnPoint(&MainCh,curr,currEatPos))
  index++;
 update(MainCh,curr);
 if(checkPlayerLife(MainCh.life))
 {
  loseGame();
  getch();
  exit(0); 
 }
 createEnemy(&MainCh,curr,&enemyPos);
}
download(MainCh);
}