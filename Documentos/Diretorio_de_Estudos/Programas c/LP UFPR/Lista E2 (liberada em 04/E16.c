#include <stdio.h>

void main(){
    printf("a) %x\n", ~0x55);
    printf("b) %x\n", 0x09<<2);
    printf("c) %x\n", 0x09>>2);
    printf("d) %x\n", 0xFF>>2);
    printf("e) %x\n", 0xFF<<2);
}