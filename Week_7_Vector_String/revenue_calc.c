#include <stdio.h>

int main() {
    float revenue[7] = {800.00, 620.00, 900.00, 450.00, 800.00, 780.00, 0.00};
    char *daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    float totalRevenue = 0.0;
    for (int i = 0; i < 6; i++) {
        totalRevenue += revenue[i];
    }

    float averageRevenue = totalRevenue / 6;

    int maxDay = 0;
    int minDay = 0;
    for (int i = 1; i < 6; i++) {
        if (revenue[i] > revenue[maxDay]) {
            maxDay = i;
        }
        if (revenue[i] < revenue[minDay]) {
            minDay = i;
        }
    }

    printf("Total Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);
    printf("Day with Maximum Revenue: %s (%.2f)\n", daysOfWeek[maxDay], revenue[maxDay]);
    printf("Day with Minimum Revenue: %s (%.2f)\n", daysOfWeek[minDay], revenue[minDay]);

    return 0;
}
