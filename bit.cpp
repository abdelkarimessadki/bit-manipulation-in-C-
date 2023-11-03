/**
 * @file bit.cpp
 * @author ESSADKI ABDELKARIM (abdelkarimstudent2001@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "bit.h"
#include <stdio.h>

/**
 * @brief check if bit is set
 * 
 * @param num 
 * @param k 
 */
void isKthBitSet(int num, int k) {
    int mask = 1<<k;
    if(num & mask){
        printf("the %d th bit is set to 1\n", k+1);
    }else{
        printf("the %d th bit is set to 0\n", k+1);
    }
}

/**
 * @brief Set the Kth Bit object
 * 
 * @param num 
 * @param k 
 * @return int 
 */
int SetKthBit(int num, int k){
    int mask = 1<<(k-1);
    return num | mask;
}

/**
 * @brief Clear the Kth Bit object
 * 
 * @param num 
 * @param k 
 * @return int 
 */
int ClrKthBit(int num, int k){
    int mask = 1<<k-1;
    return num & ~mask;
}

/**
 * @brief Remove the last set bit
 * 
 * @param num 
 * @return int 
 */
int RmvLastBit(int num) {
    return num & (num-1);
}

/**
 * @brief check if number is odd or even
 * 
 * @param num 
 */
void IsEven_Odd(int num) {
    if(num==(num>>1)<<1){
        printf("the number %d is pair\n", num);
    }else{
        printf("the number %d is impair\n", num);
    }
}

/**
 * @brief test if num is power of 2
 * 
 * @param num 
 * @return true 
 * @return false 
 */
bool IsPwrOf2(int num){
    return !(num & (num-1));
    
}

/**
 * @brief test if num is power of 4
 * 
 * @param num 
 * @return true 
 * @return false 
 */
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

/**
 * @brief test if num is power of 8
 * 
 * @param num 
 * @return true 
 * @return false 
 */
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

/**
 * @brief test if num is power of 16
 * 
 * @param num 
 * @return true 
 * @return false 
 */
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

/**
 * @brief calcule the number of set bit in num
 * 
 * @param num 
 * @return unsigned int 
 */
unsigned int CntSetOfNum(unsigned int num) {
    unsigned int count=0;
    while (num!=0){
        if (num & 1)
            count++;
        num >>=1;
    }
    return count;
}

/**
 * @brief toogle the Kth bit in num
 * 
 * @param num 
 * @param k 
 * @return int 
 */
int ToogleKthBit(int num, int k) {
    int mask = 1 << (k-1);
    return (num ^ mask);
}