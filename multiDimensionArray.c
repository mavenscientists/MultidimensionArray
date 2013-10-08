/**
   * @author    Maven Scientists (http://mavenscientists.com) 
   * @email    info@mavenscientists.com
   */
#include <stdio.h>

int main()
{
	/*declaration syntax
	data-type name-of-array [ROW_SIZE][COLUMN_SIZE]
	*/
	char a[13][2]; // 2-D array
	int row;
	int col;
	char value = 'A';

	// initilaization
	for(row = 0; row<13; row++)
	{	
		for(col = 0; col<2; col++)
		{
			a[row][col] = value++;
			printf("%c\t",a[row][col]);
		}
		printf("\n");
	}
	
	return 0;
}
