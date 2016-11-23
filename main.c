/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:16:12 by adorn             #+#    #+#             */
/*   Updated: 2016/11/15 08:19:46 by adorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"

#define		STRING_1	"Balloon"
#define		STRING_2	"January 01 !"

static void	ft_test_strchr(void);
static void	ft_test_strrchr(void);
static void	ft_test_strstr(void);
static void	ft_test_strnstr(void);
static void	ft_test_strcmp(void);
static void	ft_test_strncmp(void);
static void	ft_test_atoi(void);
static void	ft_test_isalpha(void);
static void	ft_test_isdigit(void);
static void	ft_test_isalnum(void);
static void	ft_test_isascii(void);
static void	ft_test_isprint(void);
static void	ft_test_toupper(void);
static void	ft_test_tolower(void);
static void	ft_test_strequ(void);
static void	ft_test_strnequ(void);
static void	ft_test_strsub(void);
static void	ft_test_strjoin(void);
static void	ft_test_strtrim(void);
static void	ft_test_putchar(void);
static void	ft_test_putstr(void);
static void	ft_test_putendl(void);
static void	ft_test_putnbr(void);
static void	ft_test_strsplit(void);
static void	ft_test_itoa(void);
static void	ft_test_lstnew(void);

int		main(void)
{
	ft_test_strchr();
	ft_test_strrchr();
	ft_test_strstr();
	ft_test_strnstr();
	ft_test_strcmp();
	ft_test_strncmp();
	ft_test_atoi();
	ft_test_isalpha();
	ft_test_isdigit();
	ft_test_isalnum();
	ft_test_isascii();
	ft_test_isprint();
	ft_test_toupper();
	ft_test_tolower();
	ft_test_strequ();
	ft_test_strnequ();
	ft_test_strsub();
	ft_test_strjoin();
	ft_test_strtrim();
	ft_test_putchar();
	ft_test_putstr();
	ft_test_putendl();
	ft_test_putnbr();
	ft_test_strsplit();
	ft_test_itoa();
	ft_test_lstnew();
}

static void	ft_test_strchr(void)
{
	char str[] = STRING_1;
	char *r1;
	char *r2;
	char *r3;
	char *r4;

	printf("\nSTRCHR TESTS\n\n");
	r1 = strchr(str, 'o');
	printf("%s\n", r1);
	r2 = ft_strchr(str, 'o');
	printf("%s\n", r2);
	r3 = strchr(str, '\0');
	printf("%s\n", r3);
	r4 = ft_strchr(str, '\0');
	printf("%s\n", r4);
}

static void	ft_test_strrchr(void)
{
	char str[] = STRING_1;
	char *r1;
	char *r2;
	char *r3;
	char *r4;

	printf("\nSTRRCHR TESTS\n\n");
	r1 = strrchr(str, 'l');
	printf("%s\n", r1);
	r2 = ft_strrchr(str, 'l');
	printf("%s\n", r2);
	r3 = strrchr(str, '\0');
	printf("%s\n", r3);
	r4 = ft_strrchr(str, '\0');
	printf("%s\n", r4);
}

static void	ft_test_strstr(void)
{
	const char	*largestring = "Blueberry";
	const char	*smallstring = "lue";
	char		*ptr;
	char		*ptr2;

	printf("\nSTRSTR TESTS\n\n");
	ptr = strstr(largestring, smallstring);
	printf("%s\n", ptr);
	ptr2 = ft_strstr(largestring, smallstring);
	printf("%s\n", ptr2);
}

static void	ft_test_strnstr(void)
{
	const char	*big = "Foo Bar Baz";
	const char	*small = "Bar";
	char		*ptr;
	char		*ptr2;

	printf("\nSTRNSTRN\n\n");
	ptr = strnstr(big, small, 7);
	printf("%s\n", ptr);
	ptr2 = ft_strnstr(big, small, 7);
	printf("%s\n", ptr2);
}

static void	ft_test_strcmp(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;
	int		ret2;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");
	printf("\nSTRCMP TESTS\n\n");
	ret = strcmp(str1, str2);
	printf("%d\n", ret);
	ret2 = ft_strcmp(str1, str2);
	printf("%d\n", ret2);
}

static void	ft_test_strncmp(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;
	int		ret2;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");
	printf("\nSTRNCMP TESTS\n\n");
	ret = strncmp(str1, str2, 4);
	printf("%d\n", ret);
	ret2 = ft_strncmp(str1, str2, 4);
	printf("%d\n", ret2);	
}

static void	ft_test_atoi(void)
{
	char str1[] = "1000";
	char str2[] = "0000123";
	char str3[] = "		+42";

	int num1 = ft_atoi(str1);
	int num2 = ft_atoi(str2);
	int num3 = ft_atoi(str3);
	int num_1 = atoi(str1);
	int num_2 = atoi(str2);
	int num_3 = atoi(str3);
	printf("\nATOI TEST CASES\n\n");
	if (num1 == num_1)
		printf("Yay\n");
	if (num2 == num_2)
		printf("You rock!\n");
	if (num3 == num_3)
		printf("Woohoo!\n");
}

static void	ft_test_isalpha(void)
{
	int	var1 = 'a';
	int var2 = 'B';
	int var3 = '5';
	int var4 = '0';
	int num1;
	int num2;
	int num3;
	int num4;
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	num1 = isalpha(var1);
	num2 = isalpha(var2);
	num3 = isalpha(var3);
	num4 = isalpha(var4);
	num_1 = ft_isalpha(var1);
	num_2 = ft_isalpha(var2);
	num_3 = ft_isalpha(var3);
	num_4 = ft_isalpha(var4);
	printf("\nISALPHA TESTS\n\n");
	if (num1 == num_1)
		printf("a is in the alphabet!\n");
	if (num2 == num_2)
		printf("B is in the alphabet!\n");
	if (num3 == num_3)
		printf("5 is not in the alphabet!\n");
	if (num4 == num_4)
		printf("0 is not in the alphabet!\n");
	else
		printf("Error!\n");
}

static void	ft_test_isdigit(void)
{
	int	var1 = '0';
	int var2 = '9';
	int var3 = '4';
	int var4 = 'a';
	int num1;
	int num2;
	int num3;
	int num4;
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	num1 = isdigit(var1);
	num2 = isdigit(var2);
	num3 = isdigit(var3);
	num4 = isdigit(var4);
	num_1 = ft_isdigit(var1);
	num_2 = ft_isdigit(var2);
	num_3 = ft_isdigit(var3);
	num_4 = ft_isdigit(var4);
	printf("\nISDIGIT TESTS\n\n");
	if (num1 == num_1)
		printf("0 is a digit!\n");
	if (num2 == num_2)
		printf("9 is a digit!\n");
	if (num3 == num_3)
		printf("4 is a digit!\n");
	if (num4 == num_4)
		printf("a is not a digit!\n");
	else
		printf("Error!\n");
}

static void	ft_test_isalnum(void)
{
	int	var1 = '0';
	int var2 = 'a';
	int var3 = 'U';
	int var4 = '`';
	int num1;
	int num2;
	int num3;
	int num4;
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	num1 = isalnum(var1);
	num2 = isalnum(var2);
	num3 = isalnum(var3);
	num4 = isalnum(var4);
	num_1 = ft_isalnum(var1);
	num_2 = ft_isalnum(var2);
	num_3 = ft_isalnum(var3);
	num_4 = ft_isalnum(var4);
	printf("\nISALNUM TESTS\n\n");
	if (num1 == num_1)
		printf("0 is a digit!\n");
	if (num2 == num_2)
		printf("a is in the alphabet!\n");
	if (num3 == num_3)
		printf("U is in the alphabet!\n");
	if (num4 == num_4)
		printf("` is not alphanumeric!\n");
	else
		printf("Error!\n");
}

static void	ft_test_isascii(void)
{
	int	var1 = '0';
	int var2 = 'a';
	int var3 = '}';
	int var4 = '`';
	int num1;
	int num2;
	int num3;
	int num4;
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	num1 = isascii(var1);
	num2 = isascii(var2);
	num3 = isascii(var3);
	num4 = isascii(var4);
	num_1 = ft_isascii(var1);
	num_2 = ft_isascii(var2);
	num_3 = ft_isascii(var3);
	num_4 = ft_isascii(var4);
	printf("\nISASCII TESTS\n\n");
	if (num1 == num_1)
		printf("0 is a digit!\n");
	if (num2 == num_2)
		printf("a is in the alphabet!\n");
	if (num3 == num_3)
		printf("} is in the ASCII table!\n");
	if (num4 == num_4)
		printf("` is in the ASCII table!\n");
	else
		printf("Error!\n");
}

static void	ft_test_isprint(void)
{
	int	var1 = ' ';
	int var2 = 'a';
	int var3 = '}';
	int var4 = '9';
	int num1;
	int num2;
	int num3;
	int num4;
	int num_1;
	int num_2;
	int num_3;
	int num_4;

	num1 = isascii(var1);
	num2 = isascii(var2);
	num3 = isascii(var3);
	num4 = isascii(var4);
	num_1 = ft_isascii(var1);
	num_2 = ft_isascii(var2);
	num_3 = ft_isascii(var3);
	num_4 = ft_isascii(var4);	
	printf("\nISASCII TESTS\n\n");
	if (num1 == num_1)
		printf("  is a space!\n");
	if (num2 == num_2)
		printf("a is in the alphabet!\n");
	if (num3 == num_3)
		printf("} is in the ASCII table!\n");
	if (num4 == num_4)
		printf("9 is a number!\n");
	else
		printf("Error!\n");
}

static void	ft_test_toupper(void)
{
	char	c1;
	char	c2;
	char	ret;
	char	ret2;
	char	ret3;
	char	ret4;

	c1 = 'z';
	c2 = 'P';
	printf("\nTOUPPER TESTS\n\n");
	ret = toupper(c1);
	printf("%c\n", ret);
	ret2 = ft_toupper(c1);
	printf("%c\n", ret2);
	ret3 = toupper(c2);
	printf("%c\n", ret3);
	ret4 = ft_toupper(c2);
	printf("%c\n", ret4);
}

static void	ft_test_tolower(void)
{
	char	c1;
	char	c2;
	char	ret;
	char	ret2;
	char	ret3;
	char	ret4;

	c1 = 'z';
	c2 = 'P';
	printf("\nTOLOWER TESTS\n\n");
	ret = tolower(c1);
	printf("%c\n", ret);
	ret2 = ft_tolower(c1);
	printf("%c\n", ret2);
	ret3 = tolower(c2);
	printf("%c\n", ret3);
	ret4 = ft_tolower(c2);
	printf("%c\n", ret4);
}

static void	ft_test_strequ(void)
{
	char str[] = "Hello";
	char str2[] = "Hello";
	char s1[] = "";
	char s2[] = "Foo";
	char st1[] = "Great";
	char st2[] = "Grape";
	char n[] = "";
	char n2[] = "";
	int ret;
	int ret2;
	int ret3;
	int ret4;

	printf("\nSTREQU TESTS\n\n");
	ret = ft_strequ(str, str2);
	printf("The number returned should be 1: %d\n", ret);
	ret2 = ft_strequ(s1, s2);
	printf("The number returned should be 0: %d\n", ret2);
	ret3 = ft_strequ(st1, st2);
	printf("The number returned should be 0: %d\n", ret3);
	ret4 = ft_strequ(n, n2);
	printf("The number returned should be 1: %d\n", ret4);
}

static void	ft_test_strnequ(void)
{
	char str[] = "Hello";
	char str2[] = "Hello";
	char s1[] = "";
	char s2[] = "Foo";
	char st1[] = "Grass";
	char st2[] = "Grape";
	int ret;
	int ret2;
	int ret3;

	printf("\nSTRNEQU TESTS\n\n");
	ret = ft_strnequ(str, str2, 5);
	printf("The number returned should be 1: %d\n", ret);
	ret2 = ft_strnequ(s1, s2, 2);
	printf("The number returned should be 0: %d\n", ret2);
	ret3 = ft_strnequ(st1, st2, 3);
	printf("The number returned should be 1: %d\n", ret3);
}

static void	ft_test_strsub(void)
{
	char str[] = "Hot Air Balloon";
	char str2[] = "";
	char str3 [] = "Candy Cane";
	char *ret;
	char *ret2;
	char *ret3;
	
	printf("\nSTRSUB TESTS\n\n");
	ret = ft_strsub(str, 5, 5);
	printf("ir Ba should be printed: %s\n", ret);
	ret2 = ft_strsub(str2, 3, 2);
	printf("Nothing should be printed: %s\n", ret2);
	ret3 = ft_strsub(str3, 3, 0);
	printf("Nothing should be printed: %s\n", ret3);
}

static void	ft_test_strjoin(void)
{
	char str1[] = "Fuck";
	char str2[] = "Trump";
	char str3[] = "";
	char str4[] = "Boo";
	char *ret;
	char *ret2;

	printf("\nSTRJOIN TESTS\n\n");
	ret = ft_strjoin(str1, str2);
	printf("%s\n", ret);
	ret2 = ft_strjoin(str3, str4);
	printf("%s\n", ret2);

}

static void	ft_test_strtrim(void)
{
	char str[] = "   abc   ";
	char str2[] = "Wrigley     ";
	char str3[] = "   gum";
	char str4[] = "  wild one   ";
	char *ret;
	char *ret2;
	char *ret3;
	char *ret4;
	
	printf("\nSTRTRIM TESTS\n\n");
	ret = ft_strtrim(str);
	printf("%s\n", ret);
	ret2 = ft_strtrim(str2);
	printf("%s\n", ret2);
	ret3 = ft_strtrim(str3);
	printf("%s\n", ret3);
	ret4 = ft_strtrim(str4);
	printf("%s\n", ret4);
}

static void	ft_test_putchar(void)
{
	printf("\nPUTCHAR TESTS\n\n");
	ft_putchar('c');
	ft_putchar('\n');
	ft_putchar('Z');
}

static void	ft_test_putstr(void)
{
	char str[] = "Hello World";
	char str2[] = "Today is the 9th";
	printf("\nPUTSTR TESTS\n\n");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putstr(str2);
}

static void	ft_test_putendl(void)
{
	char *str = "Cats Rule the World";
	
	printf("\nPUTENDL TEST\n\n");
	ft_putendl(str);
}

static void	ft_test_putnbr(void)
{
	int x = 42;
	int y = 0;
	int z = -2147483648;

	printf("\nPUTNBR TESTS\n\n");
	ft_putnbr(x);
	printf("\n");
	ft_putnbr(y);
	printf("\n");
	ft_putnbr(z);
	printf("\n");
}

static void	ft_test_strsplit(void)
{
	char str[] = "  abc ";
	char *ret;
	char c;
	
	printf("\nSTRSPLIT\n\n");
	c = ' ';
	ret = *ft_strsplit(str, c);
	printf("%s\n", ret);
}

static void	ft_test_itoa(void)
{
	int num = 42;
	int num2 = 0;
	int num3 = -100;
	char *ret;
	char *ret2;
	char *ret3;

	printf("\nITOA TESTS\n\n");
	ret = ft_itoa(num);
	printf("%s\n", ret);
	ret2 = ft_itoa(num2);
	printf("%s\n", ret2);
	ret3 = ft_itoa(num3);
	printf("%s\n", ret3);
}

static void	ft_test_lstnew(void)
{
	int data = 42;
	int size = 3;
	t_list ret;

	ret = ft_lstnew(data, size);
	printf("%d\n", ret);
}
