#include <stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

double bereken_gemiddelde(int getal)
{
    // calculate and return average so far.
    static int avarageSum = 0;
    static int avarageIndex = 0;
    
    avarageIndex++;
    
    avarageSum = avarageSum + getal;
    
    return((double)avarageSum / avarageIndex);
}

int main(void)
{
    double gemiddelde;
    while (1)
    {
        int getal;
        scanf("%d", &getal);
        if (getal == 0)
            break;
        else
            gemiddelde = bereken_gemiddelde(getal);
    }
    printf("%.1f\n", gemiddelde);
    system("PAUSE");
    return 0;
}
