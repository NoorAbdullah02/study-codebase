t = -10:0.1:10;
h1 = [zeros(1,50), ones(1,101), zeros(1,50)]; % Adjusted to match length of t
h2 = tan(0.6 * pi * t);
y_add = h1 + h2;
plot(t, y_add, 'b'); 
title('Addition of h1 and h2'); 
xlabel('Time'); 
ylabel('Amplitude'); 
grid on;