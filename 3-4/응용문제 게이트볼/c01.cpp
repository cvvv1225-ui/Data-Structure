
#include <stdio.h>

int main(void) {
    int N;
    int x = 1, y = 1;
    int i;
    char swings[51];

    scanf("%d", &N);
    scanf("%50s", swings);

    for (i = 0; swings[i] != '\0'; i++) {
        if (swings[i] == 'L') {
            if (y > 1)
                y--;
        }
        else if (swings[i] == 'R') {
            if (y < N)
                y++;
        }
        else if (swings[i] == 'U') {
            if (x > 1)
                x--;
        }
        else if (swings[i] == 'D') {
            if (x < N)
                x++;
        }
    }

    printf("(%d, %d)\n", x, y);

    return 0;
}

