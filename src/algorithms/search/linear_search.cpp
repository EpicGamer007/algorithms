#include "algorithms/search.hpp"
#include "util/config.hpp"

int Search::m_linear_recursive(int index, int target) {

	if(index >= config::size) return -1;
	if(config::arr[index] == target) return index;

	return m_linear_recursive(index + 1, target);

}

int Search::m_linear_recursive_reverse(int index, int target) {

	if(index <= -1) return -1;
	if(config::arr[index] == target) return index;

	return m_linear_recursive_reverse(index - 1, target);

}

int Search::linear(int target) {
	for(int i = 0; i < config::size; i++) {
		if(config::arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int Search::linear_reverse(int target) {
	for(int i = config::size - 1; i > -1; i--) {
		if(config::arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int Search::linear_recursive(int target) {
	return m_linear_recursive(0, target);
}

int Search::linear_recursive_reverse(int target) {
	return m_linear_recursive_reverse(config::size - 1, target);
}