disp(" printing charcter in scilab");
for i =0:4
        for j= 65:70
        msprintf("%c",ascii(j));
        end
    mprintf("\n");
end
x= input("enter number")
j=1;
for i =2:x
    if(x%i==0)
       {j=0;
        break;
       } //break; 
       ++i; 
end
if(j==1)
    disp("prime number");
if(j==0)
    disp("not a prime number");
       
    
    
    
