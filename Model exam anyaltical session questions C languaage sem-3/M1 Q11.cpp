#include <stdio.h>
int main() {
    int day, month, year, days_in_feb;
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_feb = 29;
        printf("%d is a leap year.\n", year);
    } else {
        days_in_feb = 28;
        printf("%d is not a leap year.\n", year);
    }
    if (month == 2) {
        printf("This month has %d days.\n", days_in_feb);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("This month has 30 days.\n");
    } else {
        printf("This month has 31 days.\n");
    }
    return 0;
}


