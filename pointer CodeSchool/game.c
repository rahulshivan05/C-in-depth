#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void play(int bet)
{
    // char C[3] = {'J', 'Q', 'K'}; // store in the stack section
    char *C = (char *)(malloc(3 * sizeof(char))); // store in the heap section
    C[0] = 'J';
    C[1] = 'Q';
    C[2] = 'K';
    printf("Shuffling ......\n");
    srand(time(NULL)); // seeding random number generator
    for (int i = 0; i < 5; i++)
    {
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x] = C[y];
        C[y] = temp; // swaps character's at position x and y
    }
    int playersGuess = 0;
    printf("What's the position of Queen - 1,2 or 3? ");
    scanf("%d", &playersGuess);

        if (C[playersGuess - 1] == 'Q')
    {
        cash += 3 * bet;
        printf("You win ! Result = \"%c %c %C\" Total Cash = %d\n", C[0], C[1], C[2], cash);
    }
    else
    {
        cash -= bet;
        printf("You Loose ! Result = \"%c %c %C\" Total Cash = %d\n", C[0], C[1], C[2], cash);
    }
    free(C);
}

int main(int argc, char const *argv[])
{
    int bet = 0, option = 0;
    printf("**Welcome to the Virtual Casino**\n");
    printf("Total cash = $%d\n", cash);
    while (cash > 0)
    {
        printf("What's your bet? $");
        scanf("%d", &bet);
        if (bet == 0 || bet > cash)
        {
            printf("You have not enough cash. You are not play.\n");
            break;
        }
        else
        {
            play(bet);
        }
        printf("\n**************************************************\n");
    }

    return 0;
}
