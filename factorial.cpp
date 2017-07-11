#include "functions.h"
/** 
@class factorial
@detailed <i>Здесь производится расчет факториала</i> @code
 if(n!=1){
	return(n * factorial(n-1));
    }
@endcode
@return Значение факториала
*/


int factorial(int n){

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}

