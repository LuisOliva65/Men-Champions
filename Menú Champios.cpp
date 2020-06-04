// https://docs.google.com/drawings/d/1BMpBoSZtSC4uXgHccLU0gJ2Ufge7RGKgYj6TZY6Fk_U/edit?usp=sharing en este link se puede ver el esquema del menú
#include <stdio.h>

int main()
{
    int opcion;
    
    while(opcion!=10)
    {
        printf("=====Champions League=====");
        printf("\n Elija un partido");
        printf("\n 1 Atlético madrid vs Liverpool");
        printf("\n 2 Tottenham vs RB Leipzig");
        printf("\n 3 Napoli vs Barcelona");
        printf("\n 4 Real Madrid vs Manchester city");
        printf("\n 5 Dortmund vs PSG");
        printf("\n 6 Atlanta vs Valencia C.F.");
        printf("\n 7 Chelsea vs Bayern");
        printf("\n 8 Lyon vs Juventus");
        printf("\n =====Cuartos de final=====");
        printf("\n 9 Atlético madrid vs RB Leipzig");
        printf("\n 10 Barcelona vs Real Madrid");
        printf("\n 11 PSG vs Atlanta");
        printf("\n 12 Bayern vs Lyon");
        printf("\n =====Semifinales=====");
        printf("\n 13 Atlético Madrid vs Real Madrid");
        printf("\n 14 Atlanta vs Bayern");
        printf("\n =====Gran Final=====");
        printf("\n 15 Real Madrid vs Bayern");
        scanf("%d", &opcion);
        
        if(opcion==1)
        {
        printf("\n Atlético madrid vs Liverpool");
        printf("\n Ganador Atlético madrid");
        }
        if (opcion==2)
        {
        printf("\n Tottenham vs RB Leipzig");
        printf("\n Ganador RB Leipzig");
        }
        if (opcion==3)
        {
        printf("\n 3 Napoli vs Barcelona");
        printf("\n Ganador Barcelona");
        }
        if (opcion==4)
        {
        printf("\n 4 Real Madrid vs Manchester city");
        printf("\n Ganador Real madrid");
        }
        if (opcion==5)
        {
        printf("\n 5 Dortmund vs PSG");
        printf("\n Ganador PSG");
        }
        if(opcion==6)
        {
        printf("\n 6 Atlanta vs Valencia C.F.");
        printf("\n Ganador Atlanta");
        }
        if (opcion==7)
        {
        printf("\n 7 Chelsea vs Bayern");
        printf("\n Ganador Bayern");
        }
        if (opcion==8)
        {
        printf("\n 8 Lyon vs Juventus");
        printf("\n Ganador Lyon");
        }
        if (opcion==9)
        {
        printf("\n 9 Atlético madrid vs RB Leipzig");
        printf("\n Ganador Atlético madrid");
        }
        if (opcion==10)
        {
        printf("\n 10 Barcelona vs Real Madrid");
        printf("\n Gandor Real Madrid");
        }
        if (opcion==11)
        {
        printf("\n 11 PSG vs Atlanta");
        printf("\n Ganador Atlanta");
        }
        if (opcion==12)
        {
        printf("\n 12 Bayern vs Lyon");
        printf("\n Ganador Bayern");
        }
        if (opcion==13)
        {
        printf("\n 13 Atlético Madrid vs Real Madrid");
        printf("\n Ganador Real Madrid");
        }
        if (opcion==14)
        {
        printf("\n 14 Atlanta vs Bayern");
        printf("\n Ganador Bayern");
        }
        if (opcion==15)
        {
        printf("\n 15 Real Madrid vs Bayern");
        printf("\n Ganador Bayern");
        }
    }
}

