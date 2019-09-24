/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: william <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:40:25 by william           #+#    #+#             */
/*   Updated: 2019/09/24 16:33:10 by william          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int	main(int argc, char const **argv)
{
	int	fd, fd2, i, status;
	char	*line;

	i = 1;
	fd = open(argv[1], O_RDONLY);
	while ((status = get_next_line(fd, &line)) == 1)
	{
		printf("-%d  %s\n", i++, line);
		free(line);
	}
	printf("\n\n");
	i = 1;
	fd2 = open(argv[2], O_RDONLY);
	while ((status = get_next_line(fd2, &line)) == 1)
	{
		printf("-%d  %s\n", i++, line);
		free(line);
	}
	return (argc);
}
