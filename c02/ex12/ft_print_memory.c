#include <stdio.h>
#include <unistd.h>

// Revisar la función getExaReverse 
char getExa (int n)
{
    int exaRev[] = {0};
    int length = 0;
    int aux;
    int i = 0;

    while(n / 16 >= 16)
    {
        exaRev[length] = n % 16;
        aux = n / 16;
        length++;
    }
    exaRev[length] = n / 16;

    while(i < length)
    {
        if(exaRev[i] >= 10)
        {
            aux = exaRev[i] - 10;
            exaRev[i] = 'a' + aux;
        }
        i++;
    }
    return exaRev;
}


void print(char cadena[])
{
    int memDir = &cadena[0];

    

}



int main()
{
    char null = 0;
    char cadena[] = "Bonjour les aminches\t\n\tc est fo u\ttout\tce qu on  peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n %c", null;
    char aux[16];
    int i = 0;
    int j = 0;
    int k = 0;

    while(cadena[i] != 0)
    {
        j = 0;
        while(j < 16)
        {
            aux[j] = cadena[k];
            j++;
            k++;
        }
        
        i++;
    }


    return 0;
}