#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
void rule11();
main()
{
    int player_score = 10, com_score = 10, player_total = 0, com_total = 0, random_num, turn, com_random, cheat;
    char choice=0, confirm=0;
    srand(time(NULL));

    rule11();

    turn = rand()%2;

    do{ system("cls");
        printf("\n\n\t\t\t+---------------------------------------------+\n");
        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
        printf("\t\t\t+----------------------+----------------------+\n");
        printf("\t\t\t|        Player        |       GameMaster     |\n");
        printf("\t\t\t+----------------------+----------------------+\n");
        printf("\t\t\t|                      |                      |\n");
        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
        printf("\t\t\t|                      |                      |\n");
        printf("\t\t\t+----------------------+----------------------+\n");
        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
        printf("\t\t\t+---------------------------------------------+\n\n");

        if(turn==0)
        {
            random_num = rand()%6;
            printf("\t\t\tPlayer's turn ");

            if(random_num==0)
            {
                player_total=0;
                printf("\n\n\t\t\tNumber: %d",random_num+1);
                printf("\n\t\t\tTurn score: %d",player_total);
                printf("\n\n\t\t\t*********************BREAK*********************\n\n");
                getch();
            }
            else
            {
                player_total+= random_num+1;
                printf("\n\n\t\t\tNumber: %d",random_num+1);
                printf("\n\t\t\tTurn score: %d",player_total);
            }

            while((choice!='N' && choice!='n') && (confirm!='Y' && confirm!='y')&& random_num!=0)
            {
                printf("\n\n\t\t\tContinue rolling? (Y/N) : ");
                scanf(" %s", &choice);

               if(choice=='1')
                {
                    rule11();
                    system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        printf("\t\t\tPlayer's turn ");
                printf("\n\n\t\t\tNumber: %d",random_num+1);
                printf("\n\t\t\tTurn score: %d",player_total);
                }
                else if (choice=='Y' || choice=='y')
                {
                    system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");

                        random_num=rand()%6;
                        cheat=rand()%10;

                        if(cheat==0)
                        {
                            random_num=0;
                        }

                        if(random_num==0)
                        {
                            printf("\t\t\tPlayer's turn ");
                            player_total=0;
                            printf("\n\n\t\t\tNumber: %d",random_num+1);
                            printf("\n\t\t\tTurn score: %d",player_total);
                            printf("\n\n\t\t\t*********************BREAK*********************\n\n");
                            getch();
                            continue;
                        }
                        else
                        {
                            printf("\t\t\tPlayer's turn ");
                            player_total+= random_num+1;
                            printf("\n\n\t\t\tNumber: %d",random_num+1);
                            printf("\n\t\t\tTurn score: %d",player_total);
                        }

                }
                else if (choice=='N'||choice=='n')
                {
                    do{
                        system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        printf("\n\t\t\tTotal turn score is %d",player_total);
                        printf("\n\n\t\t\tDo you want to hold? (Y/N) : ");

                        scanf(" %s", &confirm);

                        if (confirm=='1')
                        {
                            rule11();
                            system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        }
                        else if(confirm=='Y'||confirm=='y')
                        {
                            player_score-=player_total;
                        }
                        else if(confirm=='N'||confirm=='n')
                        {
                           continue;
                        }

                    }while(confirm!='N' && confirm!='n' && confirm!='Y' && confirm!='y');
                    continue;
                }
            }
            choice=0;
            confirm=0;
            player_total=0;
            printf("\n\t\t\tPress any button to continue.\n");
            getch();
            turn=1;
        }

        else if(turn==1)
        {
            random_num = rand()%6;
            printf("\t\t\tGameMaster's turn ");

            if(random_num==0)
            {
                com_total=0;
                printf("\n\n\t\t\tNumber: %d",random_num+1);
                printf("\n\t\t\tTurn score: %d",com_total);
                printf("\n\n\t\t\t*********************BREAK*********************\n\n");
                getch();
            }
            else if (random_num!=0)
            {
                com_total+= random_num+1;
                printf("\n\n\t\t\tNumber: %d",random_num+1);
                printf("\n\t\t\tTurn score: %d",com_total);
            }

            com_random=1;

            while(com_random!=0 && random_num!=0 && com_score>-100)
            {

                com_random=rand()%4;

                if (com_random!=0 && com_score-com_total>-100)
                {
                    Sleep(300);
                    printf("\n\n\t\t\tContinue rolling");
                    printf("\n\n\t\t\tPress any button to continue.\n");
                    getch();
                    system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");

                        random_num = rand()%6;

                        if(random_num==0)
                        {
                            printf("\t\t\tGameMaster's turn ");
                            com_total=0;
                            printf("\n\n\t\t\tNumber: %d",random_num+1);
                            printf("\n\t\t\tTurn score: %d",com_total);
                            printf("\n\n\t\t\t*********************BREAK*********************\n\n");
                            getch();
                        }
                        else if(random_num!=0)
                        {
                            printf("\t\t\tGameMaster's turn ");
                            com_total+= random_num+1;
                            printf("\n\n\t\t\tNumber: %d",random_num+1);
                            printf("\n\t\t\tTurn score: %d",com_total);
                        }

                }
                else if(com_random==0 || com_score-com_total<=-100)
                {
                        system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|         *Type 101 to see the rules*         |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        printf("\n\t\t\tTotal turn score is %d",com_total);

                        com_score-=com_total;
                        Sleep(300);
                        printf("\n\n\t\t\tHold");
                        getch();

                }
            }

            com_total=0;
            printf("\n\t\t\tPress any button to continue.\n");
            getch();
            turn=0;
        }

    }while(player_score >-100 && com_score >-100);

    if(player_score < com_score)
    {
        system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|              Winner : Player                |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        getch();
    }
    else
    {
               system("cls");
                        printf("\n\n\t\t\t+---------------------------------------------+\n");
                        printf("\t\t\t|         Game: Rolling to the Deep           |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|        Player        |       GameMaster     |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t|     Score : %4d     |      Score : %4d    |\n", player_score, com_score);
                        printf("\t\t\t|                      |                      |\n");
                        printf("\t\t\t+----------------------+----------------------+\n");
                        printf("\t\t\t|             Winner : GameMaster             |\n");
                        printf("\t\t\t+---------------------------------------------+\n\n");
                        getch();
    }
}

void rule11()
{
    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|           Game : Rolling to the deep        |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                    Rules                    |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  1) The Player or the GameMaster will be    |\n");
    printf("\t\t\t|     randomly chosen to go first             |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  2) At the start of the turn, the game will |\n");
    printf("\t\t\t|     random a number from 1 to 6             |\n");
    printf("\t\t\t|     (roll a die)                            |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  3) Once the Player or the GameMaster       |\n");
    printf("\t\t\t|     receive the number, they will have a    |\n");
    printf("\t\t\t|     choice to 'hold' or 'roll'.             |\n");
    printf("\t\t\t|         hold - (keep that score)            |\n");
    printf("\t\t\t|         roll - (continue to random)         |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  4) If a number is 2-5, the score will be   |\n");
    printf("\t\t\t|     added to the total score in that turn   |\n");
    printf("\t\t\t|     and the turn will continue.             |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  5) If a number is 1, the turn will end and |\n");
    printf("\t\t\t|     no score will be counted in that turn.  |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  6) If choose 'hold', the total score in    |\n");
    printf("\t\t\t|     that turn will be subtracted from the   |\n");
    printf("\t\t\t|     overall score, and the turn will end.   |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  6) After the turn end, it will become the  |\n");
    printf("\t\t\t|     opponent's turn                         |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  7) Both the Player and the GameMaster's    |\n");
    printf("\t\t\t|     score will start at 10                  |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  8) Who gets -100 scores first win          |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t+---------------------------------------------+\n");

    printf("\n\t\t\tPress any button to continue.\n");
    getch();
    system("cls");
}
