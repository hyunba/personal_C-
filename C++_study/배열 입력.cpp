#include <stdio.h>

int main(void)
{
    int a;
    int arr[1000];
    
    printf("�Է��� ������ ���� �Է�: ");
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = a-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
