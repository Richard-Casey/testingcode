#include <iostream>

int main()
{
	std::cout << "Please enter your first name followed by the enter button\n";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Hi, " << first_name << "!\n";
	std::cout << "Humor me - enter your age as well please.\n";
	std::string age;
	std::cin >> age;
	std::cout << "Hello, " << first_name << " who is " << age << " years old!\n";
}