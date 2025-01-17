const size = 1500;

const matrix1 = [];
const matrix2 = [];

for (let i = 0; i < size; i++) {
  matrix1[i] = [];
  matrix2[i] = [];
  for (let j = 0; j < size; j++) {
    matrix1[i][j] = i+j;
    matrix2[i][j] = i-j;
  }
}

function multiplyMatrices(matrix1, matrix2) {
  const result = []; 
  for (let i = 0; i < size; i++) { 
    result[i] = []; 
    for (let j = 0; j < size; j++) { 
      result[i][j] = 0; }
     }

  for (let i = 0; i < size; i++) {
    for (let j = 0; j < size; j++) {
      for (let k = 0; k < size; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  return result;
}

// Measure the time taken for matrix multiplication
console.time('Matrix Multiplication');
multiplyMatrices(matrix1, matrix2);
console.timeEnd('Matrix Multiplication');
//Matrix Multiplication: 33.607s