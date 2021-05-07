#include "algorithms/search.hpp"
#include "util/config.hpp"

int Search::m_binary_recursive(int start, int end, int target) {
	if(start > end) return -1;
	
	const int mid = (start + end) / 2;

	if(config::arr[mid] > target) return m_binary_recursive(start, mid - 1, target);
	if(config::arr[mid] < target) return m_binary_recursive(mid + 1, end, target);
	
	return mid;
}

int Search::binary_recursive(int target) {
	return m_binary_recursive(0, config::size - 1, target);
}

int Search::binary(int target) {
	int lo = 0, hi = config::size - 1;
	while(lo <= hi) {
		int mid = (lo + hi) / 2;

		if(config::arr[mid] < target)
			lo = mid + 1;
		else if(config::arr[mid] > target)
			hi = mid - 1;
		else
			return mid;
	}
	return -1;
}