#include "util/config.hpp"
#include "util/time.hpp"
#include "algorithms/search.hpp"
#include <iostream>

void run() {

	config::generate();
	config::seperate();
	config::randomizeTarget();

	TIME(Search::binary);
	TIME(Search::binary_recursive);
	
	/* config::seperate();

	TIME(Search::jump);
	TIME(Search::jump_reverse);
	TIME(Search::jump_recursive);
	TIME(Search::jump_recursive_reverse) */;
	
	config::seperate();
	TIME(Search::linear);
	TIME(Search::linear_reverse);
	TIME(Search::linear_recursive);
	TIME(Search::linear_recursive_reverse);
	
	config::seperate();
}

int main() {
	std::cout << "Started program\n\n";
	run();
	return 0;
}