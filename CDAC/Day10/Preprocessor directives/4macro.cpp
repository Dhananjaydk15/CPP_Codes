/* 4. Give example usage of conditional compilation 
using #ifdef, #ifndef and #undef. */
#include <stdio.h>
#define CDAC 2021 // define macro
int main()
{
#ifdef CDAC     // chack macro CDAC is declear or not :
    printf("\n\t* year of CDAC is : %d", CDAC); // print value
#else              // of variable:
    printf("\n\t* year of CDAC is not define");
#endif
#undef CDAC         // undefine macro variable :
#define CDAC 2022  // redefining veriable :
#ifdef CDAC       // check macro CDAC is declear or not :
    printf("\n\t* New year of CDAC is : %d", CDAC); // print new
#else           // value of CDAC:
    printf("\n\t* New year of CDAC is not define");
#endif

    return 0;
}