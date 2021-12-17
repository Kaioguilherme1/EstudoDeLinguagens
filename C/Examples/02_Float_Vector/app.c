#include <stdio.h>
#include "float_vector.h"

int main(void)
{
    floatVector *vec = create(10);
    append(vec, 1.0);
    append(vec, 2.0);
    append(vec, 3.0);
    append(vec, 4.0);
    append(vec, 5.0);
    append(vec, 6.0);
    append(vec, 7.0);
    append(vec, 8.0);
    append(vec, 9.0);
    append(vec, 10.0);
    printf("\n vec principal\n");
    print(vec);
    Remove(vec, 6);
    printf("\n vec principal removendo a 6 casa\n");
    print(vec);
    floatVector *copy = clone(vec);
    erase(vec);
    printf("\n vec principal depois de apagado\n");
    print(vec);
    printf("\n vec principal clonado\n");
    print(copy);

    return 0;
}