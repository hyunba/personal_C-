﻿#include <stdio.h>
int main(void)
{
    int y,m,s;
    
    scanf("%d.%d.%d",&y,&m,&s);
    printf("%02d-%02d-%04d",s,m,y);
    
    return 0;
}
