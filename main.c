#include <stdio.h>

int GetUserPosInput();
int DoubleValue(int *number);

int main(void) {
    printf("Please enter a positive number: ");
    int number = GetUserPosInput();
    int *ptr = &number;

    printf("Entered number is: %d", number);

    DoubleValue(ptr);
    printf("\nDoubled value is: %d", *ptr);
    return 0;
}

int GetUserPosInput() {
    int input;
    while (1)
    {
        if (scanf("%d", &input) == 1 && input >= 0)
        {
            break;
        }
        while (getchar() != '\n');
        printf("\nEnter a valid value!\n");
    }
    return input;
}

int DoubleValue(int *number)
{
    *number *=2;
    return *number;
}