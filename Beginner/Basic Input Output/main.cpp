#include <iostream>
#include <fstream>
#include <string>
// cin leaves a whitespace char, so have to use cin.ignore to clear the whitespace left over
int main(int argc, char* argv[], char* envp[]) {
	std::string myText;
	std::ifstream testFile("test.txt");
	if (testFile.is_open()) {
		while (std::getline(testFile, myText))
		{
			std::cout << myText << std::endl;
		}
	}
	else {
		std::cout << "Error opening file." << std::endl;
	}

	return 0;
}