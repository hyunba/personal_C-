#include <stdio.h>

int print(int a)
{
    int i, j;
    for(i = 0; i < a; i++) // a�� �� �κ��� �ݺ�. 
    {
        for(j = 0; j <= i; j++) // i���� ��� 
        {
            printf("%d ", j + 1);
        }
        printf("\n"); // �ѹ��� ���ԵǸ� �ٹٲ� 
    }
    
}

int main(void)
{
    int a;
    scanf("%d", &a);
    print(a); // a���� ���� 
    
    return 0;
}
