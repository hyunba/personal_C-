#include <stdio.h>

int main(void)
{
    int x; // int�� ������ �־��� �� �ִ�. x�� ������ 
    x = 5;
    printf("%d", x); // %d�� int���� ���� ���� ����. �� ���� x�� �ְڴٰ� ������ ��
    
    printf("���� x�� �޸� ũ��� %d �Դϴ�.", sizeof(x)); // sizeof�ȿ� �ִ� ������ �޸� ũ�Ⱑ �󸶳� �Ǵ��� �˷���. 
                                                            // int�� ũ��� 4byte�� ������.
     
    return 0;
}
