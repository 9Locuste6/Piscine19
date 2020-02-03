/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufredri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 13:24:10 by lufredri          #+#    #+#             */
/*   Updated: 2019/07/21 17:55:42 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include.h"

/*
** Read an already openned file in `file`
** return the file_size (-1 if a error occurs)
*/

int		read_file(int fildes, char **file)
{
	char	buf[BUF_SIZE];
	int		file_size;
	int		read_size;

	file_size = 0;
	while ((read_size = read(fildes, buf, BUF_SIZE)))
	{
		if (read_size < 0)
			return (-1);
		*file = ft_memcat(*file, buf, file_size, read_size);
		file_size += read_size;
	}
	return (file_size);
}

/*
** Concatenate buf[buf_size] into file[file_size]
** Create a copy of the file, free file,
** reallocate it with sufficient memory for the concatenation
** copy each character of file_copy then buf into file
** free file_copy
*/

char	*ft_memcat(char *file, char buf[BUF_SIZE], int file_size,
		int buf_size)
{
	int		i;
	char	*file_copy;

	if ((file_copy = malloc(sizeof(char) * (file_size + 1))) == NULL)
		return (NULL);
	i = -1;
	while (++i < file_size)
		file_copy[i] = file[i];
	free(file);
	if ((file = malloc(sizeof(char) * (file_size + buf_size + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < file_size)
	{
		file[i] = file_copy[i];
		i++;
	}
	free(file_copy);
	while (i < file_size + buf_size)
	{
		file[i] = buf[i - file_size];
		i++;
	}
	return (file);
}

void	rm_space(char *file)
{
	int		i;

	i = 0;
	while (file[i] != '\0')
	{
		if (file[i] == ' ' && (file[i + 1] == ' ' ||
					file[i + 1] == ':' || file[i - 1] == ':'))
		{
			while (file[i] != '\0')
			{
				file[i] = file[i + 1];
				i++;
			}
			i = 0;
		}
		else
			i++;
	}
}

char	**parse(char *link, int *sizedict)
{
	int		fd;
	int		file_size;
	char	*file;
	char	**dict;

	fd = open(link, O_RDONLY);
	file = NULL;
	file_size = read_file(fd, &file);
	if (file_size == -1)
	{
		write(2, "Dict Error\n", sizeof("Dict Error\n"));
		return (0);
	}
	file[file_size] = '\0';
	rm_space(file);
	*sizedict = ft_dictlen(file, "\n");
	dict = ft_split(file, "\n");
	return (dict);
}
