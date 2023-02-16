/*

int* p {};
=> int* 타입의 포인터 p 생성후, nullptr 가리킴



MyClass* pClass{};
=> MyClass* 타입의 포인터 pClass 생성후, nullptr 가리킴




MyClass* pClass{ new MyClass{} };
=> MyClass* 타입의 포인터 pClass가 동적으로 할당된 MyClass를 가리킴

new MyClass{} 의 {} 는 "기본 생성자"		
						[생성자의 가장 기초적인 역할 => 객체를 생성]
MyClass* pClass{} 의 {} 는 "유니폼 초기화"
*/