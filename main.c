#include <stdio.h>
#include <time.h>

int main() {

    FILE *file;

    time_t current_time;
 
    struct tm *time_info;
 
    char timeString[100];

    time(&current_time);

    time_info = localtime(&current_time);
    // Format the time as "YYYY-MM-DD HH:MM:SS" and store it in timeString
    strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", time_info);

    file = fopen("date.txt", "w");

    // Check file 
    if (file == NULL) {

        fprintf(stderr, "Could not open file.\n");
        return 1;
    }

    // Write ime to the file
    fprintf(file, "%s\n", timeString);

    fclose(file);

    // Print a success message to the console
    printf("Time information successfully written to date.txt.\n");

    return 0;
}
