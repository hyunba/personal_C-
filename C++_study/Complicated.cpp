#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x += 50; // x = x + 50 
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x -= 50; // x = x - 50, ���� x�� 150�̹Ƿ� 100�� ��µȴ�. 
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x *= 50;
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x /= 50;
    printf("���� x�� ���� %d�Դϴ�.\n", x);
    x %= 3; // 100�� 3���� ���� ������ ���� ���ϹǷ� 1�� ��. 
    printf("���� x�� ���� %d�Դϴ�.\n", x); 
    
    return 0;
}