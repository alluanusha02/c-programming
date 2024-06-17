#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate computer's choice
int generate_computer_choice() {
    srand(time(NULL));
    return rand() % 3; // 0 for rock, 1 for paper, 2 for scissors
}

// Function to determine winner
int determine_winner(int player_choice, int computer_choice) {
    // 0 for draw, 1 for player wins, -1 for computer wins
    if (player_choice == computer_choice) {
        return 0;
    } else if ((player_choice == 0 && computer_choice == 2) ||
               (player_choice == 1 && computer_choice == 0) ||
               (player_choice == 2 && computer_choice == 1)) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int player_choice, computer_choice, result;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice:\n");
    printf("0: Rock\n1: Paper\n2: Scissors\n");

    printf("Your choice: ");
    scanf("%d", &player_choice);

    if (player_choice < 0 || player_choice > 2) {
        printf("Invalid choice! Please choose a number between 0 and 2.\n");
        return 1;
    }

    computer_choice = generate_computer_choice();

    printf("You chose: %s\n", choices[player_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    result = determine_winner(player_choice, computer_choice);

    if (result == 0) {
        printf("It's a draw!\n");
    } else if (result == 1) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
