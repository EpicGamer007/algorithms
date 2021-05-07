#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

class BinarySearch {
private:
	static int m_binary_search_recursive(int start, int end, int target);
public:
	static int binary_search_recursive(int target);
	static int binary_search(int target);
};
#endif