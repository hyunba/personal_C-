#include <stdio.h>

int main(void)
{
    int year = 2020;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//���� �ϳ��� �����ϸ� �����̶�� �Ǵ� 
    {
        printf("%d���� ���� �Դϴ�.\n", year);
    }
    else
    {
        printf("%d���� ������ �ƴմϴ�.\n", year);
    }
    return 0;
}
