#include<iostream>
using namespace std;
/*int main() {                            Printing basic cpp code
	cout << "Hello World!";
}*/

int main() {                             //multiline comment ctrl+K+C (one by one)
	string s;                            //Taking input from users and printing desired output. 
	std::cin >> s;                       //#using namespace std; is a bad practice
	std::cout << "Hello " << s << " how are you?" << endl;
	return 0;
}

