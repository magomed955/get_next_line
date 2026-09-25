/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:13:03 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/17 13:34:55 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(char *buffer)
{
	int	ct;

	ct = 0;
	if (ct < BUFFER_SIZE && buffer[ct] == '\n')
	{
		buffer[ct] = 0;
		return ;
	}
	while (ct < BUFFER_SIZE && buffer[ct] != '\n')
		buffer[ct++] = 0;
	if (ct < BUFFER_SIZE && buffer[ct] == '\n')
		buffer[ct] = 0;
}

void	*ft_free(char *str)
{
	if (str != NULL)
		free(str);
	return (NULL);
}

int	ft_is_filled(char *buf)
{
	int	ct;

	ct = 0;
	while (ct < BUFFER_SIZE)
	{
		if (buf[ct] != 0)
			return (1);
		ct++;
	}
	return (0);
}

int	ft_is_finished(char *s, int size_str, int len_read)
{
	int	ct;

	ct = size_str - len_read;
	if (ct < 0)
		ct = 0;
	while (ct < size_str)
	{
		if (s[ct] == '\n')
			return (1);
		ct++;
	}
	return (0);
}

void	ft_strncpy(char *dst, char *src, int n)
{
	int	ct;

	ct = 0;
	if (n >= 0)
	{
		while (ct < n)
		{
			(dst)[ct] = src[ct];
			ct++;
		}
		return ;
	}
	ct--;
	while (src[++ct])
		(dst)[ct] = src[ct];
}
