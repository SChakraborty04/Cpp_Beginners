#include<iostream>
int a, b = 5;      //global variables can be used within the whole code
int main() {
	a = 4;         //local varible to be used within the declaration
	bool flag = false;       //boolean datatype 0-false;1-true
	float f = 2.23f;         //float need to be specifie with f at the end
	double d = 3.45;         //double can be directly written without anything in the end
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Flag = " << flag << std::endl;
	std::cout << "Float = " << f << std::endl;
	std::cout << "Double = " << d << std::endl;
	//toggle the flag by reassigning flag as true
	flag = true;
	std::cout << "Flag = " << flag << std::endl;
	std::cout << "a+b = " << a+b << std::endl;
	std::cout << "a-b = " << a-b << std::endl;
}
//Auto type inference
#include<iostream>
#include<typeinfo>
auto p = 1;
auto q = 1234567890765;
auto r = true;
auto s = 25.5;
auto t = 5.5f;
auto u = 'a';
int main() {
	std::cout << typeid(p).name() << std::endl;
	std::cout << typeid(q).name() << std::endl;
	std::cout << typeid(r).name() << std::endl;
	std::cout << typeid(s).name() << std::endl;
	std::cout << typeid(t).name() << std::endl;
	std::cout << typeid(u).name() << std::endl;
}

//preprocessor directives (eg. #include....) #never ends with semicolon

#include<iostream>
#include<string>
#include<cstdint> //some standard libraries of c are made available for c++ by adding c_in front of it

#define POWER 3000 //It is called macros and its simple function is find and replace
#define DEBUG      //It is a DEBUG directive which do not requires any value if used in ifdef derective    

int main() {
	int32_t a = POWER;
	uint8_t b = 35;
#ifdef DEBUG                                                  //this is not if endif this is ifdef directive which is different.
	std::cout << "[About to perform Addition]" << std::endl;
#endif
	a += b;
	std::cout << "The required integer is " << a << std::endl;
}
