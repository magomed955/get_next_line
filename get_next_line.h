/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:13:26 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/17 14:58:43 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_append(char **dst, char *buffer, int len_read, int *size_str);
void	ft_bzero(char *buffer);
void	*ft_free(char *str);
int		ft_is_filled(char *buf);
int		ft_is_finished(char *s, int size_str, int len_read);
int		ft_op_buffer(char *buf);
int		ft_read(int fd, char *buf);
void	ft_strncpy(char *dst, char *src, int n);
char	*get_next_line(int fd);

#endif