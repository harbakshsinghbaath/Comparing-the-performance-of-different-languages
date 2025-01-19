
size = 1000;

% Initialize the matrices with some values
matrix1 = zeros(size, size);
matrix2 = zeros(size, size);

for i = 1:size
    for j = 1:size
        matrix1(i, j) = i + j;
        matrix2(i, j) = i - j;
    end
end

% Perform matrix multiplication
tic; % Start timer
result = matrix1 * matrix2;
elapsedTime = toc; % End timer and get elapsed time

% Display the elapsed time
fprintf('Elapsed time for matrix multiplication: %.2f seconds\n', elapsedTime);
