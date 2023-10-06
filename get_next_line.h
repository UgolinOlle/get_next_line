/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:04:51 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/10/06 12:55:44 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	char			*string;
	struct s_list	*next_string;
}					t_list;

char				*get_next_line(int fd);
int					ft_strlen(char *str);
void				ft_radd(int fd, t_list **buffer, int byte_readed);
void				ft_free_buffer(t_list **buffer);
void				ft_bclean(t_list **buffer);

int					ft_found_new_line(t_list *buffer);
t_list				*ft_get_last(t_list *buffer);
void				ft_badd(t_list **buffer, char *storage, int byte_readed);
void				ft_extract_line(t_list *buffer, char **line);
void				ft_create_line(char **line, t_list *buffer);

#endif
