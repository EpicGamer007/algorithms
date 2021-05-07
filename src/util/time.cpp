#include "util/time.hpp"
#include "util/config.hpp"
#include "util/colors.hpp"
#include <chrono>
#include <iostream>
#include <functional>

void time(std::function<int(int)> searchFunction, const std::string &name) {

	int sum = 0;
	for(int i = 0; i < config::targetSize; ++i) {
		auto t1 = std::chrono::high_resolution_clock::now();

		searchFunction(config::targets[i]);

		auto t2 = std::chrono::high_resolution_clock::now();

		sum += std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	}

	double avg = double(sum) / config::targetSize;
	
	std::cout << colors::WHITE_BRIGHT << "\nAverage number of nanoseconds: " << colors::YELLOW_BOLD << avg << colors::CYAN_BOLD_BRIGHT << " (in " << name << "())\n\n" << colors::RESET;
	

	/* std::cout << colors::WHITE_BRIGHT << "Index of " << colors::YELLOW_BOLD << config::target << ": " << colors::CYAN_BOLD_BRIGHT << index;
	int ns = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	std::cout << colors::WHITE_BRIGHT << "\nNumber of nanoseconds: " << colors::YELLOW_BOLD << ns << colors::CYAN_BOLD_BRIGHT << " (in " << name << "())\n\n" << colors::RESET; */
}