% Simpson's Rule 3/8
clc;
clear all;
f = @(x) sqrt(sin(x));
a = input("Enter Lower Limit of Integration :\n");
b = input("Enter Upper Limit of Integration :\n");
n = input("Enter Number of Subdivition :\n");
h = (b-a)/n;
sum = 0;
sum1 = 0;
sum2 = 0;
for i = 1 : n-1
    if (mod(i,3) == 0)
        sum2 = sum2 + f(a+i*h);
    else 
        sum1 = sum1 + f(a+i*h);
    end
    sum = sum + f(a+i*h);
end
r = 3*h*(f(a)+f(b)+2*sum2+3*sum1)/8;
fprintf("The Value of Integration = %f",r);