#include <stdio.h>

int main (void)
{
    int x = 50, y = 30;
    printf("x�� y���� ũ�� y�� 40�̸��ΰ�? %d\n", (x > y) && (y < 40)); // �ϳ��� Ʋ���� ���� 
    printf("x�� y���� �۰ų� Ȥ�� y�� 30 �ΰ�? %d\n", (x < y) || (y == 30)); // �ϳ��� ������ �� 
    printf("x�� 50�� �ƴѰ�? %d\n", x != 50 );
    
    return 0;   
}


 
