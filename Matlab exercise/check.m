clc;
clear all;
t = 10:1:10;
omega = pi/4;
a = 1;
sine = a*sin(omega * t);
stem(t,sine);
