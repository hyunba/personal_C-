#include <stdio.h>
#include <limits.h>


int main(void)
{
    int x = INT_MAX; // INT_MAX�� ����Ϸ��� limits.h�� ����ؾ��Ѵ�. 
    printf("int���� �ִ� x�� %d�Դϴ�.\n", x);
    printf("x + 1�� %d �Դϴ�.\n", x + 1); // �̿Ͱ��� �ִ밪�� +1�� ���ְԵǸ� �ش� ���� �ּҰ��� ��Ÿ���� �Ǵ°� �� ������ �����÷ο��� �Ѵ�. 
    
    
    return 0;
}
