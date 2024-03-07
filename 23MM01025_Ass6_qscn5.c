#include <stdio.h>
int main()
{
    int row, col;
    int arr1[20][20], arr2[20][20];
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columnss: ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter elements:\n");
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
