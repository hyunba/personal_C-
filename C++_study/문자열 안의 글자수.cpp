#include <stdio.h>
int main(void)
{
    // ���� : 1�� ũ�� (1byte), �ѱ� : 2�� ũ�� (2byte) 
    // array[10]�� ��� ����� 10���� ����, �ѱ��� 5���� ���� ����.
    char input[1001];
    gets(input);
    int count = 0;
    while(input[count] != '\0')
    {
        count++;
    }
    printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.", count);
    printf("�Է��� ���ڿ��� : %s �Դϴ�.", input);
    
    return 0;
}
