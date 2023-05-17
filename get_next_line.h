/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleblais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 08:49:23 by cleblais          #+#    #+#             */
/*   Updated: 2022/11/24 16:39:28 by cleblais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

size_t	len_c(char *s, char c);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, char *src, size_t dstsize);
char	*ft_strrchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*save_updated(char *old);
char	*create_line(char *saved);
char	*fill_save(int fd, char *saved, int nb_char);
char	*get_next_line(int fd);

#endif
