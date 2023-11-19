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

int main() {
  int array1[] = {4, 6, 5, 7, 8};
  int size1 = sizeof(array1) / sizeof(array1[0]);
  printf("Second smallest element in array1: %d\n",
         second_smallest(array1, size1));

  int array2[] = {3, 6, 6, 9, 3, 9};
  int size2 = sizeof(array2) / sizeof(array2[0]);
  printf("Second smallest element in array2: %d\n",
         second_smallest(array2, size2));

  return 0;
}
