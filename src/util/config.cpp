#include "util/config.hpp"
#include "util/colors.hpp"
#include <ctime>
#include <algorithm>
#include <random>
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

namespace config {
	int arr[size];
	int target;
	
	void generate(bool print) {
		for(int i = 0; i < size; ++i)
			arr[i] = i;

		if(!print) return;

		std::cout << '[';
		for(int i = 0; i < size - 1; i++)
			std::cout << arr[i] << ", ";
		std::cout << arr[size - 1] << ']';

		std::cout << "\n\n";
		
	}

	void seperate() {
		struct winsize w;
    	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

		std::cout << colors::PURPLE_BRIGHT;
		for(int i = 0; i < w.ws_col; i++) {
			std::cout << "-";
		}
		std::cout << colors::RESET << "\n";
	}

	void randomizeTarget() {
		
		static std::random_device rd;
		static std::mt19937 mt(rd());
		std::uniform_int_distribution<std::mt19937::result_type> rng(0, size-1);

		target = rng(mt);
	}

	/* void average(int vals[]) {
		const int arrSize = sizeof(vals) / sizeof(vals[0]);
		int total = 0;
		for(int i = 0; i < arrSize; i++) {
			total += vals[i];
		}
		int average = total/arrSize;
		std::cout << colors::YELLOW_BOLD_BRIGHT << "Average: " << colors::RED_BOLD_BRIGHT << average << colors::RESET << "\n";
	} */

}