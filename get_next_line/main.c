/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:16:18 by tdutel            #+#    #+#             */
/*   Updated: 2022/12/05 10:50:05 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i;
	char	*s;

	i = 0;
	fd = open("asciiart.txt", O_RDONLY);
	s = get_next_line(fd);
	while (s)
	{
		ft_printf("%s", s);
		free(s);
	s = get_next_line(fd);
	}
	ft_printf("%s", s);
	return (0);
}
