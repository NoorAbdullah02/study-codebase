clc;
clear all;
f = @(x) x^2-4*x-10;
a = 5.1;
b = 5.8;
tol = 0.00001;
if (f(a)*f(b)>0)
    fprintf("There is NO root Between %d and %d",a,b);
else 
for i = 1 : 100
    c = (a+b)/2;
if (f(a)*f(c)<0)
    b = c;
else 
    a = c;
end
if (abs(a-b)<tol)
    break;
end
end
    fprintf("The Root is %d",a);
end

