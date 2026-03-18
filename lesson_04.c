#include <stdio.h>
#include <stdlib.h>

/*Main thing it's program does:*/

int main(int argc, [[maybe_unused]] char* argv[argc+1]){
    //Declarations:
    double A[5] = {
        [0] = 9,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .000007, 
    };

    //Doing some work:
    for(size_t i = 0; i < 5; ++i){
        printf("Element %zu is %g,  \tits square is equal to %g\n",
        i,
        A[i],
        A[i] * A[i]);
    }
    return EXIT_SUCCESS;
}