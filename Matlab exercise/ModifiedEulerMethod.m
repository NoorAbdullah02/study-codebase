function taylor_series_method
    % Define the function and initial conditions
    f = @(x, y) y;         % Example: dy/dx = y
    x0 = 0;                % Initial x
    y0 = 1;                % Initial y
    analytical_solution = @(x) exp(x); % Analytical solution (if known)

    % Number of Taylor series terms
    num_terms = 5;         % Adjust for desired accuracy

    % Symbolic differentiation for Taylor series
    syms x y_sym
    taylor_expansion = y0;  % Start with y0
    derivative = f(x, y_sym);

    for k = 1:num_terms-1
        % Compute the k-th derivative
        derivative = diff(derivative, x) + diff(derivative, y_sym) * f(x, y_sym);
        % Substitute initial conditions
        derivative_at_x0 = subs(derivative, {x, y_sym}, {x0, y0});
        % Add the k-th term to the Taylor series
        taylor_expansion = taylor_expansion + (derivative_at_x0 / factorial(k)) * (x - x0)^k;
    end

    % Display the Taylor series
    fprintf('Taylor Series Expansion: y(x) = %s\n', char(taylor_expansion));

    % Plot the solution
    fplot(analytical_solution, [x0, 2], 'g--', 'LineWidth', 1.5);
    hold on;
    fplot(matlabFunction(taylor_expansion), [x0, 2], 'b-', 'LineWidth', 1.5);
    legend('Analytical Solution', 'Taylor Series Approximation');
    title('Taylor Series Method Approximation');
    xlabel('x'); ylabel('y');
    grid on;
    hold off;
end
