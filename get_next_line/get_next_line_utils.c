/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdutel <tdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:11:49 by tdutel            #+#    #+#             */
/*   Updated: 2022/12/02 16:41:09 by tdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free_process(char *to_free, char *to_return)
{
	if (to_free)
		free(to_free);
	return (to_return);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	new = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (ft_free_process(s1, NULL));
	if (!s1)
		return (ft_free_process(new, ft_strdup(s2)));
	if (!s2)
		return (s1);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (ft_free_process(s1, new));
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdupcpy(char *src, size_t destsize)
{
	char		*new;
	size_t		i;

	if (destsize == 0)
		return (NULL);
	new = malloc(sizeof(char) * (destsize + 1));
	if (!new)
		return (ft_free_process(src, NULL));
	i = 0;
	while (src[i] && i < destsize)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (ft_free_process(src, new));
}

char	*ft_strdup(char *src)
{
	char		*new;
	size_t		i;
	size_t		size;

	size = 0;
	while (src[size])
		size++;
	if (!size)
		return (NULL);
	new = malloc(sizeof(char) * size + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
