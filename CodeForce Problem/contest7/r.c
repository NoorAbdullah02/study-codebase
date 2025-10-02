#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayChoice(int choice) {
    switch (choice) {
        case 0:
            printf("Rock");
            break;
        case 1:
            printf("Paper");
            break;
        case 2:
            printf("Scissors");
            break;
    }
}

int main() {
    int userChoice, computerChoice;

    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1;
    }

    computerChoice = rand() % 3;

    printf("You chose: ");
    displayChoice(userChoice);
    printf("\nComputer chose: ");
    displayChoice(computerChoice);
    printf("\n");

    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

return 0;
}