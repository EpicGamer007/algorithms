#include "algorithms/search/jump_search.hpp"
#include <math.h>
#include "util/config.hpp"

int JumpSearch::jump = sqrt(config::size - 1);

int JumpSearch::jump_search(int target) {
	for(int i = 0; i < config::size/jump; i++) {
		if(config::arr[jump*i] > target) {
			for(int j = (i - 1) * jump; j < jump * i; j++) {
				if(config::arr[j] == target) {
					return j;
				}
			}
			return -1;
		} else if(config::arr[jump*i] == target) {
			return jump * i;
		}
	}
	return -1;
}

int JumpSearch::jump_search_reverse(int target) {
	for(int i = config::size/jump; i > -1; i--) {
		if(config::arr[jump*i] < target) {
			for(int j = (i + 1) * jump; j > jump * i; j--) {
				if(config::arr[j] == target) {
					return j;
				}
			}
			return -1;
		} else if(config::arr[jump*i] == target) {
			return jump * i;
		}
	}
	return -1;
}

int JumpSearch::m_jump_search_recursive(int index, int target) {
	if(index * jump > config::size) return -1;
	if(config::arr[index * jump] == target) return index;
	if(config::arr[index * jump] > target) {
		for(int i = config::arr[index * (jump - 1)]; i < config::arr[index * jump]; i++) {
			if(config::arr[i] == target) {
				return i;
			}
		}
		return -1;
	}
	return m_jump_search_recursive(index + 1, target);
}
int JumpSearch::jump_search_recursive(int target) {
	return m_jump_search_recursive(0, target);
}

int JumpSearch::m_jump_search_recursive_reverse(int index, int target) {
	if(index < 0) return -1;
	if(config::arr[jump * index] < target) {
		for(int i = (index + 1) * jump; i > index * jump; i--) {
			if(config::arr[i] == target) {
				return i;
			}
		}
		return -1;
	} else if(config::arr[jump * index] == target) {
		return jump * index;
	}
	return m_jump_search_recursive_reverse(index - 1, target);
}

int JumpSearch::jump_search_recursive_reverse(int target) {
	return m_jump_search_recursive_reverse(config::size/jump, target);
}