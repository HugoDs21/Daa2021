#include <stdio.h>
#include <stdlib.h>

int sumDigits(int num)
{
    int sum = 0, lastDigit;
    while (num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int nSeq, num, totalSum;
    scanf("%d", &nSeq);
    for (int i = 0; i < nSeq; i++)
    {
        scanf("%d %d", &num, &totalSum);
        while (sumDigits(++num) != totalSum)
        {
        }
        printf("%d\n", num);
    }
    
    return 0;
}
