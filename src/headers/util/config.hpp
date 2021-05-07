#ifndef CONFIG_HPP
#define CONFIG_HPP

namespace config {
	inline constexpr int size = 200;
	extern int arr[];
	extern int target;
	void generate(bool print = true);
	void seperate();
	void randomizeTarget();
}

#endif