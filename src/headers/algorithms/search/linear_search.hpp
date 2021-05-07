#ifndef LINEAR_SEARCH_HPP
#define LINEAR_SEARCH_HPP

class LinearSearch {
private:
	static int m_linear_search_recursive(int index, int target);
	static int m_linear_search_recursive_reverse(int index, int target);
	
public:
	static int linear_search(int target);
	static int linear_search_reverse(int target);
	static int linear_search_recursive(int target);
	static int linear_search_recursive_reverse(int target);
};

#endif