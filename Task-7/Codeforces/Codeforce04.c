#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 0;

    for (int i = 0; i < n; i++) {
        char statement[3];
        scanf("%s", statement);

        if (statement[0] == '+' || statement[2] == '+') {
            x++;
        } else if (statement[0] == '-' || statement[2] == '-') {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}