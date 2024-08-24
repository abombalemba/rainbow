#include <iostream>
#include <string>

const std::string colors[] = {
	"\033[31m",
	"\033[38;5;208m",
	"\033[33m",
	"\033[32m",
	"\033[36m",
	"\033[34m",
	"\033[35m"
};

const std::string reset = "\033[0m";
size_t colorIndex = 0;


int main() {
	std::string input;
	char c;

	while (std::cin.get(c)) {
		std::cout << colors[colorIndex % 7] << c;
		if (c != '\n') {
			colorIndex++;
		}
	}

	std::cout << reset;
}
