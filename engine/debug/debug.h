#ifndef ENGINE_DEBUG_DEBUG_H__
#define ENGINE_DEBUG_DEBUG_H__

#define PRINT_FILE "[" << __FILE__ << ": " << __LINE__ << "]: " << __func__

#define DEBUG(x) \
std::cout << PRINT_FILE << std::endl; \
std::cout << "  " << x << std::endl

#endif