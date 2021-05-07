```cpp
/*

6, 17, 18, 49, 51, 551, 1222, 8000, 125325, 123789
0  1   2   3   4   5    6     7     8       9

toFind = 600
[0, 9]
[5, 9]
[5, 6]
[6, 6]
[6, 5]

toFind = 800
[0, 9]
[5, 9]
[5, 6]
[6, 6]
[6, 5]

toFind = 19
[0, 9] 
[0, 3]
[2, 3]
[3, 3]
[3, 2]


*/

/*
C:
void time(int (*func)(int))

C++ 
#include <functional>
void time(std::function<int(int)> func()

*/

/*
After adding header guards to a.hpp

afetr expanding a.hpp
#ifndef A_HPP
#define A_HPP

int a = 0;

#endif
#include "b.hpp"

int main() {

}
---------------------------------------------------------
After expanding b.hpp


#include "a.hpp"
#ifndef A_HPP
#define A_HPP

int a = 0;

#endif

int b = a + 1;

int main() {

}
----------------------

*/

/*
after expanding a.hpp

int a = 0;
#include "b.hpp"

int main() {

}

-------------------------------------------
after expanding b.hpp

int a = 0;
#include "a.hpp"

int b = a + 1;

int main() {

}
------------------------------------------
int a = 0;
int a = 0;

int b = a +1;

int main() {

}

*/

```