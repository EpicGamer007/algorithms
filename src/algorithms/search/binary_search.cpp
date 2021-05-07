#include "algorithms/search/binary_search.hpp"
#include "util/config.hpp"

int BinarySearch::m_binary_search_recursive(int start, int end, int target) {
	if(start > end) return -1;
	
	const int mid = (start + end) / 2;

	if(config::arr[mid] > target) return m_binary_search_recursive(start, mid - 1, target);
	if(config::arr[mid] < target) return m_binary_search_recursive(mid + 1, end, target);
	
	return mid;
}

int BinarySearch::binary_search_recursive(int target) {
	return m_binary_search_recursive(0, config::size - 1, target);
}

int BinarySearch::binary_search(int target) {
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