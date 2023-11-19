#include <cstdio>

// Gibt den größten Wert des Arrays zurück,
// der kleiner oder gleich cap ist.
// Wenn kein geeigneter Wert vorhanden ist,
// gibt die Funktion cap+1 zurück.
int capped_max(int array[], int size, int cap) {
  // Hier sollten Sie Ihre Lösung implementieren
  return 0;
}
int getAnzahl(FILE* file) {
  rewind(file);                        // gehe zurück zum Anfang der Datei
  int AnzahlZeichen;                   // Initialisierung einer Zwischenvariable
  fscanf(file, "%d", &AnzahlZeichen);  // wir setzen die Zwischenvariable gleich
                                       // das erste Zeichen der File
  return (
      AnzahlZeichen);  // wir geben den char mit einem cast also als int zurück
}
int main() {
  char filename[1000];
  printf("Enter a filename that contains the given array:\n");
  scanf("%s", filename);
  int size;
  // Die nachfolgenden acht Zeilen sollten Sie ersetzen:
  // - Lesen Sie das Array aus der Datei ein, die in filename angegeben ist
  // - Das Format der Datei ist im Moodle beschrieben
  // ========================================================================
  int AnzahlDerEinzulesendenWerte;
  FILE* my_file = fopen("../../test2.txt", "r");  // versuche, Datei zu oeffnen
  if (my_file == nullptr)
    return 0;  // falls Datei nicht geoeffnet werden konnte
  AnzahlDerEinzulesendenWerte = getAnzahl(my_file);
  int* arr = new int[size];
  for (int i = 0; i < AnzahlDerEinzulesendenWerte; i++) {
    fscanf(my_file, "%d", &arr[i]);
  }
  arr[0] = 17;
  arr[1] = 7;
  arr[2] = 23;
  arr[3] = 66;
  arr[4] = 39;
  arr[5] = 8;
  // ========================================================================

  printf("The size of the array is %i.\n", size);
  printf("The array contains the following values:\n");
  printf("[%i", arr[0]);
  for (int i = 1; i < size; ++i) {
    printf(", %i", arr[i]);
  }
  printf("]\n");

  int cap;
  printf("Enter the value of cap:\n");
  scanf("%i", &cap);
  printf("The capped max is %i.\n", capped_max(arr, size, cap));

  delete[] arr;

  return 0;
}
