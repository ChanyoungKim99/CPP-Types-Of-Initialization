#include <iostream>

class MyClass
{
public:
	int mValue1;
	int mValue2;

	MyClass(int value1, int value2)
	{
		mValue1 = value1;
		mValue2 = value2;
	}
};

int main()
{
	// Uniform Copy Initialization
	MyClass c4 = {1, 2};

	// 1, 2가 들어간 MyClass를 만들어낸 후, 
	// copy 하여 초기화
}