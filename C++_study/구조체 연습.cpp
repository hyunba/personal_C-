#include <stdio.h>

struct food {
    char name[10];
};

int main(void)
{
    struct food a;
    
    printf("����Ͻ� ������ �Է����ּ���. :");
    scanf("%s", &a.name);
    
    printf("��ϵ� ������ %s �Դϴ�.", a.name);
    
    return 0;
}
