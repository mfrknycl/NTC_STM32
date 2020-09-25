#include "B57703.h"

/*
 *
 *		          Linear interpolation equation 
 *
 *			        		y0(x1-x) + y1(x - x0)		
 *			        y = ----------------------
 *			        					 x1-x0
 *
 *
 *			y0 = ntcTemp[i].y      x0 = ntcTemp[i].x
 *			y1 = ntcTemp[i+1].y    x1 = ntcTemp[i+1].x
 *			
 *	
 * 
 */



/**
	* @brief Find the range of temperature from lookup table.
						This function uses liner interpolation method.
	* @param *table is pointer to ntcStruct_t
	* @param adcVal is adc value from temperature sensor
	* @param size is the size of the *table
	* @retval it returns the temperature after it's calculated
	*/
float findTemp(const ntcStruct_t *table, float adcVal, int size){
		
	float y_ans;
	
	for(int i = 0; i < size; i++){
		
		if(adcVal > ntcTemp[0].x){break;}	
		
		if(ntcTemp[i].x <= adcVal && adcVal >= ntcTemp[i+1].x){
			y_ans = (ntcTemp[i].y*(ntcTemp[i+1].x-adcVal)+ntcTemp[i+1].y*(adcVal-ntcTemp[i].x))/(ntcTemp[i+1].x-ntcTemp[i].x);
			return y_ans;
		}
	}
	return -1;
}





