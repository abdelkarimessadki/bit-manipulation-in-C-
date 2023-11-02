#ifndef _BIT_H
#define _BIT_H

// check if the k th bit of number is set
void isKthBitSet(int num, int k);

// set the k th bit of number
int SetKthBit(int num, int k);

// clear the k th bit of number
int ClrKthBit(int num, int k);

// remove the last bit of number
int RmvLastBit(int num);

// check if the number is odd or even
void IsEven_Odd(int num);

// check if number is power of 2
bool IsPwrOf2(int num);

// check if number is power of 4
bool IsPwrOf4(int num);

// check if number is power of 8
bool IsPwrOf8(int num);

// check if number is power of 16
bool IsPwrOf16(int num);

// count the set bits in number
unsigned int CntSetOfNum(unsigned int num);

// toogle the k th bit of number
int ToogleKthBit(int num, int k);

#endif
