#include <stdio.h>

int main() {
    const int sonntag = 0;
    const int montag = 1;
    const int dienstag = 2;
    const int mittwoch = 3;
    const int donnerstag = 4;
    const int freitag = 5;
    const int samstag = 6;

    int day;

    while (1) {
        printf("Geben Sie den Wochentag ein (0 für Sonntag, 1 für Montag, ..., 6 für Samstag):\n");
        scanf("%i", &day);

        if (day >= 0 && day <= 6) {
            break;
        } else {
            printf("Ungültige Eingabe. Bitte geben Sie eine Zahl zwischen 0 und 6 ein.\n");
        }
    }

    if (day == sonntag) {
        printf("Es ist Sonntag.\n");
    } else if (day == montag) {
        printf("Es ist Montag.\n");
    } else if (day == dienstag) {
        printf("Es ist Dienstag.\n");
    } else if (day == mittwoch) {
        printf("Es ist Mittwoch.\n");
    } else if (day == donnerstag) {
        printf("Es ist Donnerstag.\n");
    } else if (day == freitag) {
        printf("Es ist Freitag.\n");
    } else if (day == samstag) {
        printf("Es ist Samstag.\n");
    }

    return 0;
}
