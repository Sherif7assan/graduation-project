/*
 * BitMath.h
 *
 * Created: 12/12/2020 08:15:56 م
 *  Author: hp
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define setB(reg,bit)     reg|=(1<<bit)
#define clrB(reg,bit)     reg&=~(1<<bit)
#define getB(reg,bit)     ((reg>>bit) & 1)
#define toggleB(reg,bit)  reg^=(1<<bit)




#endif /* BITMATH_H_ */