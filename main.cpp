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
	if (strcmp(argv[1], "remove") == 0) {
		return system(("pacman -Rs" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "update") == 0) {
		return system(("pacman -Syu" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "clean") == 0) {
		return system(("pacman -Scc" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "autoremove") == 0) {
		return system("pacman -Qdtq | pacman -Rs -");
	}
	if (strcmp(argv[1], "download") == 0) {
		return system(("pacman -Sw" + remaining_args).c_str());
	}
	if (strcmp(argv[1], "clean") == 0) {
		return system(("pacman -Sc" + remaining_args).c_str());
	}
}
