%Curve Fitting in Power Function
clc;
clear all;
m = input("Enter Number of Data Points : ");
fprintf("Enter X : ");
for i = 1 : m
    xx(i) = input("");
end
fprintf("Enter Y : ");
for i = 1 : m
    yy(i) = input("");
end
for i = 1 : m
    x(i) = log10(xx(i));
    y(i) = log10(yy(i));
end
sumx = 0;sumy = 0;sumxy = 0;sumxx = 0;
for i = 1 : m
    sumx = sumx + x(i);
    sumy = sumy + y(i);
    sumxy = sumxy + x(i) * y(i);
    sumxx = sumxx + x(i)^2;
end
b = (sumx*sumy-m*sumxy)/(sumx^2 - m * sumxx);
a = (sumy - b*sumx)/(m);
aa = 10^a;
fprintf("The Fitted Line is y = %f*x^(%f)",aa,b);
