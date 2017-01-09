/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elcarrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 15:51:29 by elcarrei          #+#    #+#             */
/*   Updated: 2017/01/09 00:53:06 by elcarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	ft_putstr("main\n");
	char	*str;
	char	**src;
	char	**dst;
	t_fill	*lst;

	if (ac != 2)
	{
		ft_error(2);
		return (1);
	}
	str = ft_filetostr(av[1]);
	if (ft_validmap(str) == 1)
		return (1);
	src = ft_strsplit(str, '\n');

	int		i;
	i = 0;
	while (src[i])
	{
		ft_putstr(src[i]);
		ft_putchar('\n');
		i++;
	}
	lst = ft_tabtolst(src);
	dst = ft_fillit(lst, ft_create_tab(lst), ft_tablen(ft_create_tab(lst)));
	ft_print(dst);
	return (0);
}
