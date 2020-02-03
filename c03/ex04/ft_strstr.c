/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:22:43 by gorban            #+#    #+#             */
/*   Updated: 2019/07/13 16:10:49 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		str++;
		x++;
	}
	return (x - 1);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x] && x < n)
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	char	*str2;

	str2 = str;
	x = 1;
	if (*to_find == '\0')
		return (str);
	while (*str2 && x != 0)
	{
		x = ft_strncmp(str2, to_find, ft_strlen(to_find));
		str2++;
	}
	if (x == 0)
	{
		str2--;
		return (str2);
	}
	else
		return (0);
}
