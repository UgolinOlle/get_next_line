/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:26:31 by ugolin-olle       #+#    #+#             */
/*   Updated: 2023/10/03 13:28:06 by ugolin-olle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("./read_error.txt", O_RDONLY);
	res = get_next_line(fd);
	while (res != 0)
	{
		printf("%s", res);
		free(res);
	}
	return (0);
}
