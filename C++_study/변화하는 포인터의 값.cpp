#include <stdio.h>

int main() 
{
    int a = 10;
    int b = 20;
    
    int *ptr;
    
    ptr = &a;
    printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
    
    ptr = &b;
    printf("ptr�� ����Ű�� ������ ����� �� : %d\n", *ptr);
    
    printf("b�� �� : %d\n", b);
    
    *ptr = 30; // �� �ǹ̴� ���� b��ü�� ���� 30���� �ִ� �ǹ̷� b���� 30���� �ٲ�� �ȴ�.  
    printf("b�� �� : %d\n", b);
    
    return 0;
}
