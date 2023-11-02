#include "bit.h"
#include <stdio.h>

void isKthBitSet(int num, int k) {
    int mask = 1<<k;
    if(num & mask){
        printf("the %d th bit is set to 1\n", k+1);
    }else{
        printf("the %d th bit is set to 0\n", k+1);
    }
}

int SetKthBit(int num, int k){
    int mask = 1<<(k-1);
    return num | mask;
}

int ClrKthBit(int num, int k){
    int mask = 1<<k-1;
    return num & ~mask;
}

int RmvLastBit(int num) {
    return num & (num-1);
}

void IsEven_Odd(int num) {
    if(num==(num>>1)<<1){
        printf("the number %d is pair\n", num);
    }else{
        printf("the number %d is impair\n", num);
    }
}

bool IsPwrOf2(int num){
    return !(num & (num-1));
    
}

bool IsPwrOf4(int num){
    if(num==0)
        return 0;

    while (num != 1){
        if(num % 4 != 0)
            return 0;
            num /= 4;
    }
    return 1;
}

bool IsPwrOf8(int num){
    if(num==0)
        return 0;
    while(num!=1){
        if(num % 8 !=0)
            return 0;
            num /= 8;
    }
    return 1;
}

bool IsPwrOf16(int num){
    if(num==0)
        return 0;
    while(num != 1){
        if(num % 16 != 0)
            return 0;
            num /= 16;
    }
    return 1;
}

unsigned int CntSetOfNum(unsigned int num) {
    unsigned int count=0;
    while (num!=0){
        if (num & 1)
            count++;
        num >>=1;
    }
    return count;
}

int ToogleKthBit(int num, int k) {
    int mask = 1 << (k-1);
    return (num ^ mask);
}