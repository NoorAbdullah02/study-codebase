%{
% Unit impluse
clc;
clear all;
t = -10:1:10;
x1 = [zeros(1,10),ones(1,1),zeros(1,10)];
subplot(5,1,1);
stem(t,x1);
xlabel('Time');
ylabel('Amplitude');
% unit step
x2 = ones(1,21);
subplot(5,1,2);
stem(t,x2);
xlabel('Time');
ylabel('Amplitude');
% ramp
subplot(5,1,3);
stem(t,t);
xlabel('Time');
ylabel('Amplitude');
% Exponential Sequence
subplot(5,1,4);
a = input('Enter a Value : ');
y = exp(t*a);
stem(t,y);
%}
% Sinusoidal Signal
clc;
clear all;
t = 0:1:10;
omega = pi/4;
A = 1;
sine = A*sin(omega*n);
stem(t,sine);