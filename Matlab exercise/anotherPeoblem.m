clc;
clear all;
t = -30:1:30;
first = (-(t>=-20 & t<=-10 )) + (t>=-10 & t<=10)  + (-(t>=10 & t<=20));
subplot(7,1,1);
plot(t,first);
title("1st Graph"); % ai line likla valo na likla aro valo
second =  (-(t>=-20 & t<=-10)) + (t>=-10 & t<=20);
subplot(7,1,2);
plot(t,second);
title('2nd Graph');
% Addition
sum = first + second;
subplot(7,1,3);
plot(t,sum);
%Subtraction
subtraction = first - second;
subplot(7,1,4);
plot(t,subtraction);
%Multiplication
multi = first .* second;
subplot(7,1,5);
plot(t,multi);
% Time Shifting of Addition
shift_val = 2;
sum_shift = circshift(sum,shift_val);
subplot(7,1,6);
plot(t,sum_shift);
% Time Scaling 
x = 2;
time_shift = t*x;
subplot(7,1,7);
plot(t,time_shift);



