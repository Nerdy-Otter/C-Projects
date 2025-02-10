/*Project name: Rock, Paper and Scissors Game
Author: K. Rishi  (Nerdy-Otter)*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int pscore = 0, cscore = 0, rounds = 0;
    /*0-->Rock
    1-->Paper
    2-->Scissors*/
    for (rounds = 0; rounds <= 5; rounds++)
    {
        srand(time(0));
        int player, computer = (rand() % 3) + 0;
        printf("\nChoose 0 for Rock , 1 for paper , 2 for Scissors \n");
        scanf("%d", &player);
        if (player > 2)
        {
            printf("\n\nNot within options\n");
            continue;
            rounds++;
        }
        printf("%d\n", computer);
        printf("\nPlayer chose %d\nComputer chose %d\n\n", player, computer);

        if (player == 0 && computer == 0)
        {
            printf("Its a draw!\n");
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 0 && computer == 1)
        {
            printf("You lost this round, Paper>Rock\n ");
            cscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 0 && computer == 2)
        {
            printf("You win! Rock>Scissors\n");
            pscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 1 && computer == 0)
        {
            printf("You win! Paper>Rock\n");
            pscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 1 && computer == 1)
        {
            printf("Its a draw! Both chose paper\n");
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 1 && computer == 2)
        {
            printf("You lose! Scissors>Paper\n");
            cscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 2 && computer == 0)
        {
            printf("You lose! Rock>Scissors\n");
            cscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 2 && computer == 1)
        {
            printf("You win! Scissors>Paper\n");
            pscore++;
            printf("Score is %d : %d\n", pscore, cscore);
        }
        if (player == 2 && computer == 2)
        {
            printf("Its a draw, Both chose Scissors\n");
            printf("Score is %d : %d\n", pscore, cscore);
        }
    }
    printf("\n\nFinal score is %d : %d \n", pscore, cscore);
    if (cscore > pscore)
    {
        printf("\n\nYou lost, Better luck next time...\n");
        printf("Thanks for playing!");
    }
    else if (pscore == cscore)
    {
        printf("\n\nIts a tie!\n");
        printf("Thanks for playing!");
    }
    else
    {
        printf("\n\nYou won! well done!\n");
        printf("Thanks for playing!");
    }
    return 0;
}