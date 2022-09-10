#include "math.h"
#define VALUE 3
#define MSUM(a) mult(sum(a, a), a)

int main() {
    #ifdef COMPILE_FLAG
        return MSUM(VALUE);
    #else
        return VALUE;
    #endif
}