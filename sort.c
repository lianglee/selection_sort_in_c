/**
 * Open Source Social Network
 *
 * @package   (Informatikon.com).ossn
 * @author    OSSN Core Team <info@opensource-socialnetwork.org>
 * @copyright 2014 iNFORMATIKON TECHNOLOGIES
 * @license   General Public Licence http://www.opensource-socialnetwork.org/licence
 * @link      http://www.opensource-socialnetwork.org/licence

 * There are many ways to sort array but sometime you are required to sort 
 * them according to specific way. This method is actually a selection sort.
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * ssort
 * 
 * @param integer array The integer type arrays
 * @param  integer size The size of array
 *
 * @return void
 */
void ssort(int * array[100], int size){
	int i, j, temp;
	for ( i = 0 ; i < size + 1; i++){
		for (j = i + 1 ; j <= size ; j++){
			if (array[i] > array[j]){
				temp = array[i] ;
				array[i] = array[j] ;
				array[j] = temp;
			}
		}
	}	
}
/**
 * Main function of program
 * 
 * @return boolean
 */
bool main(){
	int values[] = {9, 1, 4, 2, 8, 10};
	int i, size;
	size = (sizeof(values)/sizeof(int)) - 1;
	ssort(values, size);
	
	for (i=0;i <= size; i++){
		printf("%d\n", values[i]);	
	}
	return true;
}
