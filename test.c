#include "ft_printf.h"
# include <limits.h>
# include <stdio.h>

int main()
{
	int i;
	
	// test for %c

	printf("Test for [%%c] :\n\n");
	i = ft_printf("my print : [ %c ]\n", 'c');
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %c ]\n", 'c');
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %s

	printf("Test for [%%s] :\n\n");
	i = ft_printf("my print : [ %s ]\n", "Hello 1337!");
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %s ]\n", "Hello 1337!");
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for (null) in the %s

	printf("Test for [%%s] :\n\n");
	i = ft_printf("my print : [ %s ]\n", NULL);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %s ]\n", NULL);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %p

	printf("Test for [%%p] :\n\n");
	int num = 1337;
	i = ft_printf("my print : [ %p ]\n", &num);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %p ]\n", &num);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %p

	printf("Test for [%%p NULL] :\n\n");
	i = ft_printf("my print : [ %p ]\n", NULL);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %p ]\n", NULL);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %d

	printf("Test for [%%d] :\n\n");
	i = ft_printf("my print : [ %d ] - [ %d ]\n", 1337, INT_MIN);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %d ] - [ %d ]\n", 1337, INT_MIN);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %i

	printf("Test for [%%i] :\n\n");
	i = ft_printf("my print : [ %d ] - [ %d ]\n", 1337, INT_MIN);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %d ] - [ %d ]\n", 1337, INT_MIN);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %i

	printf("Test for [%%i] :\n\n");
	i = ft_printf("my print : [ %i ]\n", 1337);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %i ]\n", 1337);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %x

	printf("Test for [%%x] :\n\n");
	i = ft_printf("my print : [ %x ]\n", 13372024);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %x ]\n", 13372024);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %X

	printf("Test for [%%X] :\n\n");
	i = ft_printf("my print : [ %X ]\n", 13372024);
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %X ]\n", 13372024);
	printf("len : [ %d ]\n", i);
	printf("\n\n");

	// test for %%

	printf("Test for [%%] :\n\n");
	i = ft_printf("my print : [ %% ]\n");
	ft_printf("len : [ %d ]\n", i);
	i = printf("origenal : [ %% ]\n");
	printf("len : [ %d ]\n", i);
	printf("\n\n");
    
    // test for %m

    printf("Test for [%%m] :\n\n");
    i = ft_printf("my print : [ %m ]\n");
    ft_printf("len : [ %d ]\n", i);
    i = printf("origenal : [ %m ]\n");
    printf("len : [ %d ]\n", i);
    printf("\n\n");
    
	// test for filediscriptor close (1)

	printf("Test for [ fd close(1) ] :\n\n");
    fclose(stdout);
	i = -1;
	i = ft_printf("1337") + 49;
	write(2,"my print :\n",12);
	write(2,&i,1);
	write(2,"\n",1);
	i = printf("1337") + 49;
	write(2,"my print :\n",12);
	write(2,&i,1);
	write(2,"\n",1);
}
