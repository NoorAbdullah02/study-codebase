% Simpson's Rule 1/3
clc;
clear all;
f = @(x) exp(5*x);
a = input("Enter Lower Limit of Integration :\n");
b = input("Enter Upper Limit of Integration :\n");
n = input("Enter Number of Subdivition :\n");
h = (b-a)/n;
sum = 0;
sum1 = 0;
sum2 = 0;
for i = 1 : n-1
    if (mod(i,2) == 0)
        sum2 = sum2 + f(a+i*h);
    else 
        sum1 = sum1 + f(a+i*h);
    end
    sum = sum + f(a+i*h);
end
r = h*(f(a)+f(b)+2*sum2+4*sum1)/3;
fprintf("The Value of Integration = %f",r);