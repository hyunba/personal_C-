// ���� �Ҵ� : int a;
// ���� �Ҵ� : ���α׷� ���� �߿� ������ �޸𸮿� �Ҵ��ϴ� �� 

/*
int b; // ���� ������ ���α׷� ���۰� ���ÿ� ����� ���� �� �� �������. 

int main()
{
    int a; // a��� ���������� main�Լ��� ������ �� a��� ������ ����� main�� ���� �� �������. 
}
*/
#include <iostream>

using namespace std;

int main()
{
    int *a = new int(5); // �ּڰ��� �����Ϳ��� �ѱ� 
    
    cout << a << endl;
    cout << *a << endl;
    
    *a = 10;
    
    cout << a << endl;
    cout << *a << endl;
    
    delete a; // �޸� ���� 
}
