#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;

    while (count < 10) {
        printf("%d ", num);
        num += 2;
        count++;
    }

    return 0;
}
