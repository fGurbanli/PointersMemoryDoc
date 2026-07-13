#include <stdio.h>

int GetUserPosInput();
void DoubleValue(int *number);

int main(void) {
    printf("Please enter a positive number: ");
    int number = GetUserPosInput();

    printf("Entered number is: %d", number);

    DoubleValue(&number);
    printf("\nDoubled value is: %d", number);
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

void DoubleValue(int *number)
{
    *number *=2;
}