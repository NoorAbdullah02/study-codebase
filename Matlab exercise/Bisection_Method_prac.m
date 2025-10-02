clc;
clear all;
close all;
t=-2:1:2;
y=[zeros(1,2),ones(1,1),zeros(1,2)];
subplot(8,2,1);
stem(t,y);
title('Unit impulse sequence');
xlabel('n');
ylabel('\delta[n]');


n = input('Enter the N value: ');
t = 0:1:n-1;
y = ones(1,n);
subplot(8,2,2);
stem(t,y);
title('Unit step sequence');
xlabel('n')
ylabel('u[n]');


n = input('Enter the length of ramp sequence: ');
t = 0:n;
subplot(8,2,3);
stem(t,t);
title('Ramp sequence');
xlabel('n')
ylabel('r[n]');


n = input('Enter the length of exponential sequence: ');
t = 0:n;
a = input('Enter the value of a : ');
y = exp(a*t);
subplot(8,2,4);
stem(t,y);
title('Exponential sequence');
xlabel('n')
ylabel('x[n]');


n = 0:30;
A = 1; 
omega = pi/4;
phi = 0; 
sine = A * sin(omega * n + phi);
subplot(8,2,5);
stem(n,sine);
title('Sinusoidal sequence');
xlabel('n')
ylabel('x[n]');



n = 0:30;
A = 1;

omega = pi/4;
phi = 0;
cosine = A * cos(omega * n + phi); 
subplot(8,2,6);
stem(n,cosine);
title('Cosine sequence');
xlabel('n')
ylabel('x[n]');



A = 1; 
alpha = -0.1;
omega = pi/4;
n = -20:20; 

x_real = A *exp(alpha*n);
x_complex = A * exp(1j * omega * n);

subplot(8,2,7);
stem(n,x_real,'r','filled');
xlabel('n');
ylabel('Amplitude');
title('Real exponential signal');
grid on;

subplot(8,2,8);
stem(n,real(x_complex),'b','filled');
hold on;
stem(n,imag(x_complex),'g','filled');
xlabel('n');

ylabel('Amplitude');
title('Complex exponential signal(Real and Imaginary Parts)');
legend('Real Part','Imaginary Part');
grid on;
