#ifndef __B57703_H__
#define __B57703_H__

/* Includes ---------------------------------------------------- */
#include "stm32f0xx_hal.h"
/* Private defines ---------------------------------------------------- */

/* Typedef Decleration ---------------------------------------------------- */
typedef struct{

	double x; 
	double y;
} ntcStruct_t;


static const ntcStruct_t ntcTemp[] = {

	{248, -40},
	{246, -35},
	{242, -30},
	{237, -25},
	{232, -20},
	{225, -15},
	{216, -10},
	{207,  -5},
	{196,   0},
	{183,   5},
	{170,  10},
	{156,  15},
	{142,  20},
	{128,  25},
	{114,  30},
	{101,  35},
	{89,   40},	
	{77,   45},	
	{67,   50}
	
};


/* Fucntion Decleration ---------------------------------------------------- */
double findTemp(const ntcStruct_t *table, double adcVal, int size);


#endif //__B57703_H__
