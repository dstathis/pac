#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <string>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		std::cout << "No command specified." << std::endl;
		return 1;
	}
	std::string remaining_args = "";
	for (int i = 2; i < argc; ++i) {
		remaining_args += ' ';
		remaining_args += argv[i];
	}
	if (strcmp(argv[1], "install") == 0) {
		return system(("pacman -S" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "search") == 0) {
		return system(("pacman -Ss" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "provides") == 0) {
		return system(("pacman -Fs" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "files") == 0) {
		return system(("pacman -Si" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "localfiles") == 0) {
		return system(("pacman -Ql" + remaining_args).c_str());
	}
}
