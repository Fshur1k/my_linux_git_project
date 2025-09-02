#ifndef _FT_STR_TO_TAB_H
#define _FT_STR_TO_TAB_H

typedef struct	s_stock_str
{
	int size;
	//size being the length of the string;
	
	char *str;
	//str being the string;

	char *copy;
	//copy being a copy of the string;

}	t_stock_str;

#endif