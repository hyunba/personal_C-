#include <stdio.h>
#include <string.h>

int main(void)
{
    char inputOne[5] = "A";
    char inputTwo[5] = "B";
    printf("���ڿ� �� : %d\n", strcmp(inputOne, inputTwo));
    // �� ���ڰ� ���������� �����ϸ� '0'�� ������, ���ʿ� �ִ°� �� �տ��ִٸ� '-1' 
    // �������� �� ���̸� '1'��  ������ �ȴ�. 
    
    return 0;
}
