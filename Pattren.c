#include <stdio.h>

int main() {
    int choice, rows, i, j, num;

    printf("====== PATTERN LOGIC TOOL ======\n");
    printf("1. Right Triangle Number Pattern\n");
    printf("2. Reverse Right Triangle Pattern\n");
    printf("3. Same Number Triangle\n");
    printf("4. Number Pyramid Pattern\n");
    printf("5. Reverse Number Pyramid\n");
    printf("6. Floyd's Triangle\n");
    printf("7. Continuous Number Pattern\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    switch(choice) {

        case 1:
            for(i = 1; i <= rows; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 2:
            for(i = rows; i >= 1; i--) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            for(i = 1; i <= rows; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", i);
                }
                printf("\n");
            }
            break;

        case 4:
            for(i = 1; i <= rows; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", i + j - 1);
                }
                printf("\n");
            }
            break;

        case 5:
            for(i = rows; i >= 1; i--) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", i);
                }
                printf("\n");
            }
            break;

        case 6:
            num = 1;
            for(i = 1; i <= rows; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", num);
                    num++;
                }
                printf("\n");
            }
            break;

        case 7:
            num = 1;
            for(i = 1; i <= rows; i++) {
                for(j = 1; j <= i; j++) {
                    printf("%d ", num++);
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}