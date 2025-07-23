    
    #include <stdio.h>
#include "linked_list.h"


int main(void) {
    
    struct linked_list_int list = linked_list_constructor();

    for (int i = 0; i < 10; i++) {
        list.insert(i, i, &list);
    }

    list.remove(3, &list);
    list.remove(7, &list);
    list.insert(1, 99, &list);

    for(int i = 0; i < 9; i++) {
        printf("%d\n", list.retrieve(i, &list));
    }

    return 0;
}