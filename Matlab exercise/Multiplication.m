t = -10:0.1:10;
h1 = [zeros(1,50), ones(1,101), zeros(1,50)]; % Adjusted to match length of t
h2 = tan(0.6 * pi * t);
t_reversed = -fliplr(t);
h1_reversed = fliplr(h1);
plot(t_reversed, h1_reversed, 'k'); 
title('Time Reversed h1'); 
xlabel('Time'); 
ylabel('Amplitude');
grid on;
