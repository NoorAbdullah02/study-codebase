clc;
clear all;
f = @(x) x^3-x^2-10;
a =  input("Enter Number A : ");
b =  input("Enter Number B : ");
tol = input("Enter Tollarance : ");
if (f(a)*f(b)<0)
    for i = 1 : 100
    c = (a+b)/2;
    if (f(a) * f(c) < 0)
        b = c;
    else
        a = c;
    end
    if (abs(a-b)<tol)
        break;
    end
    end
    fprintf("The Root is %f \nAnd The Iteration Number is %d\n",a,i);
else
    fprintf("There is NO Root in %f %f",a,b);
end

