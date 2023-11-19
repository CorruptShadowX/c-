#include <cstdio>

int second_smallest(int array[], int size) {
  int smallest = array[0];
  int second_smallest = array[0];

  for (int i = 1; i < size; ++i) {
    if (array[i] < smallest) {
      second_smallest = smallest;
      smallest = array[i];
    } else if (array[i] < second_smallest && array[i] != smallest) {
      second_smallest = array[i];
    }
  }

  return second_smallest;
}
