clc;
clear all;
f = @ (x) (2+5*x)^(1/3);
x0 = input("Enter the Approximate root : ");
tol = input ("Enter tolerance : ");
for i = 1 : 100
    x1 = f(x0);
    if (abs(x0-x1)<tol)
        break;
    end
    x0 = x1;
end
fprintf("The Root is %f\nAfter %d iteration",x0,i);