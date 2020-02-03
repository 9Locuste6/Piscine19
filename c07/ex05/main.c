/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:36:28 by gorban            #+#    #+#             */
/*   Updated: 2019/07/25 17:26:45 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_split.c"

int main()
{
	char *const str1 = "  HHHH0:  HagrksfjemwklgjbherhfjCDKMbvgnae Dkvdfhn sh35r256h 1dfk5 4r35sf0gh 1t4g14hs ARG45DFGH45F45g t5 H45BJ 45RST 454 HST45hRbhgfsthdr 5ffgt4hb HJth 45Hft hadr5bnfgshadrb45hj35sth4fg6j15h56ag3ds1g\n\t\n ad35yer geghestrg4sg4sth4arw h5t hgradrgS adrg asEg5dr4g adryra gergar 4hyr g4trg 4ashrst hr 5g  y5r ra 45h\nfghj5t43hthtwhwrthwrtg\t\nhtehrtwhwth WETH 45th tew h5hRT7H 45htwhT RW hRTW7h rtwhthtr7hrtht457hhrt 45thw7htw4htw4ghwetg5wG7 \neH7 W ehqeHGeq7ThEQh qerert7ygqehqet7hwe7h Eh EWh qEH ERTHqetH 7TEQh7qe tqH7qetHeqthq erthwetdg74rh7tukyuhgeat4jui47pou4oiuydr4dasGykYDESKRY6 rsd4Y  547dztERYyidyo475yES6T4yj35j7er3yr y aywe7t4gk5u7yetst4ghn5irs65y4te35hjdi7uyoisr8tdfzg\n5t4u8r56gf1254k8i4dw561sA2Gt 2Te5fg j4rg3sj\n44rytrQ561DF5R6J4U5DAYTW AE56ESTGERH45YE56T4J56Wr4e5rr5y4y8u5y4t56j4y156wa 5y6rys4t56et4fj8h5EWATH arr gaht4z4t gfns355h4158th4t56es14gt571qrw555t46 Wt574 g4RShat4ESst5h4gefdrzh45ztAErRY4 rharw4jrtt4e13yrt4RW65sj14jru5t456zjj AEHry hst656yr 4str5et 4a56jYTrH TA 4tt45 45w4t 3ARWtst3 yrT5ar 4tE4rhaYEYRSTry4a4T4ARrytuyre5y4rt5te 35Ay4a5sjs4Yyra4j5 tetj45ty1t5ew4sjy5trz4  ay\n4e45jsyry4hjs4y5tyr6js45tryh 574te 455555    4t5ya45jatersj45rt45jtyty54ter4tr 44             arHT4h5ryYt45aeYHu erY4ART54\try4yat4rettJFY45tRYS4htytu5TUatrT555rsrYSY354RSY435hs5t3y   Qn";
	char *const str2 = " grthfthHTERJHhhTHrt HRT HJertHJ ert weHtJHtRGh etyRJr HryJERh dy JheARhET YjrWe HDRYu VCHTh ERYejEweJyJweJty JrTJtyeJ tjety jTW";
	char *begin = "HH\n \t Hgonjour";
	char *end = "jesuis\n\t   hHHH";
	char *empty = "";
	
	char *charset1 = " H";
	char *charset2 = "";
	char *charset3 = " grthfthHTERJHhhTHrt HRT HJertHJ ert weHtJHtRGh etyRJr HryJERh dy JheARhET YjrWe HDRYu VCHTh ERYejEweJyJweJty JrTJtyeJ tjety jTW";

	char *charset;
	charset = charset1;

	char **strs1 = ft_split(str1,charset);
	char **strs2 = ft_split(str2,charset);
	char **strs3 = ft_split(begin,charset);
	char **strs4 = ft_split(end,charset);
	char **strs5 = ft_split(empty,charset);

	printf("tab 'str1' start\n");
	for (int i = 0; strs1[i] != 0; i++)
	{
		printf("str tab[%d]: %s\n", i, strs1[i]);
	}
	printf("tab end\n\n");

	printf("tab 'str2' start\n");
	for (int i = 0; strs2[i] != 0; i++)
	{
		printf("begin tab[%d]: %s\n", i, strs2[i]);
	}
	printf("tab end\n\n");

	printf("tab 'begin' start\n");
	for (int i = 0; strs3[i] != 0; i++)
	{
		printf("begin tab[%d]: %s\n", i, strs3[i]);
	}
	printf("tab end\n\n");

	printf("tab 'end' start\n");
	for (int i = 0; strs4[i] != 0; i++)
	{
		printf("end tab[%d]: %s\n", i, strs4[i]);
	}
	printf("tab end\n\n");

	printf("tab 'empty' start\n");
	for (int i = 0; strs5[i] != 0; i++)
	{
		printf("empty tab[%d]: %s\n", i, strs5[i]);
	}
	printf("tab end\n");

	for (int i = 0; strs1[i] != 0; i++)
		free(strs1[i]);
	free(strs1);
	for (int i = 0; strs2[i] != 0; i++)
		free(strs2[i]);
	free(strs2);
	for (int i = 0; strs3[i] != 0; i++)
		free(strs3[i]);
	free(strs3);
	for (int i = 0; strs4[i] != 0; i++)
		free(strs4[i]);
	free(strs4);
	for (int i = 0; strs5[i] != 0; i++)
		free(strs5[i]);
	free(strs5);

	(void) charset1;
	(void) charset2;
	(void) charset3;

	return 0;
}
