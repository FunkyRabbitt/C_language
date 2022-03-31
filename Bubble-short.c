// -------taking the input from the user and sort them-----
#include <stdio.h>

void BubbleSort(int);

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    BubbleSort(size);
    return 0;
}
void BubbleSort(int size)
{
    int temp;
    int marks[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for the position %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - (1 + i); j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", marks[i]);
    }
}