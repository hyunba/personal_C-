#include <stdio.h>
#define SECOND_PER_MINUTE 60

int main(void)
{
    int input = 1000;
    int minute = input / SECOND_PER_MINUTE;//�����  SECOND_PER_MINUTE 60�� ���Ǹ� �̸� ���־���. 
    int second = input % SECOND_PER_MINUTE; // ���� �������� �ʶ�� ������ 
    
    printf("%d�ʴ� %d�� %d��",input, minute, second);
        
    return 0;    
}
