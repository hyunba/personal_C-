#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[10] = "Love You";
    char result[5] = "Love";
    strcpy(result, input);
    // result ��� ���ڿ� �ȿ� input �̶�� ���ڿ��� ���� �� �� �ִ�.
    // result�� 5���� ���� �ۿ� �������� �ұ��ϰ� 10���� ������ �� �� �ִ�.
    // strcpy�� ���������� �����͸� �ٷ��.
     
    printf("���ڿ� ���� : %s\n", result);
    
    return 0;
}
