#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    printf("Welcome!\n");
        int pw = 12345;         //THIS IS THE PASSWORD!!!!!
    int typedPw;
    printf("\nPassword (Max. 16 letter!):");
    scanf_s("%d", &typedPw);
        if (pw == typedPw) {
            printf("\nCorrect password! Welcome at the database!");
        } else {
            printf("\nWrong password! Try again!");
            getch();
    }
        return 0;
}
