/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 06:56:27 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/06 12:44:13 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_validtetri(char *str)
{
	ft_putstr("ft_validtetri\n");
	int		i;
	int		dot;
	int		new;
	int		hash;

	i = 0;
	dot = 0;
	new = 0;
	hash = 0;
	while (str[i])
	{
		dot = dot + (str[i] == '.' ? 1 : 0);
		hash = hash + (str[i] == '#' ? 1 : 0);
		new = new + (str[i] == '\n' ? 1 : 0);
		if (str[i + 2] && (str[i] == '\n' && str[i + 2] == '\n'))
			return (1);
		i++;
	}
	i++;
	if (i % 21 != 0)
		return (1);
	i = i / 21;
	if (dot != 12 * i || hash != 4 * i || new != (4 * i + i - 1))
		return (1);
	return (0);
}

int		ft_validform(char *s1, char *s2, char *s3, char *s4)
{
	ft_putstr("ft_validform\n");
	int		i;
	int		j;
	char	*piece[4];

	i = 0;
	j = 0;
	piece[0] = s1;
	piece[1] = s2;
	piece[2] = s3;
	piece[3] = s4;
	while (j < 4)
	{
		while (piece[i][j])
		{
			if (piece[i][j] == '#')
			{
				if (ft_validform2(i, j, piece) == 1)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_validform2(int i, int j, char **piece)
{
	ft_putstr("ft_validform2\n");
	int		valid;

	valid = 0;
	if (i == 0)
	{
		if (piece[i + 1][j] != '#' && piece[i][j + 1] != '#')
			return (1);
		valid++;
	}
	else if (i == 3)
	{
		if (piece[i - 1][j] != '#' && piece[i][j - 1] != '#')
			return (1);
		valid++;
	}
	else
	{
		if (piece[i + 1][j] != '#' && piece[i][j + 1] != '#' && \
			piece[i - 1][j] != '#' && piece[i][j - 1] != '#')
			return (1);
		valid++;
	}
	return (0);
}

int		ft_validmap(char *str)
{
	ft_putstr("ft_validmap\n");
	int		i;
	char	**map;

	i = 0;
	if (ft_validtetri(str) == 1)
	{
		ft_error(1);
		return (1);
	}
	map = ft_strsplit(str, '\n');
	while (map[i + 3])
	{
		if (ft_validform(map[i], map[i + 1], map[i + 2], map[i + 3]) == 1)
		{
			ft_error(1);
			return (1);
		}
		i = i + 4;
	}
	return (0);
}
