#include <iostream>

class MyClass
{
public:
	int mValue1;
	int mValue2;


};

int main()
{
	// Copy Initialization
	MyClass c1 = MyClass();		// 리터럴이 없는 타입 (MyClass) 이더라도, 
								// 리터럴 같은 효과를 냄 
	// lvalue = 이름이 존재함, rvalue[리터럴] = 이름이 없음
	// MyClass()는 "이름이 없는" 객체 (기본 생성자 = 객체를 만들어냄) 이므로
	// 리터럴 같은 효과가 나는 것이다.

	// 마치 같은 타입에 "이름"을 붙이는 원리라고 생각하면 된다.

	// 암시적으로 만들어지는 Default Constructor는
	//	"다른 생성자가 없을 때" 에만 생성이 된다!
	
	// class 내부에 하나라도 생성자가 생긴다면,
	// Myclass()는 효과가 사라진다.
	// 생성자를 사용하고 싶다면, 오버로딩을 통해 추가적으로 생성자를 만들어야한다
	 
	// ex) 
	// MyClass()
	//{
	//	 mValue1 = 0;
	//	 mValue2 = 0;
	//}
}
