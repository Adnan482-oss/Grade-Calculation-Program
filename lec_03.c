#include <stdio.h>

int main(){
    int mark;
    printf("Enter a mark:\n");
    scanf("%d", &mark);
    
    // Check if the mark is invalid
    if (mark > 100 || mark < 0) {
        printf("Invalid mark\n");
    } else {
        // Grade conditions
        if (mark >= 80) {
            printf("Your grade is: A+\n");
        } else if (mark >= 70) {
            printf("Your grade is: A\n");
        } else if (mark >= 60) {
            printf("Your grade is: A-\n");
        } else if (mark >= 50) {
            printf("Your grade is: B\n");
        } else if (mark >= 40) {
            printf("Your grade is: D\n");
        } else if (mark >= 30) {
            printf("Your grade is: F\n");
        } else {
            // Optional: You can add a case for very low marks if needed
            printf("You have failed.\n");
        }
    }
    
    return 0;
}
