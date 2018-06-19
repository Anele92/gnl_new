/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:30:34 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/19 16:08:40 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main()
{
	int		fd;
	char	**line;

	fd = open("sample.txt", O_RDONLY);
	while (get_next_line(fd, line))
	{
		printf("%s\n", *line);
		ft_strdel(line);
	}
	sleep(60);
	return (0);
}
