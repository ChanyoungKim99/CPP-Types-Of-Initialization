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
	// Direct Initialization
	MyClass c2(1, 2);
}
