#include <stdio.h>

int countOnes(int number) {
    int count = 0;
    while (number) {
        count += number & 1;
        number >>= 1;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        int result = countOnes(num);
        printf("%d\n", result);
    }

    return 0;
}
