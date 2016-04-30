// ans : 1 ------------------------------- 13 9 7
disp("1. Check value of variable -ve,+ve or zero using if-else")
x=input("Enter value : ")   // input x

if x>0 then
    disp("x is +ve")
elseif x==0 then
    disp("x is zero")     
else 
    disp("x ix -ve") 
end

// ans 2 ---------------------------------
disp("While  loop to print 1 to 5")
x=1
while x<=5           // using while loop
    mprintf(" %d ",x)
    x=x+1
end

disp("for loop to print 1 to 5")

for i=1:5          // using for loop
     mprintf(" %d ",i)
end

//ans 3 ---------------------------------
disp("Matrix Addition")

A=[1,2,3; 4,5,6 ; 9,10,11]
B=[1,5,6; 7,9,4 ; 45,1,5]
C=[0,0,0;0,0,0;0,0,0]
disp("Matrix A")
disp(A)
disp("Matrix B")
disp(B)
disp("addition of A and B using for loop  ")
disp("Matrix C=A+B")
for i=1:3                //matrix addition
    for j=1:3
        C(i,j)=A(i,j)+B(i,j)
    end
end

disp(C)
disp("")
D=[0,0,0;0,0,0;0,0,0]
for i=1:3              // matrix multiplication 
    for j=1:3
        p=1,q=1
        for k=1:3
            C(i,j)=C(i,j)+A(i,p)*B(q,j)
            
            p=p+1
            q=q+1
        end
    end
end

disp(" Matrix D=A*B using for loop")
disp(D)

//ans 4 ----------------------------------
disp("Transpose of A :")

for i=1:3
    for j=1:3
        C(i,j)=A(j,i)
    end
end

disp(C)

// ans 5 ---------------------------------
disp("Printing reverse of a given  Number")
m=input("Input A Number ")
y=int(m)
x=0

while y>=1
    x=int((x*10))+int(modulo(y,10));    //type casting  to neglect after decimal values
    y=y/10;
end
mprintf("Reverse of given number is : %d",x);

//ans 6 -----------------------------------
y=input(" Enter A Number : ")
z=y
largest_digit=0

while y>=1
    m=modulo(y,10)
    if largest_digit<m then
        largest_digit=m
    end
    y=y/10
end

mprintf("Largest digit of %d is : %d\n",z,largest_digit)
mprintf("Sum of first & last digit is : %d",m+modulo(z,10))

//ans 7 -----------------------------------
disp("Number of Colomn ")
x=input("Enter First Colomn Number")

disp(A)
//ans 8 -----------------------------------
disp("Ans : 8")
A=[1,4,8;5,4,7;6,7,4]
disp(A)

for i=1:3
    for j=1:3
        if modulo(A(i,j),5)==0 | modulo(A(i,j),7)==0 then
            mprintf("A[%d][%d]=%d\n",i,j,A(i,j));
        end
    end
end

// Q9 is repeated question

//ans 10 -----------------------------------error
disp("Ans : 10")

for i=1:3
    for j=1:3
        flag=1
        
        for i=1:sqrt(x)
            if modulo(A(i,j),x)==0 then
                flag=0
            end
        end
            
        if flag==1 then
            mprintf("A[%d][%d]=%d\n",i,j,A(i,j));
        end
    end
end

//ans 11------------------------------------
disp("Ans : 11")
sums=0
mul=1

x=input("Enter any no : ")

while x>=1
    l=modulo(x,10)
    sums=sums+int(l)
    mul=mul*int(l)
    x=x/10
end

if sums==mul then
    disp("--- Perfect Number")
else 
    disp("--- Not Perfect No ")
end

//ans 12
x=input("Ans : 12 : Enter the no. of terms to display finbonacci series (>24): ")
f0=0
f1=1

disp(f0)
disp(f1)

for i=1:x-2
    f2=f0+f1
    f0=f1
    f1=f2
    disp(f2)
end
// delete an duplicate number for matrix



//ans 14
A=[5,5,5;5,5,5;5,5,5]
disp("ANs : 14 ")
disp(A)
s=A(1,1)+A(1,2)+A(1,3)   // sum of first raw..

flag=1

for i=1:3
    s1=0   // sum of raw
    s2=0   // sum of column
    for j=1:3
        s1=s1+A(i,j)
        s2=s2+A(j,i)
    end
    
    if s1~=s | s2~=s then
        flag=0
        break;
    end
end

d1=0
d2=0

i=1
j=3
while i<=3
    d1=d1+A(i,i)
    d2=d2+A(i,j)
    j=j-1
    i=i+1
end

if  d1~=s | d2~=s then
    flag=0
end

if flag==1 then
    disp("Magic Square")
else
    disp("Not magic Square")
end
//ans 15

    //1
mprintf("\n")
for line=1:4
     for spaces=1:4-line
         mprintf(" ")
     end
     
     for star=1:line
         mprintf("* ")
     end
     
     mprintf("\n")
end

    //2
for i=1:5
    for spaces=1:5-i
         mprintf(" ")
     end
     
    for j=1:i
        mprintf("%d ",6-i)
    end 
    mprintf("\n")
end

    //3
c=65
for i=1:4
    for spaces=1:4-i
         mprintf(" ")
     end
     
    for j=1:i
        mprintf("%c ",ascii(c))
        c=c+1
    end 
    mprintf("\n")
end
