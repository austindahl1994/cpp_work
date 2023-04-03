#include <iostream>

void continueOrBreak() {
	int x = 4;
	int y = 6;
	for (int i = 0; i < 10; i++) {
		if (i == x) {
			std::cout << "x and i are the same! Continuing to next loop iteration." << std::endl;
			continue;
		}
		else if (i == y) {
			std::cout << "i and y are the samme, breaking out of loop." << std::endl;
			break;
		}
		std::cout << "i is " << i << std::endl;
	}
}

void doWhileLoops() {
	int x = 0;
	do {
		std::cout << "x is " << x << std::endl;
		x++;
	} while (x < 10);
}

void switchCase() {
	const char grade = 'A';
	switch (grade)
	{
	case 'A':
		std::cout << "Grade was an A, nice job!" << std::endl;
		break;
	default:
		std::cout << "default was run, breaking switch case." << std::endl;
		break;
	}
}

void forEachLoop() {
	const int arr[] = { 1, 2, 3, 4, 5 };
	for (int x : arr) {
		std::cout << "The current value is " << x << std::endl;
	}

	for (auto x : arr) {
		std::cout << "Now traversing with auto, x is " << x << std::endl;
	}
}

void forLoop() {
	//Dont need to put more time to show knowledge when examples above should be good enough
}

void ifElse() {
	//Dont need to put more time to show knowledge when examples above should be good enough
}

void whileLoop() {
	//Dont need to put more time to show knowledge when examples above should be good enough
}

int main(int argc, char* argv[], char* envp[]) {
	//continueOrBreak();
	//doWhileLoops();
	//switchCase();
	//forEachLoop();
	return 0;
}