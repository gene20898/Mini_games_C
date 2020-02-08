#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int element12(time_t x, int round, int score);
int counter12(char element1, char element2, time_t cd, char elem[20], int round, int score);
void stat12(time_t timeleft, int comhealth, int pleyerhealth);
void damage12(int x);
void rule12();

main()
{
    int i=0,total=0,temp=0,round=5,score=10;
    char str[80],ch,put;

    rule12();

    for(round=5; round>=1; round--)
    {
        for(i=0; i<6; i++)
        {
            system("cls");
            printf("\n\n\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|            Game: Four Elemental             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t|                Player HP:%2d                 |\n",score);
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                   Wave: %d                   |\n",6-round);
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|          *Type R to see the rules*          |\n");
            printf("\t\t\t+---------------------------------------------+\n\n");
            printf("\n");

            temp=element12(round,round,score);
            score+=temp;
            score--;

            system("cls");
            printf("\n\n\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|            Game: Four Elemental             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t|                Player HP:%2d                 |\n",score);
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                   Wave: %d                   |\n",6-round);
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|          *Type R to see the rules*          |\n");
            printf("\t\t\t+---------------------------------------------+\n\n");
            printf("\n");

            temp=0;

            if(score<=0)
                break;
        }
        if(score<=0)
            break;

        do
        {
            system("cls");
            printf("\n\n\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|            Game: Four Elemental             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t|                Player HP:%2d                 |\n",score);
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                   Wave: %d                   |\n",6-round);
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|          *Type R to see the rules*          |\n");
            printf("\t\t\t+---------------------------------------------+\n\n");
            printf("\n");

            printf("\t\t\tPress N when you are ready for the next wave.\n");
            printf("\n\t\t\tPress R to see the rules.\n");

            char input;
            while(1)
            {
                kbhit();
                input = getch();
                if(input=='n' || input=='N' || input=='R' || input=='r')
                break;

            }
            if(input=='n' || input=='N')
                break;
            else if(input=='r'|| input=='R')
                rule12();

        }
        while(1);

    }

    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|            Game: Four Elemental             |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|                Player HP:%2d                 |\n",score);
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                   Wave: %d                   |\n",6-round);
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                                             |\n");

    if(score>0)
        printf("\t\t\t|               Winner: Player                |\n");

    else
        printf("\t\t\t|              Winner: GameMaster             |\n");

    printf("\t\t\t|                                             |\n");
    printf("\t\t\t+---------------------------------------------+\n\n");
    printf("\n");
    printf("\t\t\tPress Q to exit.");

    while(1)
    {
        kbhit();
        put = getch();
        if(put=='q')
            break;
    }

}

int element12(time_t cd, int round, int score)
{
    int turnscore=0;
    srand(time(NULL));
    int a = rand()%4;

    switch(a)
    {
    case 0:
    {
        printf("\t\t\t\t\t  +--------+\n");
        printf("\t\t\t\t\t  |  Fire  |\n");
        printf("\t\t\t\t\t  +--------+\n");
        turnscore=counter12('w','W',cd,"Fire",round,score);
        if(turnscore>1)
            turnscore=turnscore-2;

        else if(turnscore==0)
            damage12(1);
        break;
    }
    case 1:
    {
        printf("\t\t\t\t\t  +-------+\n");
        printf("\t\t\t\t\t  |  Air  |\n");
        printf("\t\t\t\t\t  +-------+\n");
        turnscore=counter12('e','E',cd,"Air",round,score);
        if(turnscore>1)
            turnscore=turnscore-2;

        else if(turnscore==0)
            damage12(2);
        break;
    }
    case 2:
    {
        printf("\t\t\t\t\t  +-------+\n");
        printf("\t\t\t\t\t  | Earth |\n");
        printf("\t\t\t\t\t  +-------+\n");
        turnscore=counter12('f','F',cd,"Earth",round,score);
        if(turnscore>1)
            turnscore=turnscore-2;

        else if(turnscore==0)
            damage12(3);

        break;
    }
    case 3:
    {
        printf("\t\t\t\t\t  +-------+\n");
        printf("\t\t\t\t\t  | Water |\n");
        printf("\t\t\t\t\t  +-------+\n");
        turnscore=counter12('a','A',cd,"Water",round,score);
        if(turnscore>1)
            turnscore=turnscore-2;

        else if(turnscore==0)
            damage12(4);
        break;
    }
    default:
        break;
    }
    return turnscore;
}

int counter12(char element1, char element2, time_t cd, char elem[20], int round, int score)
{
    time_t start=time(NULL);
    char counter='/0';
    fflush(stdin);
    while((time(NULL)-start)<cd)
    {
        counter='/0';
        fflush(stdin);

        if(kbhit())
            counter = getch();
        if(counter=='r'||counter=='R')
        {
            rule12();
            printf("\n\n\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|            Game: Four Elemental             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t|                Player HP:%2d                 |\n",score);
            printf("\t\t\t|                                             |\n");
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|                   Wave: %d                   |\n",6-round);
            printf("\t\t\t+---------------------------------------------+\n");
            printf("\t\t\t|          *Type R to see the rules*          |\n");
            printf("\t\t\t+---------------------------------------------+\n\n");
            printf("\n");
            break;
        }

        if(counter=='f'||counter=='F'||counter=='w'||counter=='W'||counter=='e'||counter=='E'||counter=='a'||counter=='A')
            break;

    }

    if(counter=='r'||counter=='R')
    {
        int rule = element12(cd,round,score);
        return rule+2;
    }
    else if(counter==element1||counter==element2)
        return 1;
    else
        return 0;
}

void damage12(int x)
{

    switch(x)
    {
    case 1:
        system("color C0");
        Sleep(20);
        system("color 4F");
        Sleep(50);
        system("color C0");
        Sleep(15);
        system("color 4F");
        Sleep(20);
        system("color 07");
        break;

    case 2:
        system("color E0");
        Sleep(20);
        system("color 7F");
        Sleep(50);
        system("color E0");
        Sleep(15);
        system("color 7F");
        Sleep(20);
        system("color 07");
        break;

    case 3:
        system("color 60");
        Sleep(20);
        system("color 2F");
        Sleep(50);
        system("color 60");
        Sleep(15);
        system("color 2F");
        Sleep(20);
        system("color 07");
        break;

    case 4:
        system("color 90");
        Sleep(20);
        system("color 1F");
        Sleep(50);
        system("color 90");
        Sleep(15);
        system("color 1F");
        Sleep(20);
        system("color 07");
        break;
    default:
        break;
    }
}

void rule12()
{
    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|            Game : Four Elemental            |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                    Rules                    |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  1) In this game, The Player will have to   |\n");
    printf("\t\t\t|     fight with The Dark Alchemist.          |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  2) The Player can press a key on keyboard  |\n");
    printf("\t\t\t|     to cast a spell.                        |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|     Press 'F' key to cast fire spell        |\n");
    printf("\t\t\t|     Press 'E' key to cast earth spell       |\n");
    printf("\t\t\t|     Press 'W' key to cast water spell       |\n");
    printf("\t\t\t|     Press 'A' key to cast air spell         |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  3) The Player must use a certain spell to  |\n");
    printf("\t\t\t|     counter The Dark Alchemist's spell.     |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|   +---------------------------------------+ |\n");
    printf("\t\t\t|   |  Fire wins Earth   |  Earth wins Air  | |\n");
    printf("\t\t\t|   |---------------------------------------| |\n");
    printf("\t\t\t|   |   Air wins Water   |  Water wins Fire | |\n");
    printf("\t\t\t|   +---------------------------------------+ |\n");
    printf("\t\t\t|   * The Player need to remember this        |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  4) If The Player survives after 5 waves,   |\n");
    printf("\t\t\t|     The Player wins.                        |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t+---------------------------------------------+\n");

    printf("\n\t\t\tPress any button to continue.\n");
    getch();
    system("cls");
}
