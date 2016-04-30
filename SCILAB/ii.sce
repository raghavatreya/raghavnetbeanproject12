string(rand(2, 2))

deff("y = mymacro(x)", "y = x + 1")
[out, in, text] = string(mymacro)
x = 123.356;
disp("Result is " + string(x));

disp("/" + string(~%t) + "/");
disp("/" + string(%i+1) + "/");
disp("/" + string(int16(-123)) + "/");
disp("/" + string(1 + %s + %s^3) + "/");

string(corelib)

v = format();
disp(string(%pi))
format(24);
disp(string(%pi))
format(v(2))

string(1:4:$)

A=[1,2,3;4,5,6;9,8,9]
for i=1:4
    for j=1:4
        t=1;
        for k=1:5
            for l=1:5
              if(A(i,j)==A(k,l)):
                  A(k,l)=0
                  
              end    
            end
        end    
    end    
end
disp(A);
