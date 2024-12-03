#include <stdio.h>

// Define a structure to represent a Date
typedef struct {
    int day;   // Day of the month
    int month; // Month (1-12)
    int year;  // Year
} Date;

// Function to compare two dates
int compareDates(Date date1, Date date2) {
    if (date1.year < date2.year) {
        return -1;  // date1 is earlier
    } else if (date1.year > date2.year) {
        return 1;   // date1 is later
    } else {
        // If the year is the same, compare the month
        if (date1.month < date2.month) {
            return -1;  // date1 is earlier
        } else if (date1.month > date2.month) {
            return 1;   // date1 is later
        } else {
            // If both the year and month are the same, compare the day
            if (date1.day < date2.day) {
                return -1;  // date1 is earlier
            } else if (date1.day > date2.day) {
                return 1;   // date1 is later
            } else {
                return 0;   // Both dates are the same
            }
        }
    }
}

// Function to display the date
void displayDate(Date date) {
    printf("%02d/%02d/%d\n", date.day, date.month, date.year);
}

int main() {
    Date date1, date2;

    // Input for the first date
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input for the second date
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare the two dates
    int result = compareDates(date1, date2);
    
    // Output the result of comparison
    if (result == -1) {
        printf("The first date is earlier than the second date.\n");
    } else if (result == 1) {
        printf("The first date is later than the second date.\n");
    } else {
        printf("Both dates are the same.\n");
    }

    return 0;
}
