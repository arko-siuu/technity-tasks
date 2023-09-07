#include <stdio.h>
#include <string.h>

int main() {
    char situation[101];  // Assuming a maximum length of 100 characters
    scanf("%s", situation);

    int length = strlen(situation);
    int consecutive_ones = 0, consecutive_zeros = 0;
    int is_dangerous = 0;

    // Iterate through the string to check for consecutive ones or zeros
    for (int i = 0; i < length; i++) {
        if (situation[i] == '0') {
            consecutive_zeros++;
            consecutive_ones = 0;
        } else {
            consecutive_ones++;
            consecutive_zeros = 0;
        }

        // Check if there are 7 consecutive ones or zeros
        if (consecutive_ones >= 7 || consecutive_zeros >= 7) {
            is_dangerous = 1;
            break;
        }
    }

    if (is_dangerous) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
