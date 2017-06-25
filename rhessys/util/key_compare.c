#include <stdlib.h>
#include "rhessys.h"
/*------------------------------
sort heights in descending order
-------------------------------*/
int key_compare(const void * e1, const void *e2 ) /* T.N. Mar 2016 */
{
	/*------------------------------------------------------*/
	/*	Local Function Definition. 							*/
	/*------------------------------------------------------*/
	double v1,v2;
	/*------------------------------------------------------*/
	/*	Local Variable Definition. 							*/
	/*------------------------------------------------------*/
		v1 = ((struct layer_object *)e1)->height;
		v2 = ((struct layer_object *)e2)->height;

	return (v1>v2) ? -1 : (v1<v2) ? 1: 0;
}/*end key_compare.c*/
