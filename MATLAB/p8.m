clc;
clear all;
clear figure;
x = 0:pi/180:2*pi
y = sin(x);
y1 = cos(x);
plot(x,y,x,y1);
hold on
plot(x,y1)
legend("y","y1");
hold off
