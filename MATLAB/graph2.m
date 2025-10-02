clc;
clear all;
clear figure;
x = linspace(-1,1,100);
y = x.^3-x-1;
%y1 = x.^2-1
plot(x,y,x,y1);
legend("y","y1");
title("Graph");
grid on;