/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:25:12 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/29 22:28:48 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* To test: cc -Wall -Wextra -Werror -I includes */
/* srcs/main.c srcs/get_next_line.c */
/* srcs/utils/utils.c */

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("Test.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		free(str);
		str = get_next_line(fd);
		if (!str)
			return (close(fd), 1);
	}
	close(fd);
	return (0);
}
