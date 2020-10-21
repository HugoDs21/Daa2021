#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nSeq, num, count = 0;
    scanf("%d", &nSeq);
    for (int i = 0; i < nSeq; i++)
    {
        scanf("%d", &num);
        if (num == 42)
        {
            count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
