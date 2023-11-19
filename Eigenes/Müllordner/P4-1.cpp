#include <cstdio>

int capped_max(int array[], int size, int cap) {
  int max_val = -1;
  for (int i = 0; i < size; ++i) {
    if (array[i] <= cap && array[i] > max_val) {
      max_val = array[i];
    }
  }
  return (max_val == -1) ? cap + 1 : max_val;
}

int main() {
  char filename[1000];
  printf("Enter a filename that contains the given array:\n");
  scanf("%s", filename);

  FILE* file = fopen(filename, "r");
  if (file == NULL) {
    printf("Error: Could not open the file.\n");
    return 1;
  }

  int size;
  fscanf(file, "%d", &size);  // Lese die Anzahl der Werte aus der ersten Zeile

  int* arr = new int[size];  // Alloziere Speicher für das Array

  // Lese die Werte aus den nachfolgenden Zeilen in das Array
  for (int i = 0; i < size; ++i) {
    fscanf(file, "%d", &arr[i]);
  }

  fclose(file);  // Schließe die Datei

  printf("The size of the array is %d.\n", size);
  printf("The array contains the following values:\n");
  printf("[%d", arr[0]);
  for (int i = 1; i < size; ++i) {
    printf(", %d", arr[i]);
  }
  printf("]\n");

  int cap;
  printf("Enter the value of cap:\n");
  scanf("%d", &cap);
  printf("The capped max is %d.\n", capped_max(arr, size, cap));

  delete[] arr;

  return 0;
}
