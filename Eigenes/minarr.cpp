#include <cstdio>

int minimum(int array[], int size) {
  int min_val = array[0];  // Annahme: Der erste Wert im Array ist der kleinste
  for (int i = 1; i < size; ++i) {
    if (array[i] < min_val) {
      min_val = array[i];  // Aktualisiere den minimalen Wert, wenn ein
                           // kleinerer Wert gefunden wird
    }
  }
  return min_val;
}

int main() {
  int arr[] = {5, 2, 8, 1, 9, 3};           // Beispiel-Array
  int size = sizeof(arr) / sizeof(arr[0]);  // Berechne die Größe des Arrays
  int min_val = minimum(arr, size);         // Rufe die minimum-Funktion auf
  printf("Der kleinste Wert im Array ist: %d",
         min_val);  // Gebe das Ergebnis aus
  return 0;
}
