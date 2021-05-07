#ifndef SEARCH_HPP
#define SEARCH_HPP

class Search {
private:
	static int m_binary_recursive(int start, int end, int target);

	static int jumpSize;
	static int m_jump_recursive(int index, int target);
	static int m_jump_recursive_reverse(int index, int target);

	static int m_linear_recursive(int index, int target);
	static int m_linear_recursive_reverse(int index, int target);

public:
	static int binary_recursive(int target);
	static int binary(int target);

	static int jump(int target);
	static int jump_reverse(int target);
	static int jump_recursive(int target);
	static int jump_recursive_reverse(int target);

	static int linear(int target);
	static int linear_reverse(int target);
	static int linear_recursive(int target);
	static int linear_recursive_reverse(int target);
};

#endif