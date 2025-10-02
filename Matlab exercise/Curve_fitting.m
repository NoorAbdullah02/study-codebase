%Curve Fitting
clc;
clear all;
m = input("Enter Number of Data Points : ");
fprintf("Enter X : ");
for i = 1 : m
    x(i) = input("");
end
fprintf("Enter Y : ");
for i = 1 : m
    y(i) = input("");
end
sumx = 0;
sumy = 0;
sumxy = 0;
sumxx = 0;
for i = 1 : m
    sumx = sumx + x(i);
    sumy = sumy + y(i);
    sumxy = sumxy + x(i) * y(i);
    sumxx = sumxx + x(i)^2;
end
b = (sumx*sumy-m*sumxy)/(sumx^2 - m * sumxx);
a = (sumy - b*sumx)/(m);
fprintf("The Fitted Line is y = %f+%f*x",a,b);