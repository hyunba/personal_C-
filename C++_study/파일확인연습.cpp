#include <stdio.h>
int main(void)
{
    FILE *fp = NULL ;
    fp = fopen("Hello.txt", "w");
    if(fp == NULL)
    {
        printf("���� ���⿡ �����߽��ϴ�.\n");    
    }
    else
    {
        printf("���� ���⿡ �����߽��ϴ�.\n");
    }
    fputc('H', fp);
    fputc('E', fp);
    fputc('L', fp);
    fputc('L', fp);
    fputc('O', fp);
    fclose(fp);
    // �� �� ���� �Ѵٰ� �ؼ� �ι� HELLO�� ��µǴ� ���� �ƴ� 
    return 0;    
}
