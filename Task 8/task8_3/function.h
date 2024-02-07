#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#define SET_BIT(VAR, BIT_POS) ((VAR) |= (1 << (BIT_POS)))
#define CLR_BIT(VAR, BIT_POS) ((VAR) &= ~(1 << (BIT_POS)))
#define TOGGLE_BIT(VAR, BIT_POS) ((VAR) ^= (1 << (BIT_POS)))

#endif

