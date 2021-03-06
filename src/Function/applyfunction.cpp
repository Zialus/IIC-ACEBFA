#include "applyfunction.h"

double linear(double n) {
  return n;
}

double nSquare(double n) {
  return n * n;
}

double nCube(double n) {
  return n * n * n;
}

double nLogN(double n) {
  return n * log(n);
}

double logN(double n) {
  return log(n);
}

double* applyFunction(double* array, int size, double function(double)) {
  double* results = (double*) malloc(sizeof(double) * (size + 1));

  for (int i = 0; i < size; i++) {
    results[i] = function(array[i]);
  }

  return results;
}
