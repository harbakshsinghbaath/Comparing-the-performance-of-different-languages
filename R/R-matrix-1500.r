# Define the size of the matrix
size <- 1500

# Initialize the matrices with some values
matrix1 <- matrix(1:(size*size), nrow=size, ncol=size)
matrix2 <- matrix((size*size):1, nrow=size, ncol=size)

# Measure the time taken for matrix multiplication
start_time <- Sys.time()

# Perform matrix multiplication
result <- matrix1 %*% matrix2

end_time <- Sys.time()

# Calculate the time taken
time_taken <- end_time - start_time

# Print the time taken
print(paste("Time taken to multiply two 1500x1500 matrices:", time_taken))
#Time taken to multiply two 1500x1500 matrices: 2.56735610961914 seconds