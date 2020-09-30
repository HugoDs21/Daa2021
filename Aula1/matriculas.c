#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int betweenAnZ(char ch)
{
    
}

int getMatGen(char* s)
{
    int gen, nLetter = 0;
    for (int i = 0; *(s+i) != '\0';i++)
    {
        if ((i == 0 || i == 1) && isalpha(*s+i))
        {
            gen = 1;
        }
        if ((i == 6 || i == 7) && isalpha(*s+i))
        {
            gen = 2;
        }
        if ((i == 3 || i == 4) && isalpha(*s+i))
        {
            gen = 3;
        }
        if (isalpha(*(s+i)))    
        {
            nLetter++;
        }
                
    }
    if (nLetter > 2)
    {
        gen = 4;
    }
    
    return gen;
}

int main(int argc, char const *argv[])
{
    int nMats;
    char* mat1 = "AA-00-00";
    int gen = getMatGen(mat1);
    printf("%d\n", gen);
    return 0;
}
