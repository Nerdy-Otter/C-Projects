/*Project Name: Guess The Random Number
Author: K. Rishi (Nerdy-Otter)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guessed, n, i, chances = 10;
    printf("Welcome to GUESS THE RANDOM NUMBER!\nHere you have to guess a number within the range of 1 to 100!\n");
    printf("You have 10 guesses, Best of luck!\n");

    srand(time(0));
    int no_of_guesses = 0;
    int random_number = (rand() % 100) + 1;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("LOWER PLEASE!\n");
        }
        else if (guessed < random_number)
        {
            printf("HIGHER PLEASE!\n");
        }
        no_of_guesses++;
        printf("Chances left=%d\n", chances - no_of_guesses);
        if (no_of_guesses==chances)
        {
            printf("You couldnt guess the word in 10 chances, Better luck next time!");
            break;
        }
        
    } while (guessed != random_number);
    if (guessed == random_number)
    {
        printf("\nYOU GUESSED IT!\n");
        printf("\nNumber of guesses=%d\nThanks for playing!\n", no_of_guesses);
    }

    return 0;
}
