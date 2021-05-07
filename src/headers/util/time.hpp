#ifndef TIME_HPP
#define TIME_HPP

#include <functional>
#include <string>

#define TIME(x) time(x, #x)

int time(std::function<int(int)> searchFunction, const std::string &name);

#endif