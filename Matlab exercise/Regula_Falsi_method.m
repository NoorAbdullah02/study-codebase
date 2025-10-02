clc;
clear all;
f = @ (x) x^2-x-3;
a = input("Eneter A : ");
b = input("Eneter B : ");
tol = input("Eneter Tol : ");
if (f(a)*f(b)>0)
    fprintf("There is NO Root");
else
    for i = 1 : 100000
    x = (a*f(b)-b*f(a))/(f(b)-f(a));
    if (f(a)*f(x)<0)
        b = x;
    else
        a = x;
    end
    if (abs(a-b)<tol)
        break;
    end
    end
    fprintf("The Root is %f",a);
end
