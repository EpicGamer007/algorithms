// BROKEN

#include "algorithms/search.hpp"
#include "util/config.hpp"
#include <math.h>

int Search::jumpSize = sqrt(config::size);

int Search::jump(int target) {
	for(int i = 0; i < config::size/jumpSize; ++i) {
		if(config::arr[jumpSize*i] > target) {
			for(int j = (i - 1) * jumpSize; j < jumpSize * i; ++j) {
				if(config::arr[j] == target) {
					return j;
				}
			}
			return -1;
		} else if(config::arr[jumpSize*i] == target) {
			return jumpSize * i;
		}
	}
	return -1;
}

int Search::jump_reverse(int target) {
	for(int i = config::size/jumpSize; i > -1; --i) {
		if(config::arr[jumpSize*i] < target) {
			for(int j = (i + 1) * jumpSize; j > jumpSize * i; --j) {
				if(config::arr[j] == target) {
					return j;
				}
			}
			return -1;
		} else if(config::arr[jumpSize*i] == target) {
			return jumpSize * i;
		}
	}
	return -1;
}

int Search::m_jump_recursive(int index, int target) {
	if(index * jumpSize > config::size) return -1;
	if(config::arr[index * jumpSize] == target) return index;
	if(config::arr[index * jumpSize] > target) {
		for(int i = config::arr[index * (jumpSize - 1)]; i < config::arr[index * jumpSize]; ++i) {
			if(config::arr[i] == target) {
				return i;
			}
		}
		return -1;
	}
	return m_jump_recursive(index + 1, target);
}

int Search::jump_recursive(int target) {
	return m_jump_recursive(0, target);
}

int Search::m_jump_recursive_reverse(int index, int target) {
	if(index < 0) return -1;
	if(config::arr[jumpSize * index] < target) {
		for(int i = (index + 1) * jumpSize; i > index * jumpSize; --i) {
			if(config::arr[i] == target) {
				return i;
			}
		}
		return -1;
	} else if(config::arr[jumpSize * index] == target) {
		return jumpSize * index;
	}
	return m_jump_recursive_reverse(index - 1, target);
}

int Search::jump_recursive_reverse(int target) {
	return m_jump_recursive_reverse(config::size/jumpSize, target);
}