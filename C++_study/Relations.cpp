#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    // x = y -> x�� y�� ���� ��Ȳ �ǹ�.
    // x == y -> true, x�� y�� ���� ���� ������ �Ǻ��ϴ� ��. 
    
    printf("x�� y�� ������? %d\n", x==y); // 0�� ���� 
    printf("x�� y�� �ٸ���? %d\n", x!=y); // 1��  �� 
    printf("x�� y�� ū��? %d\n", x > y);
    printf("x�� y�� ������? %d\n", x < y);
    printf("x�� y���� ������? %d\n", x=y);
    
    if(x == y)
    {
     // x�� y�� ���� ��� �� �κ� ����   
    }�� 
    else
    {
     // �ƴ� ��� �� �κ� ��   
    }

    
    return 0;
}
