#include <stdio.h>

int main(void)
{
    int a = 20;
    
    int byunsoo; // �Ϲ����� ���� ���� 
    
    int *ptr_a; // ������ ���� 
    
    char *ptr_c; // ���� ���� ������ ����
    
    ptr_a = &a; // &�� �ּҰ��̹Ƿ� a�� �ּҰ��� �ǹ� 
    
    printf("%d\n", ptr_a); // �ּҰ��� ��Ÿ�� �ּҰ��� �� ��Ȳ�� ���� ����ؼ� �ٲ�
    
    printf("a�� ��: %d\n", a);
    printf("a�� �ּڰ�: %d\n", &a);
    printf("ptr_a�� ����� �� : %d\n", ptr_a);
    printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a); // �����ʹ� �� �ش� �ּ��� ���� ������ ���� �˷��� 
    
    return 0;
}
