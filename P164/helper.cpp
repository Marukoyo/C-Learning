#include <stdio.h>
extern int g_static_val;


void try_access_g(void)
{
	g_static_val += 10;
	printf("g_static_val = %d\n", g_static_val);

}
