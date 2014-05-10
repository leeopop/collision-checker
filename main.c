/*
 * main.c
 *
 *  Created on: 2014. 5. 10.
 *      Author: leeopop
 */


#include <stdio.h>
#include "collision_checker.h"

int main()
{
	if(check_collision("testprog", 0) == 0)
	{
		printf("lock acquired\n");
		fflush(stdout);
	}
	else
	{
		printf("cannot acquire lock\n");
		fflush(stdout);
		return 1;
	}

	char buf;
	read(0,&buf,1);
	return 0;
}
