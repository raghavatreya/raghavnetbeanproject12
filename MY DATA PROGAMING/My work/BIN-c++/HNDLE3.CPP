 #include<conio.h>
 #include<iostream.h>
 #include<iomanip.h>
 #include<fstream.h>
 void main()
 {
   char ch;
   ofstream ofile("key.txt");
   while(cin)
   {
    cin.get(ch);
    ofile<<ch;
   }
   ofile.close();
   ifstream file("key.txt");
   file>>ch;
   cout<<ch;
 }
