#include <stdio.h>

void print(int count) // count�� �Ű������� ���� 
{
    if(count == 0)
    {
        return;     
    }
    else
    {
        printf("���ڿ��� ����մϴ�.\n");
        print(count - 1); // ��� �Լ� �ݺ��� �� �ڱ� �ڽ��� �����ϴ� ��. 
    }
    
}

int main(void)
{
    int number;
    printf("���ڿ��� �� �� ����ұ��?");
    scanf("%d", &number);
    print(number);
    
    return 0;
}
// ����Լ��� ���� �Լ��ȿ� ������ �� �ִ� ��  
