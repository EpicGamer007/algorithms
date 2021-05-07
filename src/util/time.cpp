#include "util/time.hpp"
#include "util/config.hpp"
#include "util/colors.hpp"
#include <chrono>
#include <iostream>
#include <functional>

int time(std::function<int(int)> searchFunction, const std::string &name) {

	auto t1 = std::chrono::high_resolution_clock::now();

	int index = searchFunction(config::target);

	auto t2 = std::chrono::high_resolution_clock::now();

	std::cout << colors::WHITE_BRIGHT << "Index of " << colors::YELLOW_BOLD << config::target << ": " << colors::CYAN_BOLD_BRIGHT << index;
	int ns = std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count();
	std::cout << colors::WHITE_BRIGHT << "\nNumber of nanoseconds: " << colors::YELLOW_BOLD << ns << colors::CYAN_BOLD_BRIGHT << " (in " << name << "())\n\n" << colors::RESET;
	return ns;
}