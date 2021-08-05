#include <stdio.h>

char* nokibul(){
    int a = 10;
    return "nokibul-alam";
}

int main()
{
    char* name = nokibul();
    printf("%s",name);
    return 0;
}
