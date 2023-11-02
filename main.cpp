#include <stdio.h>
#include <iostream>
#include "bit.h"

int main() {
    // a=5(00000101), b=9(00001001)
    int a=5, b=9;
    printf("a=%d, b=%d\n", a, b);
    
    // logic operators:
    printf("a & b = %d\n", a&b); // 0101 & 1001 = 0001  AND
    printf("a | b = %d\n", a|b); // 0101 | 1001 = 1101  OR
    printf("a ^ b = %d\n", a^b); // 0101 | 1001 = 1100  XOR
    printf("~a = %d\n", ~a);     // ~0101= 1010  NEG
    printf("b << 1 = %d\n", b<<1); // b=b*2  SL(1001) = 10010
    printf("b >> 1 = %d\n", b>>1); // b=b/2  SR(1001) = 100

    isKthBitSet(b, 0);
    isKthBitSet(b, 1);
    isKthBitSet(b, 2);
    isKthBitSet(b, 3);
    printf("  ---- -------  \n");
    isKthBitSet(a, 0);
    isKthBitSet(a, 1);
    isKthBitSet(a, 2);
    isKthBitSet(a, 3);
    printf("  -----------  \n");
    printf("set the first bit of 5 : %d\n", SetKthBit(a, 1));
    printf("set the second bit of 5 : %d\n", SetKthBit(a, 2));
    printf("set the third bit of 5 : %d\n", SetKthBit(a, 3));
    printf("set the fourth bit of 5 : %d\n", SetKthBit(a, 4));
    printf("  -----------  \n");
    printf("clear the first bit of 5 : %d\n", ClrKthBit(a, 1));
    printf("clear the second bit of 5 : %d\n", ClrKthBit(a, 2));
    printf("clear the third bit of 5 : %d\n", ClrKthBit(a, 3));
    printf("clear the fourth bit of 5 : %d\n", ClrKthBit(a, 4));
    printf("  -----------  \n");
    printf("remove the second bit of 28(11100) : %d\n", RmvLastBit(20));
    printf("  -----------  \n");

    IsEven_Odd(32);
    IsEven_Odd(211);
    printf("  -----------  \n");

    std::cout<<std::boolalpha<<"20 is power of 2: "<<IsPwrOf2(20)<<std::endl;
    std::cout<<std::boolalpha<<"6 is power of  2: "<<IsPwrOf2(6)<<std::endl;
    std::cout<<std::boolalpha<<"16 is power of 2: "<<IsPwrOf2(16)<<std::endl;
    printf("  -----------  \n");
    std::cout<<std::boolalpha<<"20 is power of 4: "<<IsPwrOf4(20)<<std::endl;
    std::cout<<std::boolalpha<<"6 is power of  4: "<<IsPwrOf4(6)<<std::endl;
    std::cout<<std::boolalpha<<"16 is power of 4: "<<IsPwrOf4(16)<<std::endl;
    printf("  -----------  \n");
    std::cout<<std::boolalpha<<"20 is power of 8: "<<IsPwrOf8(20)<<std::endl;
    std::cout<<std::boolalpha<<"64 is power of 8: "<<IsPwrOf8(64)<<std::endl;
    std::cout<<std::boolalpha<<"16 is power of 8: "<<IsPwrOf8(16)<<std::endl;
    printf("  -----------  \n");
    std::cout<<std::boolalpha<<"16^3 is power 16: "<<IsPwrOf16(16*16*16)<<std::endl;
    std::cout<<std::boolalpha<<"64 is power of 16: "<<IsPwrOf16(64)<<std::endl;
    std::cout<<std::boolalpha<<"16 is power of 16: "<<IsPwrOf16(16)<<std::endl;
    printf("  -----------  \n");
    std::cout<<"number of set in 16: "<<CntSetOfNum(25)<<std::endl;
    std::cout<<"toogle the 3th bit of 16: "<<ToogleKthBit(16, 3)<<std::endl;

    return 0;
}