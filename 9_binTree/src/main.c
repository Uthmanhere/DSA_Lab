/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/14/2017 04:15:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Muhammad Usman (), uthmanhere@gmail.com
 *   Organization:  SEECS, NUST
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bin_tree.h"

int main()
{
	class_binTree * myTree = get_binTree( 15 );
	
	printf("Let's check if first : %d\n", myTree);

	puts("Allocated!");
	for (int counter = 10; counter < 20; ++counter)
	{
		insertion (myTree, counter);
	}
	for (int counter = 12; counter > 0; --counter)
	{
		insertion (myTree, counter);
	}

	printf("Let's check after insertion : %d\n", myTree);

	puts("Fine for insertion");

	traversal(myTree);

	puts("Okay so this was traversal");
	for (int counter = -5; counter < 30; ++counter)
	{
		printf("counter %d\tis\t%d\n", counter, search(myTree, counter));
		puts("");
	}
	
	puts("So you are afraid of freedom?");




	free(myTree);

	return 0;
}

