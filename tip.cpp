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

// 생성자가 없으므로  c2는 작동X
// c3, c4는 public이므로 구조체의 초기화처럼 작동