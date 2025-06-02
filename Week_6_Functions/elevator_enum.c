#include <stdio.h>

enum elevator_state { IDLE, PARKED, ASCENDING ,DESCENDING};

int main() {
    enum elevator_state current_elevator_state;

    printf("Enter the current elevator state:\n");
    printf("0 - IDLE\n1 - PARKED\n2 - ASCENDING\n3 - DESCENDING\n");
    scanf("%d", &current_elevator_state);

    switch (current_elevator_state) {
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