/* Average of neighboring elements in array
 * Author: Danilo Beuche
 * Date: 27.12.2014
 * Last Change: 17.4.2016
 * Version: 1.0
*/
int average(float *in, float *out, unsigned int length)
{    /* loop over all elements in array */
   for (int i = 0;i<length; i++) {
	/* 
	 *	Compare index with 1 or length -1, only do average 
     *	in this case
	 */
	if (i>1 || i < length-1) {
		/* index within limits, do average */
		out[i] = in[i-2]+in[i-1]+in[i] + in[i+1] + in[i+2]; 
	} else {
		/* not in limits, just copy */
		out[i] = in[i];
	}
}