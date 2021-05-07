#ifndef CONFIG_HPP
#define CONFIG_HPP

namespace config {
	inline constexpr int size = 200;
	inline constexpr int targetSize = 100;
	extern int arr[];
	extern int targets[];
	void generate(bool print = true);
	void seperate();
	void randomizeTarget();
}

#endif