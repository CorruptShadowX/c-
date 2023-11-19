#include <cstdio>

int gcd(int a, int b) {
  while (a != b) {  // solange a nicht gleich b ist
    if (a > b) {    // wenn, a größer b
      a = a - b;    // dann a wird gesetzt zu a-b
    } else {        // sonst Teil
      b = b - a;    // b wird neu gesetzt auf die Differenz von b-a
    }
  }
  return a;  // oder b, da a und b jetzt gleich sind
}

int main() {
  int a = 221;  // Variablen zum Rechnen
  int b = 153;
  int result =
      gcd(a, b);  // Methodenaufruf und Zuweisung des Ergebnisses auf result
  printf("Der groeßte gemeinsame Teiler von %d und %d ist %d\n", a, b,
         result);  // Ausgabe
  return 0;
}
