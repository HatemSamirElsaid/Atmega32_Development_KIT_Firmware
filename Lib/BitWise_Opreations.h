#ifndef BITWISE_OPREATIONS_H_
#define BITWISE_OPREATIONS_H_

#define SET_Bit(Reg,Bit_Num) Reg|=(1<<Bit_Num)

#define CLR_Bit(Reg,Bit_Num) Reg&=~(1<<Bit_Num)

#define READ_Bit(Reg,Bit_Num) Reg&=(1<<Bit_Num)

#define TOGGLE_Bit(Reg,Bit_Num) Reg^=(1<<Bit_Num)



#endif /* BITWISE_OPREATIONS_H_ */


