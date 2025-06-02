#include <stdio.h>

#define IDLE 0
#define PARKED 1
#define ASCENDING 2
#define DESCENDING 3

int main() {
    int elevator_state;

    printf("Enter the current elevator state:\n");
    printf("0 - IDLE\n1 - PARKED\n2 - ASCENDING\n3 - DESCENDING\n");
    scanf("%d", &elevator_state);

    switch (elevator_state) {
        case IDLE:
            printf("The elevator is idle (waiting for a call).\n");
            break;
        case PARKED:
            printf("The elevator is parked (stopped on a floor to let someone in or out).\n");
            break;
        case ASCENDING:
            printf("The elevator is ascending (going up).\n");
            break;
        case DESCENDING:
            printf("The elevator is descending (going down).\n");
            break;
        default:
            printf("Invalid state entered.\n");
    }

    return 0;
}
