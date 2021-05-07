#include "algorithms/search/linear_search.hpp"
#include "util/config.hpp"

int LinearSearch::m_linear_search_recursive(int index, int target) {

	if(index >= config::size) return -1;
	if(config::arr[index] == target) return index;

	return m_linear_search_recursive(index + 1, target);

}

int LinearSearch::m_linear_search_recursive_reverse(int index, int target) {

	if(index <= -1) return -1;
	if(config::arr[index] == target) return index;

	return m_linear_search_recursive_reverse(index - 1, target);

}

int LinearSearch::linear_search(int target) {
	for(int i = 0; i < config::size; i++) {
		if(config::arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int LinearSearch::linear_search_reverse(int target) {
	for(int i = config::size - 1; i > -1; i--) {
		if(config::arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int LinearSearch::linear_search_recursive(int target) {
	return m_linear_search_recursive(0, target);
}

int LinearSearch::linear_search_recursive_reverse(int target) {
	return m_linear_search_recursive_reverse(config::size - 1, target);
}