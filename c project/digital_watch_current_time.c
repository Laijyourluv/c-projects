#include <stdio.h>
#include <time.h>

int main()
{
    time_t s, val = 1; //  store calendar time

    struct tm *current_time; //hold date and time

    s = time(NULL); // time in second

    current_time = localtime(&s); //to get current time

    // print time in hour / minuteds/ seconds

    printf("\nYour current time \n\n hour::minute::second\n%d\t:%d\t:%d\n\n",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);

    return 0;
}