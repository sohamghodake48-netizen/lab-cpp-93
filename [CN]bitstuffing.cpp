#include <stdio.h>

int main() {
    int input_frame[100], output_frame[200];
    int n, i, j = 0, count = 0;

    printf("Enter input frame length: ");
    scanf("%d", &n);

    printf("Enter binary frame bits (separated by spaces, e.g., 0 1 1 1 1 1 1): \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &input_frame[i]);
    }

    // Bit Stuffing Core Logic
    for(i = 0; i < n; i++) {
        output_frame[j++] = input_frame[i]; // Copy original bit
        
        if(input_frame[i] == 1) {
            count++;
            if(count == 5) {
                output_frame[j++] = 0; // Stuff a 0 after 5 consecutive 1s
                count = 0;             // Reset counter
            }
        } else {
            count = 0; // Reset counter if a 0 is found
        }
    }

    printf("\nFrame after Bit Stuffing: ");
    for(i = 0; i < j; i++) {
        printf("%d", output_frame[i]);
    }
    printf("\n");

    return 0;
}
