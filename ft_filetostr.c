/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 13:20:26 by cuzureau          #+#    #+#             */
/*   Updated: 2017/01/02 13:41:26 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUF_SIZE 10

char	*ft_filetostr(char *av)
{
	ft_putstr("ft_filetotab\n");
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*str;

	fd = open(av, O_RDONLY);
	str = ft_strnew(BUF_SIZE);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		str = ft_strlcat_r(str, buf);
	}
	buf[ret] = '\0';
	return (str);
}
