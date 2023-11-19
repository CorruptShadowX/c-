#include <cstdio>  //Aufruf/Einbezug der Bibliothek

int faculty(int x) {               // Deklaration/Signatur der Methode
  int result = 1;                  // Wertzuweisung von der result Variable zu 1
  if (x > 0) {                     // Fall x positiv, also größer 0
    for (int i = x; i > 0; i--) {  // Implementation der for Schleife
      result =
          result *
          i;  // Rechenoperation innerhalb der for-Schleife also result wird
              // gleichgesetzt mit alter result Wert Mal Zählervariable i
    }
    return (result);  // Rückgabe
  } else if (x ==
             0) {  // Spezialfall für die Fakultät von 0 (für x gleich Null)
    return (result);  // Rückgabe
  } else {            // sonst Teil
    return (-1);      // Fehlercode -1 (kann durch diese Rechenoperation nicht
                      // erreicht werden)
  }
}

main() {
  int a = 4;  // beliebige (solange diese im Definitionsbereich eines integers
              // liegt (ganzzahlig usw.)) Variable a mit der wir rechnen
  int Endergebnis =
      faculty(a);  // Zuweisung des Ergebniswertes von der Fakultätsmethode zur
                   // Zwischenvariable Endergebnis
  if (Endergebnis == -1) {  // wenn der Fehlercode -1 zurückgegeben wurde
    printf(
        "Fehler: Nicht definiert für negative Zahlen\n");  // Ausgabe der
                                                           // Fehlermeldung für
                                                           // negative Inputs
  } else {  // wenn kein Fehlercode (-1) von der faculty Methode zurückgegeben
            // wurde (also, wenn die Methode erfolgreich die Fakultät berechnet
            // hat)
    printf("%d! =%d\n", a,
           Endergebnis);  // Ausgabe der faktorialen Berechnung bei gültiger
                          // Eingabe (positives int), z.B. 4! = 24
  }
}