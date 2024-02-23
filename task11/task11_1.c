#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} time;

time differe(time str, time stp); // Function prototype

int main() {
    time start, stop, difference;

    printf("Enter start time (enter hours, minutes, and seconds respectively):\n");
    scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

    printf("Enter stop time (enter hours, minutes, and seconds respectively):\n");
    scanf("%d %d %d", &stop.hours, &stop.minutes, &stop.seconds);

    difference = differe(start, stop);
    printf("Time difference: %d : %d : %d \n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

time differe(time str, time stp) {
    time diff;
    int startTimeInSeconds = str.hours * 3600 + str.minutes * 60 + str.seconds;
    int stopTimeInSeconds = stp.hours * 3600 + stp.minutes * 60 + stp.seconds;
    int diffInSeconds = startTimeInSeconds - stopTimeInSeconds;

    if (diffInSeconds < 0)
        diffInSeconds = -diffInSeconds;

    diff.hours = diffInSeconds / 3600;
    diff.minutes = (diffInSeconds % 3600) / 60;
    diff.seconds = (diffInSeconds % 3600) % 60;

    return diff;
}


