#ifndef COLORS_HPP
#define COLORS_HPP

#include <string>

namespace colors {

	const std::string RESET = "\033[0m"; // RESET

    // Regular Colors
    const std::string BLACK = "\033[0;30m";   // BLACK
    const std::string RED = "\033[0;31m";     // RED
    const std::string GREEN = "\033[0;32m";   // GREEN
    const std::string YELLOW = "\033[0;33m";  // YELLOW
    const std::string BLUE = "\033[0;34m";    // BLUE
    const std::string PURPLE = "\033[0;35m";  // PURPLE
    const std::string CYAN = "\033[0;36m";    // CYAN
    const std::string WHITE = "\033[0;37m";   // WHITE

    // Bold
    const std::string BLACK_BOLD = "\033[1;30m";  // BLACK
    const std::string RED_BOLD = "\033[1;31m";    // RED
    const std::string GREEN_BOLD = "\033[1;32m";  // GREEN
    const std::string YELLOW_BOLD = "\033[1;33m"; // YELLOW
    const std::string BLUE_BOLD = "\033[1;34m";   // BLUE
    const std::string PURPLE_BOLD = "\033[1;35m"; // PURPLE
    const std::string CYAN_BOLD = "\033[1;36m";   // CYAN
    const std::string WHITE_BOLD = "\033[1;37m";  // WHITE

    // Underline
    const std::string BLACK_UNDERLINED = "\033[4;30m";  // BLACK
    const std::string RED_UNDERLINED = "\033[4;31m";    // RED
    const std::string GREEN_UNDERLINED = "\033[4;32m";  // GREEN
    const std::string YELLOW_UNDERLINED = "\033[4;33m"; // YELLOW
    const std::string BLUE_UNDERLINED = "\033[4;34m";   // BLUE
    const std::string PURPLE_UNDERLINED = "\033[4;35m"; // PURPLE
    const std::string CYAN_UNDERLINED = "\033[4;36m";   // CYAN
    const std::string WHITE_UNDERLINED = "\033[4;37m";  // WHITE

    // Background
    const std::string BLACK_BACKGROUND = "\033[40m";  // BLACK
    const std::string RED_BACKGROUND = "\033[41m";    // RED
    const std::string GREEN_BACKGROUND = "\033[42m";  // GREEN
    const std::string YELLOW_BACKGROUND = "\033[43m"; // YELLOW
    const std::string BLUE_BACKGROUND = "\033[44m";   // BLUE
    const std::string PURPLE_BACKGROUND = "\033[45m"; // PURPLE
    const std::string CYAN_BACKGROUND = "\033[46m";   // CYAN
    const std::string WHITE_BACKGROUND = "\033[47m";  // WHITE

    // High Intensity
    const std::string BLACK_BRIGHT = "\033[0;90m";  // BLACK
    const std::string RED_BRIGHT = "\033[0;91m";    // RED
    const std::string GREEN_BRIGHT = "\033[0;92m";  // GREEN
    const std::string YELLOW_BRIGHT = "\033[0;93m"; // YELLOW
    const std::string BLUE_BRIGHT = "\033[0;94m";   // BLUE
    const std::string PURPLE_BRIGHT = "\033[0;95m"; // PURPLE
    const std::string CYAN_BRIGHT = "\033[0;96m";   // CYAN
    const std::string WHITE_BRIGHT = "\033[0;97m";  // WHITE

    // Bold High Intensity
    const std::string BLACK_BOLD_BRIGHT = "\033[1;90m"; // BLACK
    const std::string RED_BOLD_BRIGHT = "\033[1;91m";   // RED
    const std::string GREEN_BOLD_BRIGHT = "\033[1;92m"; // GREEN
    const std::string YELLOW_BOLD_BRIGHT = "\033[1;93m";// YELLOW
    const std::string BLUE_BOLD_BRIGHT = "\033[1;94m";  // BLUE
    const std::string PURPLE_BOLD_BRIGHT = "\033[1;95m";// PURPLE
    const std::string CYAN_BOLD_BRIGHT = "\033[1;96m";  // CYAN
    const std::string WHITE_BOLD_BRIGHT = "\033[1;97m"; // WHITE

    // High Intensity backgrounds
    const std::string BLACK_BACKGROUND_BRIGHT = "\033[0;100m";// BLACK
    const std::string RED_BACKGROUND_BRIGHT = "\033[0;101m";// RED
    const std::string GREEN_BACKGROUND_BRIGHT = "\033[0;102m";// GREEN
    const std::string YELLOW_BACKGROUND_BRIGHT = "\033[0;103m";// YELLOW
    const std::string BLUE_BACKGROUND_BRIGHT = "\033[0;104m";// BLUE
    const std::string PURPLE_BACKGROUND_BRIGHT = "\033[0;105m"; // PURPLE
    const std::string CYAN_BACKGROUND_BRIGHT = "\033[0;106m";  // CYAN
    const std::string WHITE_BACKGROUND_BRIGHT = "\033[0;107m";   // WHITE
}

#endif