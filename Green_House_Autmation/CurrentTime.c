#include <stdio.h>
#include <time.h>  //Includes inbuild the time library.

int main() {
    // Get the current time
    time_t now; //Declares a variable of type time_t to hold the current time.
    time(&now); // Gets the current time and stores it in now.

    // Convert it to local time representation
    struct tm *local = localtime(&now); //Converts the time to local time, returning a pointer to a tm structure.

    // Print the current date and time
    printf("\nCurrent date and time: %s", asctime(local));  //Converts the tm structure to a human-readable string format.

    return 0;
}
