#include <stdio.h>

int main()
{
    //宣言と同時に初期化
    int a[4] = {1,2,3,4};
    int i;
    
    for (i=0;i<4;i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    
    printf("a = %p\n", a);
 
    return 0;
}

