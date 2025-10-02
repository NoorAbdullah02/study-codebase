clc 
clear all
clear figure
f=@(x) x^2-4*x-10;
a=3;
b=5;
tol=0.00001;
if (f(a)*f(b)<0)
    for i=1:100
    c=(a+b)/2;  % Finding MID Point 
    if (f(a)*f(c)<0)
        b=c;
    else
        a=c;
    end
    if (abs(a-b)<tol)
        break;
    end
    end
    fprintf('the root is= %f after%d iteration',a,i);
else
    disp('there is no root between the linit');
end