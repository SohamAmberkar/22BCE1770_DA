#include <stdio.h>

int main() {
    int orgmark[5];
    int birth[5];

    for (int i = 0;i < 5;i++) {
        int a, b;
        printf("\nEnter marks: ");
        scanf("%d", &a);
        printf("\nEnter birth month: ");
        scanf("%d", &b);
        orgmark[i] = a;
        orgmark[i] = b;
    }
    int newmrk[5];
    for (int j = 0;j < 5;j++) {
        newmrk[j] = orgmark[j] + birth[j];

    }
    int avg, revavg = 0;
    for (int o = 0;o < 5;o++) {
        avg += orgmark[o];
        revavg += newmrk[o];
    }
    avg = avg / 5;
    revavg = revavg / 5;
    int diff = revavg = avg;
    if (diff >= 5) {
        printf("Can implement siginificant increase in class average");
    }
    else {
        printf("Need not implement. No significant increase in class average ");
    }
}



