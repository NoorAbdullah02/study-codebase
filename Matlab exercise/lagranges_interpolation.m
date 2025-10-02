clc;
clear all;
clear figure;
n = input("Enter Value : ");
fprintf("Enter The Value of x : ");
for i = 1 : n
  x(i) = input("");
end
fprintf("Enter The Value of Y : ");
for i = 1 : n
    y(i) = input("");
end
a = input("Where the Value Will be interpolated : ");
fprintf("The Values Are : ");
sum = 0;
for i=1:n
    num = 1;
    den = 1;
for j = 1 : n
    if(i~=j)
        num = num *  (a - x(j));
        den = den * (x(i) - x(j));
    end
end
sum = sum + num / den * y(i);
end
fprintf("The Result y(%f) = %f",a,sum);