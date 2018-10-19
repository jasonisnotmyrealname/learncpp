#include <stdio.h>

int fun(void){
    static int count = 10;    // 在编译时就已经把count放到了bss空间，然后在程序启动时被初始化。之后就没用了。这个count是全局的，但由于被放在代码块中，因此scope被限定在fun中，和下面定义的count不一样。
 //   static int count;   //去掉初始化的值，可以发现count的值是0：被编译在bss段的变量初值都是0。
    return count--;
}

int count = 1;

int main(void)
{    
    printf("global\t\tlocal static\n");
    for(; count <= 10; ++count)
        printf("%d\t\t%d\n", count, fun());    
    
    return 0;
}
