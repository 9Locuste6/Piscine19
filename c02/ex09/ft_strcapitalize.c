/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 09:00:03 by gorban            #+#    #+#             */
/*   Updated: 2019/07/07 16:04:20 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*str2;
	int		bool;

	bool = 0;
	str2 = str;
	while (*str2)
	{
		if (*str2 >= 'A' && *str2 <= 'Z')
			*str2 = *str2 + 32;
		if (bool == 0)
			if (*str2 >= 'a' && *str2 <= 'z')
				*str2 = *str2 - 32;
		bool = test_char(*str2);
		str2++;
	}
	return (str);
}
