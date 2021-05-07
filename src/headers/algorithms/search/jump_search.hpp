#ifndef JUMP_SEARCH_HPP
#define JUMP_SEARCH_HPP

class JumpSearch {
private:
	static int jump;
	static int m_jump_search_recursive(int index, int target);
	static int m_jump_search_recursive_reverse(int index, int target);
public:
	static int jump_search(int target);
	static int jump_search_reverse(int target);
	static int jump_search_recursive(int target);
	static int jump_search_recursive_reverse(int target);
};
#endif