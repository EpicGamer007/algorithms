#include "util/config.hpp"
#include "util/time.hpp"
#include "algorithms/search/binary_search.hpp"
#include "algorithms/search/linear_search.hpp"
#include "algorithms/search/jump_search.hpp"
#include <iostream>

void run() {
	config::generate();
	config::seperate();
	config::randomizeTarget();

	TIME(BinarySearch::binary_search);
	TIME(BinarySearch::binary_search_recursive);
	
	config::seperate();

	TIME(JumpSearch::jump_search);
	TIME(JumpSearch::jump_search_reverse);
	TIME(JumpSearch::jump_search_recursive);
	TIME(JumpSearch::jump_search_recursive_reverse);
	
	config::seperate();
	
	TIME(LinearSearch::linear_search);
	TIME(LinearSearch::linear_search_reverse);
	TIME(LinearSearch::linear_search_recursive);
	TIME(LinearSearch::linear_search_recursive_reverse);
	
	config::seperate();
}

int main() {
	run();
	return 0;
}