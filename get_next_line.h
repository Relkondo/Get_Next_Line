/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:18:45 by scoron            #+#    #+#             */
/*   Updated: 2018/12/05 20:56:34 by scoron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFF_SIZE 42

typedef	struct		s_chain
{
	struct s_chain	*next;
	struct s_chain	*previous;
	int				fd;
	char			*res;
}					t_chain;

int					get_next_line(const int fd, char **line);

#endif
