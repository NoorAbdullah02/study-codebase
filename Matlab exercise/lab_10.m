% Runge-Kutta Method
clc;
clear all;
f=@(x,y)(x+y^2);
x0= input("Enter the value of x0\n");
y0= input("Enter the value of y0\n");
x=input("Enter where we find the result\n");
n= input("Enter number of step size\n");
h=(x-x0)/n;
for i=1:n
    k1=h*f(x0,y0);
    k2=h*f(x0+h/2, y0+k1/2);
    k3=h*f(x0+h/2, y0+k2/2);
    k4=h*f(x0+h, y0+k3);
    y1=y0+(k1+2*k2+2*k3+k4)/6;
y0=y1;
x0=x0+h;
end 
fprintf("The value, y(%f)=%f",x,y0);