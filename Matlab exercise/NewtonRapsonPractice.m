% Newton Raphson Method
clc;
clear all;
clear figure;
f = @(x) x^3 - 3*x+3;
f1 = @(y)3*y^2 - 3;
x0 = input("Enter the approximate Root : ");
tol = input("Enter the Tollerence : ");
for i = 1 : 100
x1 = x0- (f(x0) / f1(x0));
if (abs(x0 - x1) <tol)
    fprintf("The Approximate root is %f\n",x1);
    break;
else 
    x0 = x1;
end
end
