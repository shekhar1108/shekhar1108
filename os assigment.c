#include <stdio.h>

int main() {

    int pid[5]={1,2,3,4,5};
    int AT[5]  = {0,1,2,3,4,};
    int BT[5]  = {5,7,6,2,4};
    int CT[5];
    int WT[5];

    int i;
    CT[0] = AT[0] + BT[0];
    

    for(i = 1; i < 5; i++) {
        if(CT[i-1] < AT[i])
            CT[i] = AT[i] + BT[i];
        else
            CT[i] = CT[i-1] + BT[i];
    }

    for(i = 0; i < 5; i++) {
        WT[i] = CT[i] - AT[i] - BT[i];
    }
    printf("PID\tAT\tBT\tCT\tWT\n");

    for(i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\t%d\t%d\n",
               pid[i], AT[i], BT[i], CT[i], WT[i]);
    }

    return 0;
}
