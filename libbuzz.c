#include <stdio.h>
#include "libbuzz.h"

void fizz(int i, foo* my_foo){
    printf("hello from c! i = %i, my_foo->x = %i\n", i, my_foo->x);
}