#include <stdio.h>
int main()
{
    int num[100];
    int N;
    int i, j, tmp;

    scanf("%d", &N);
    for(i = 0; i < N; i++)
        scanf ("%d", &num[i]);
    for(i = 0; i < N; i++)
    {
        for( j=i+1; j < N; j++)
        {
            if(num[i] > num[j])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for(i = 0; i < N-1; i++)
        printf ("%d ", num[i]);
    printf ("%d\n", num[N-1]);
    return 0;
}
