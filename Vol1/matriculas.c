#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TOTAL 23*23*10*10*10

int getMatNum(char* s){
    int sum = 0;
    if (isalpha(s[0]) && isalpha(s[6]))
    {
        sum += TOTAL*3;
    }else if (isalpha(s[3]))
    {
        sum += TOTAL*2;
    }else if (isalpha(s[6]))    
    {
        sum += TOTAL;
    }

    int ans = 0;
    int base = 1;
    for (int i = 7; i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            ans += base * (s[i] - '0');
            base *= 10;
        }
        
    }

    for (int i = 7; i >= 0; i--)
    {
        
    }  
    
}

int main(int argc, char const *argv[])
{
    int nMats;
    scanf("%d", &nMats);
    char
    return 0;
}
