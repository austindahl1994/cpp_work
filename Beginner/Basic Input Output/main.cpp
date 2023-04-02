#include <iostream>
#include <string>

int main(int argc, char* argv[], char* envp[]) {
	std::string name;
	//typically used for when you would create a string object with value already assigned
	std::string name1("Austin"); 
	std::cout << "Please enter your name: " << std::endl;
	std::cin >> name;
	std::cout << "Thank you " << name << ", hope you are having a nice day" << std::endl;
	std::cout << "We can also get your name with a getline(cin, variable), \n"
			  << "but have to use cin.ignore to clear the whitespace left from previous cin, \n"
			  << "please enter a new name: " << std::flush;
	std::cin.ignore();
	std::getline(std::cin, name);
	std::cout << "The name is now " + name << std::endl;
	return 0;
}