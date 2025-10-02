%Trapizoidal Rule
clc;
clear all;
f = @(x) exp(x);
a = input("Enter Lower Limit of Integration :\n");
b = input("Enter Upper Limit of Integration :\n");
n = input("Enter Number of Subdivition :\n");
h = (b-a)/n;
sum = 0;
for i = 1 : n-1
    sum = sum + f(a+i*h);
end
r = h*(f(a)+f(b)+2*sum)/2;
fprintf("The Value of Integration = %f",r);