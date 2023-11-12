/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:51:59 by legrandc          #+#    #+#             */
/*   Updated: 2023/11/12 01:42:22 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# define FD 512

typedef struct s_string
{
	char	*content;
	size_t	len;
	size_t	max_size;
	size_t	default_size;
}			t_string;

/* FUNCTIONS */
char		*get_next_line(int fd);

#endif
