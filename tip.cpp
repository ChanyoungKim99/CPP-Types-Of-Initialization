#include <iostream>

class MyClass
{
public:
	int mValue1;
	int mValue2;
};

int main()
{
	MyClass c1 = MyClass();
	MyClass c2(1, 2);
	MyClass c3{ 1, 2 };
	MyClass c4 = { 1, 2 };
}

// �����ڰ� �����Ƿ�  c2�� �۵�X
// c3, c4�� public�̹Ƿ� ����ü�� �ʱ�ȭó�� �۵�