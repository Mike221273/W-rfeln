#include <stdio.h>
#include <windows.h>

#define MAX_WUERFEL 6
#define WUERFEL3 3
#define WUERFEL2 2
#define WUERFEL1 1

int main(void) {
    // Codepage setzen -> Umlaute korrekt darstellen. Fast immer eine gute Idee.
    system("chcp.com 1252"); 
    // Pseudozufallsgenerator mit aktueller Zeit initialisieren. Nur EINMAL im ganzen Programm!!!!
    srand(time(0));
    // rand() liefert Zufallszahlen im Bereich (0..RAND_MAX (32767) )
    // mit Modulo MAX_WUERFEL auf 0..5 skalieren. Plus 1 -> Ergebnis 1..6
    int wuerfelErgebnis = rand() % MAX_WUERFEL + 1;
    if (wuerfelErgebnis > WUERFEL3) {
        printf("Überdurchschnittlich!\n");
    }
    else {
        switch (wuerfelErgebnis) {
        case WUERFEL1:printf("Oh Mann!\n"); break;
        case WUERFEL2:printf("Naja\n"); break;
        case WUERFEL3:printf("O.K.\n"); break;
        default:printf("Häh??\n");
        }
    }

    return 0;
}