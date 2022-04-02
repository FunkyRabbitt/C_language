#include <stdio.h>

void BubbleShort(int);

int main()
{
    int s;
    scanf("%d", &s);
    BubbleShort(s);
    return 0;
}
void BubbleShort(int N)
{
    int temp;
    int num[N];
    for (int i = 0; i < N; i++)
    {
        printf("NO. %d : ", i + 1);
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N - (1 + i); j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
} //                              BY: SUHSANT.EXE_