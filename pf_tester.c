/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pf_tester.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/27 12:32:53 by abeznik       #+#    #+#                 */
/*   Updated: 2021/10/06 16:47:19 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ANSI-color-codes.h"

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

#define TEST_C
#define TEST_S
#define TEST_D
#define TEST_I
#define TEST_U
#define TEST_LX
#define TEST_X
#define TEST_P
#define TEST_PRO
#define TEST_ALL

// #define ULLONG_MAX 18446744073709551615ULL

// /*
int	main(void)
{
	int	diff;

	printf("\n");
	printf(BHCYN "************************************************************\n" reset);
	printf(BHCYN "*                         LET'S GO!                        *\n" reset);
	printf(BHCYN "************************************************************\n" reset);
	printf("\n");
	sleep(1);
	printf(BHGRN "OFFICIAL PRINTF\n" reset);
	printf(BHWHT "TIS MINE PRINTF\n" reset);
	sleep(1);

#ifdef TEST_C

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING c FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------ TEST 1 - all printables (32-127) ------------|\n" reset);
	diff = printf(BHGRN "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	diff -= ft_printf(BHWHT "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','');
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------- TEST 2 - control characters (1-31) -----------|\n" reset);
	diff = printf(BHGRN "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	diff -= ft_printf(BHWHT "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|-------------- TEST 3 - extended (128-255) ---------------|\n" reset);
	diff = printf(BHGRN "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);
	diff -= ft_printf(BHWHT "| %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c |\n" reset,(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|-------------------- TEST 4 - null term ------------------|\n" reset);
	diff = printf(BHGRN "| %c |\n" reset, '\0');
	diff -= ft_printf(BHWHT "| %c |\n" reset, '\0');
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING c                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");
	
#endif
	
#ifdef TEST_S
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING s FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - basic string -----------------|\n" reset);
	diff = printf(BHGRN "| bonjour %s |\n" reset, "toi");
	diff -= ft_printf(BHWHT "| bonjour %s |\n" reset, "toi");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 2 - only string ------------------|\n" reset);
	diff = printf(BHGRN "| %s |\n" reset, "string string");
	diff -= ft_printf(BHWHT "| %s |\n" reset, "string string");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - two strings 1 -----------------|\n" reset);
	diff = printf(BHGRN "| %s%s |\n" reset, "hello", "world");
	diff -= ft_printf(BHWHT "| %s%s |\n" reset, "hello", "world");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - two strings 2 -----------------|\n" reset);
	diff = printf(BHGRN "| %s beautiful %s ! |\n" reset, "hello", "world");
	diff -= ft_printf(BHWHT "| %s beautiful %s ! |\n" reset, "hello", "world");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 5 - empty string ------------------|\n" reset);
	diff = printf(BHGRN "| this %s is empty |\n" reset, "");
	diff -= ft_printf(BHWHT "| this %s is empty |\n" reset, "");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|---------------- TEST 6 - full then empty ----------------|\n" reset);
	diff = printf(BHGRN "| this %s is %s |\n" reset, "hello", "");
	diff -= ft_printf(BHWHT "| this %s is %s |\n" reset, "hello", "");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 7 - empty then full ---------------|\n" reset);
	diff = printf(BHGRN "| this %s is %s |\n" reset, "", "hello");
	diff -= ft_printf(BHWHT "| this %s is %s |\n" reset, "", "hello");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 8 - three strings ----------------|\n" reset);
	diff = printf(BHGRN "| %s %s %s |\n" reset, "hello", "beautiful", "world");
	diff -= ft_printf(BHWHT "| %s %s %s |\n" reset, "hello", "beautiful", "world");
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 9 - basic null -------------------|\n" reset);
	diff = printf(BHGRN "| well hello there %s |\n" reset, NULL);
	diff -= ft_printf(BHWHT "| well hello there %s |\n" reset, NULL);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 10 - only null -------------------|\n" reset);
	diff = printf(BHGRN "| %s |\n" reset, NULL);
	diff -= ft_printf(BHWHT "| %s |\n" reset, NULL);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING s                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif

#ifdef TEST_D

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING d FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - only positive ----------------|\n" reset);
	diff = printf(BHGRN "| %d |\n" reset, 42);
	diff -= ft_printf(BHWHT "| %d |\n" reset, 42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only zero -------------------|\n" reset);
	diff = printf(BHGRN "| %d |\n" reset, 0);
	diff -= ft_printf(BHWHT "| %d |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %d |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %d |\n" reset, -42);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %d number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %d number |\n" reset, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %d number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %d number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %d number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %d number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|-------------------- TEST 7 - INT_MAX --------------------|\n" reset);
	diff = printf(BHGRN "| %d |\n" reset, INT_MAX);
	diff -= ft_printf(BHWHT "| %d |\n" reset, INT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|-------------------- TEST 8 - INT_MIN --------------------|\n" reset);
	diff = printf(BHGRN "| %d |\n" reset, INT_MIN);
	diff -= ft_printf(BHWHT "| %d |\n" reset, INT_MIN);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING d                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif
	
#ifdef TEST_I

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING i FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - only positive ----------------|\n" reset);
	diff = printf(BHGRN "| %i |\n" reset, 42);
	diff -= ft_printf(BHWHT "| %i |\n" reset, 42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only zero -------------------|\n" reset);
	diff = printf(BHGRN "| %i |\n" reset, 0);
	diff -= ft_printf(BHWHT "| %i |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %i |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %i |\n" reset, -42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %i number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %i number |\n" reset, 4242);
	printf(BHBLU "|-------------------------- DONE --------------------------|\n" reset);
	printf("\n");
	printf("\n");
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %i number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %i number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %i number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %i number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 7 - INT_MAX -------------------|\n" reset);
	diff = printf(BHGRN "| %i |\n" reset, INT_MAX);
	diff -= ft_printf(BHWHT "| %i |\n" reset, INT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 8 - INT_MIN -------------------|\n" reset);
	diff = printf(BHGRN "| %i |\n" reset, INT_MIN);
	diff -= ft_printf(BHWHT "| %i |\n" reset, INT_MIN);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING i                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");
#endif
	
#ifdef TEST_U

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING u FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - only positive ----------------|\n" reset);
	diff = printf(BHGRN "| %u |\n" reset, 42);
	diff -= ft_printf(BHWHT "| %u |\n" reset, 42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only zero -------------------|\n" reset);
	diff = printf(BHGRN "| %u |\n" reset, 0);
	diff -= ft_printf(BHWHT "| %u |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %u |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %u |\n" reset, -42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %u number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %u number |\n" reset, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %u number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %u number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %u number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %u number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 7 - INT_MAX -------------------|\n" reset);
	diff = printf(BHGRN "| %u |\n" reset, UINT_MAX);
	diff -= ft_printf(BHWHT "| %u |\n" reset, UINT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING u                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif

#ifdef TEST_LX

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING x FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - only positive ----------------|\n" reset);
	diff = printf(BHGRN "| %x |\n" reset, 42);
	diff -= ft_printf(BHWHT "| %x |\n" reset, 42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only zero -------------------|\n" reset);
	diff = printf(BHGRN "| %x |\n" reset, 0);
	diff -= ft_printf(BHWHT "| %x |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %x |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %x |\n" reset, -42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %x number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %x number |\n" reset, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %x number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %x number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %x number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %x number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 7 - UINT_MAX ------------------|\n" reset);
	diff = printf(BHGRN "| %x |\n" reset, UINT_MAX);
	diff -= ft_printf(BHWHT "| %x |\n" reset, UINT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING x                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif

#ifdef TEST_X

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING X FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------ TEST 1 - only positive ----------------|\n" reset);
	diff = printf(BHGRN "| %X |\n" reset, 42);
	diff -= ft_printf(BHWHT "| %X |\n" reset, 42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only zero -------------------|\n" reset);
	diff = printf(BHGRN "| %X |\n" reset, 0);
	diff -= ft_printf(BHWHT "| %X |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %X |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %X |\n" reset, -42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %X number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %X number |\n" reset, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %X number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %X number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %X number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %X number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 7 - UINT_MAX ------------------|\n" reset);
	diff = printf(BHGRN "| %X |\n" reset, UINT_MAX);
	diff -= ft_printf(BHWHT "| %X |\n" reset, UINT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING X                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif

#ifdef TEST_P

	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;
	
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING p FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|---------------------- TEST 1 - null ---------------------|\n" reset);
	diff = printf(BHGRN "| %p |\n" reset, NULL);
	diff -= ft_printf(BHWHT "| %p |\n" reset, NULL);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 2 - basic ---------------------|\n" reset);
	diff = printf(BHGRN "| %p%p %p%p %p%p %p%p %p%p %p%p |\n" reset,&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	diff -= ft_printf(BHWHT "| %p%p %p%p %p%p %p%p %p%p %p%p |\n" reset,&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - only negative -----------------|\n" reset);
	diff = printf(BHGRN "| %p |\n" reset, -42);
	diff -= ft_printf(BHWHT "| %p |\n" reset, -42);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 4 - basic positive ----------------|\n" reset);
	diff = printf(BHGRN "| this %p number |\n" reset, 4242);
	diff -= ft_printf(BHWHT "| this %p number |\n" reset, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 5 - basic zero ------------------|\n" reset);
	diff = printf(BHGRN "| this %p number |\n" reset, 0);
	diff -= ft_printf(BHWHT "| this %p number |\n" reset, 0);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 6 - basic negative ----------------|\n" reset);
	diff = printf(BHGRN "| this %p number |\n" reset, -4242);
	diff -= ft_printf(BHWHT "| this %p number |\n" reset, -4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|--------------------- TEST 7 - UINT_MAX ------------------|\n" reset);
	diff = printf(BHGRN "| %p |\n" reset, UINT_MAX);
	diff -= ft_printf(BHWHT "| %p |\n" reset, UINT_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "|------------------- TEST 8 - ULLONG_MAX ------------------|\n" reset);
	diff = printf(BHGRN "| %p |\n" reset, ULLONG_MAX);
	diff -= ft_printf(BHWHT "| %p |\n" reset, ULLONG_MAX);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING X                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif
	
#ifdef TEST_PRO

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                TESTING %% FORMAT CONVERSION               |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf(BHBLU "|------------------- TEST 1 - basic %% ---------------------|\n" reset);
	diff = printf(BHGRN "| hopa %% |\n" reset);
	diff -= ft_printf(BHWHT "| hopa %% |\n" reset);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------- TEST 2 - only %% ----------------------|\n" reset);
	diff = printf(BHGRN "| %% |\n" reset);
	diff -= ft_printf(BHWHT "| %% |\n" reset);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHBLU "|----------------- TEST 3 - multiple %% --------------------|\n" reset);
	diff = printf(BHGRN "| %% oui %% oui %% |\n" reset);
	diff -= ft_printf(BHWHT "| %% oui %% oui %% |\n" reset);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING %%                    |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	printf("\n");
	printf("\n");
	sleep(1);
	printf(BHWHT "============================================================\n" reset);
	printf(BHWHT "=                          MOVING ON                       =\n" reset);
	printf(BHWHT "============================================================\n" reset);
	sleep(1);
	printf("\n");
	printf("\n");

#endif
	
#ifdef TEST_ALL

	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|               TESTING ALL FORMAT CONVERSIONS             |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);
	printf(BHBLU "|------------------------- TEST 1 -------------------------|\n" reset);
	diff = printf(BHGRN "| %% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n" reset, 'c', "salut", 42, -42, 12, -12, 4242);
	diff -= ft_printf(BHWHT "| %% bonjour %c baguette du %s oui %i oui %d merci %x svp %X aurevoir %u\n" reset, 'c', "salut", 42, -42, 12, -12, 4242);
	if (diff == 0)
		printf(BHBLU "|---------------------- DIFF is " reset BHGRN "OK" reset BHBLU"! -----------------------|\n" reset);
	else
		printf(BHBLU "|---------------------- DIFF is " reset BHRED "KO" reset BHBLU"! -----------------------|\n" reset);
	printf("\n");
	printf(BHBLU "------------------------------------------------------------\n");
	printf("|                        DONE TESTING ALL                  |\n");
	printf("------------------------------------------------------------\n" reset);
	printf("\n");
	sleep(1);

#endif

	sleep(1);
	printf(BHCYN "  GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG  \n" reset);
	printf(BHCYN "  GG                       FINISHED!                    GG  \n" reset);
	printf(BHCYN "  GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG GG  \n" reset);
	printf("\n");

	return (0);
}

// */