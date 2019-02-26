#include "revert_string.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void RevertString(char *str)
{
    
	for (int i = 0, j = strlen(str)-1;i < strlen(str)/2 ; i++, j--)
	{
	    char a = str[i];
	    str[i] = str[j];
	    str[j] = a;
	};
}

