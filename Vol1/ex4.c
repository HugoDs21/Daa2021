#include <stdio.h>
#include <stdlib.h>

long long int sumDigits(long long int num)
{
    long long int sum = 0, lastDigit;
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
    int nSeq, totalSum;
    long long int num;
    scanf("%d", &nSeq);
    for (int i = 0; i < nSeq; i++)
    {
        scanf("%lld %d", &num, &totalSum);
        if(num < totalSum){
            num = 999999999999;
            while (sumDigits(++num) != totalSum)
            {
            }
        } else {
            while (sumDigits(++num) != totalSum)
            {
            }
        }
        printf("%lld\n", num);
    }
    
    return 0;
}
