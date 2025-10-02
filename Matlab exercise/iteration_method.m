clc;
clear all
clear figure
f=@(x) (cos(x)+5)/(2);
x0=input('Enter the approximate root : \n');
tol=input('Enter tolerence : ');
for i=1:100
    x1=f(x0);
    if(abs(x0-x1)<tol)
        break;
    end
    x0=x1;
end
fprintf('The root is=%f after %d iteration',x0,i);