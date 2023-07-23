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
//use of const Qualifier instead of #define; it is used in regular variable declaration; it specify a type;scope encapsulation is enforced.
//# const is not the same in c and cpp.
// const int x;  CTE error or compile-time error (CTE)
	// x = 9;   CTE error
const int y = 10;

//Array: It is a continuous block of memory.
#include<iostream>
const int AGELENGTH = 3; //use of const
int age[AGELENGTH];
float number[] = {29.9,68.2,77.3}; //auto dont work for arrays;array length may not be specified.
int main() {
	age[0] = 1 ;
	age[1] = 2 ;
	age[2] = 3 ;
	std::cout << "The required address of array is " << age << std::endl; //prints the address of array.
	//approach to print elements of array without loop
	std::cout << "Age[0] = " << age[0] << std::endl;
	std::cout << "Age[1] = " << age[1] << std::endl;
	std::cout << "Age[2] = " << age[2] << std::endl;
	std::cout << "Number[0] = " << number[0] << std::endl;
	std::cout << "Number[1] = " << number[1] << std::endl;
	std::cout << "Number[2] = " << number[2] << std::endl;
	return 0;
}

//Strings in cpp is not a native type; It is an array of characters; std::string class comes with cpp standard library
#include<iostream>
#include<string>
#include<cstring>

char array_str1[25] = "Hello "; //char array is used to make code compatible with existing C code.
char array_str2[] = "World !";

std::string str1 = "How are ";
std::string str2 = "you?";

int main() {
	strcat_s(array_str1,25, array_str2); //This updates array_str1
	std::cout << array_str1 << std::endl;
	std::cout << str1+str2 << std::endl; //For string class concatenation is simple by just adding an addition sign. Also both strings remain intact.
}

//Typecasting specify how to interprete a piece of data; useful for converting datatypes.

#include<iostream>
#include<cstdint>

float flt = -1.54f;
int32_t sgn;
uint32_t usgn;

int main() {
	sgn = flt;
	usgn = sgn;
	std::cout << "Float = " << flt << std::endl;
	std::cout << "Signed int = " << sgn << std::endl;
	std::cout << "Unsigned int = " << usgn << std::endl;

	//Conversion of fahrenheit to celcius

	int fah = 100;
	int cel;
	cel = ((float)5 / 9.0) * (fah - 32); //forcefully converting 5/9 to float as if it is in int then the value would be zero.
	std::cout << std::endl;
	std::cout << "Fahrenheit = " << fah << std::endl;
	std::cout << "Celcius    = " << cel << std::endl;

	//using typecasting to get integer and decimal part of a float number seperately.
	float height = 11.994;
	std::cout <<"Given height is "<<height<< std::endl;
	std::cout <<"Integer part is "<<(int)height<< std::endl;
	std::cout <<"Decimal part is "<<height -(int)height<< std::endl;
	return 0;
}

//Calculating floating average (Challenge)
#include<iostream>
float arr[] = { 1.2,3.4,7.9,2.3,7.1 };
int main() {
	float sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	float avg = sum / 5.0;
	std::cout << "The required average is " << avg << std::endl;
	return 0;
}