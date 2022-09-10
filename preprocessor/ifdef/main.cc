#include <string>

int main() {
#ifdef __linux__ 
char delimiter = '/';
#elif _WIN32
char delimiter = '\\';
#else
    exit(1);
#endif
    return delimiter;
}