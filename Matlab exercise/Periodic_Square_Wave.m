clc;
clear all;

n = input("Enter the Number of Signals to reconstruct: ");
har = zeros(1,n);

for i = 1:n
    har(i) = input(['Enter the Number of harmonics for Signal ', num2str(i), ': ']);
end

t = -1:0.001:1;
omega = 2 * pi;
                                         
for k = 1:n
    x = 0.5;
    for m = 1:2:har(k) 
        b = 2 / (m * pi);                        
        x = x + b * sin(m * omega * t);                                    
    end

    subplot(n, 1, k);
    plot(t, x, 'LineWidth', 1.5);  
    xlabel('Time');
    ylabel('Amplitude');
    title(['Reconstructed with ', num2str(har(k)), ' Harmonics']);  
    grid on;
    axis([-1 1 -0.5 1.5]);
end
