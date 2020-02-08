#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>

int bosshealth10=2000;

void flash10(int x);
void stat10(int a, time_t start, time_t all);
void slime10();
void rule10();
void explode10();

main()
{
    int delay=0;
    time_t totaltime=60;

    rule10();

    time_t start = time(NULL);
    while(time(NULL)-start < totaltime && bosshealth10>0)
    {
        int press=0;
        char hit;
        time_t secs=0;
        time_t atk_time;
        srand(time(NULL));

        do
        {

            atk_time = time(NULL);
            secs=rand()%3+4;
            stat10(0,start,totaltime);
            while(time(NULL) - atk_time < secs && bosshealth10>0 && time(NULL)-start < totaltime)
            {
                if(kbhit())
                {
                    hit = getch();
                    if(hit==' ')
                    {
                        bosshealth10-=10;
                        stat10(0,start,totaltime);
                        flash10(0);
                    }
                    else if(hit=='r')
                    {
                        time_t mark = time(NULL);
                        rule10();
                        time_t add = time(NULL)-mark;
                        totaltime+=add;
                    }

                }

                else
                {
                    stat10(0,start,totaltime);
                    while((!kbhit())&&delay<25)
                    {
                        delay++;
                        Sleep(2);
                    }
                    delay=0;
                }

            }

            stat10(1,start,totaltime);
            atk_time = time(NULL);
            secs=rand()%2+1;

            while(time(NULL) - atk_time < secs && bosshealth10>0 && time(NULL)-start <totaltime)
            {
                if(kbhit())
                {
                    hit = getch();

                    if(hit==' ')
                    {
                        bosshealth10+=30;
                        stat10(1,start,totaltime);
                        flash10(1);
                    }
                    else if(hit=='r')
                    {
                        time_t mark = time(NULL);
                        rule10();
                        time_t add = time(NULL)-mark;
                        totaltime+=add;
                    }

                }
                else
                {
                    stat10(1,start,totaltime);
                    while((!kbhit())&&delay<25)
                    {
                        delay++;
                        Sleep(2);
                    }
                    delay=0;
                }
            }
        }
        while(bosshealth10>0 && time(NULL)-start < totaltime);
    }

    if(bosshealth10>0)
        explode10();

    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|            Game: Exploding Slime            |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                      |                      |\n");
    if(bosshealth10>0)
    printf("\t\t\t|   Boss health: %4d  |  Time left: %3d sec  |\n", bosshealth10,0);
    else
    printf("\t\t\t|   Boss health: %4d  |  Time left: %3d sec  |\n", bosshealth10,totaltime-(time(NULL)-start));
    printf("\t\t\t|                      |                      |\n");
    printf("\t\t\t+---------------------------------------------+\n");

    if(bosshealth10>0)
    {
        printf("\t\t\t|              Winner: GameMaster             |\n");
        printf("\t\t\t+---------------------------------------------+\n\n");
    }

    else
    {
        printf("\t\t\t|                Winner: Player               |\n");
        printf("\t\t\t+---------------------------------------------+\n\n");
        slime10();
    }

    printf("\n\t\t\tPress Q to quit.\n");

    char end;

    while(1)
    {
        kbhit();
        end = getch();
        if(end=='q')
            break;
    }
}

void stat10(int a, time_t start, time_t all)
{
    char mode[20];
    if(a==0)
        strcpy(mode,"Fire");
    else if(a==1)
        strcpy(mode,"Water");
    time_t timeleft;
    timeleft=all-(time(NULL)-start);


    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|            Game: Exploding Slime            |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|               Boss Mode :%5s              |\n",mode);
    printf("\t\t\t+----------------------+----------------------+\n");
    printf("\t\t\t|                      |                      |\n");
    printf("\t\t\t|   Boss health: %4d  |  Time left: %3d sec  |\n", bosshealth10,timeleft);
    printf("\t\t\t|                      |                      |\n");
    printf("\t\t\t+----------------------+----------------------+\n");
    printf("\t\t\t|          *Type R to see the rules*          |\n");
    printf("\t\t\t+---------------------------------------------+\n\n");
    slime10(a);
}

void rule10()
{
    system("cls");
    printf("\n\n\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|             Game : Exploding Slime          |\n");
    printf("\t\t\t+---------------------------------------------+\n");
    printf("\t\t\t|                    Rules                    |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  1) In this game, player have to attack the |\n");
    printf("\t\t\t|     slime by hold or press \"Space bar\"      |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  2) The slime is a mysterious creature.     |\n");
    printf("\t\t\t|     It can change between 'Fire mode' and   |\n");
    printf("\t\t\t|     'Water Mode' after a certain time.      |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  3) The effect of player's attack depends   |\n");
    printf("\t\t\t|     on the slime's mode.                    |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|     Fire mode : the slime will get -10      |\n");
    printf("\t\t\t|                 damages when it is attacked |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|     Water mode: the slime will regenerates  |\n");
    printf("\t\t\t|                 30 hp when it is attacked   |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  4) The slime has 2000 hp.                  |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  5) The slime will do a self-explosion      |\n");
    printf("\t\t\t|     after 60 seconds countdown.             |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  6) The slime will be saved and will not    |\n");
    printf("\t\t\t|     explode if its hp reaches 0 before      |\n");
    printf("\t\t\t|     the explosion.                          |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|  7) If the slime explode, the player loses. |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t|     If the player can save the slime before |\n");
    printf("\t\t\t|     it explodes, the player wins.           |\n");
    printf("\t\t\t|                                             |\n");
    printf("\t\t\t+---------------------------------------------+\n");

    printf("\n\t\t\tPress any button to continue.\n");
    getch();
    system("cls");
}

void slime10()
{
    printf("\t\t\t                ##########                 \n");
    printf("\t\t\t        ########,,,,,,,,,,########         \n");
    printf("\t\t\t      ##,,,,,,,,,,,,,,,,,,,,,,,,,,##       \n");
    printf("\t\t\t    ##,,,,,,,,,,,,,,,,,,,,,,,,,,,,##       \n");
    printf("\t\t\t  ##,,,,,,,,,,,,,,,,,,            ,,##     \n");
    printf("\t\t\t  ##,,,,,,,,,,,,,,                  ,,##   \n");
    printf("\t\t\t##,,,,,,,,,,                        ,,,,## \n");
    printf("\t\t\t##,,,,,,,,,,        ##        ##      ,,## \n");
    printf("\t\t\t##,,,,,,,,          ##        ##      ,,## \n");
    printf("\t\t\t##,,,,,,,,          ##        ##      ,,## \n");
    printf("\t\t\t##,,,,,,,,,,                          ,,## \n");
    printf("\t\t\t##,,,,,,,,,,,,                        ,,## \n");
    printf("\t\t\t##,,,,,,,,,,,,,,,,,,                ,,,,## \n");
    printf("\t\t\t####,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,#### \n");
    printf("\t\t\t    ##################################     \n");

}

void flash10(int x)
{
    if (x==0)
        system("color 0C");
    else if (x==1)
        system("color 09");
    Sleep(50);
    system("color 07");
}

void explode10()
{
    for(int x=0; x<4; x++)
    {
        system("color F0");
        Sleep(20);
        system("color CF");
        Sleep(50);
        system("color 40");
        Sleep(15);
        system("color EF");
        Sleep(20);
        system("color C0");
        Sleep(20);
        system("color EF");
        Sleep(10);
    }
        system("cls");
        system("color F0");
        Sleep(1000);
        system("color 07");

}








