public class j_matrix_2000 {
    public static void main(String[] args) {
        int size = 2000;

        // Initialize the matrices with some values
        int[][] matrix1 = new int[size][size];
        int[][] matrix2 = new int[size][size];
        int[][] result = new int[size][size];

        // Fill matrix1 and matrix2 with values
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                matrix1[i][j] = i + j;
                matrix2[i][j] = i - j;
            }
        }

        // Measure the time taken for matrix multiplication
        long startTime = System.currentTimeMillis();

        // Perform matrix multiplication
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        long endTime = System.currentTimeMillis();
        long elapsedTime = endTime - startTime;

        // Display the elapsed time
        System.out.println("Elapsed time for matrix multiplication: " + elapsedTime + " milliseconds");
    }
}
//Elapsed time for matrix multiplication: 90.390 seconds