clc;
clear all;
clear figure;
disp("The prime Numbers Are :");
for i=2:1:100
    if (isprime(i)==1)
        fprintf("%d\t",i);
    end
end