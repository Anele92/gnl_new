/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 12:21:19 by anoroita          #+#    #+#             */
/*   Updated: 2018/06/19 17:48:59 by anoroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 16
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_new_line(char **s, char **line, int fd);
int		get_next_line(const int fd, char **line);

#endif
