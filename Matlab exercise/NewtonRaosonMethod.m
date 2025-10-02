% Newton Raphson Method
clc;
clear all;
clear figure;
f = @(x) x^4 - x^2-10;
f1 = @(y) 4*y^3 - 2*x;
x0 = input("Enter the approximate root : ");
tol = input("\nEnter the tolerence : ");
for i = 1 : 100
x1 = x0 - (f(x0)/f1(x0));
if (abs(x0 - x1)<tol)
    fprintf("The root is = %f\n and the iteration Number is %d\n",x1,i);
    break;
else 
    x0 = x1;
end
end
