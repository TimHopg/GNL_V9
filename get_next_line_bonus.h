/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thopgood <thopgood@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:40:10 by thopgood          #+#    #+#             */
/*   Updated: 2024/05/10 23:58:58 by thopgood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# ifndef MAX_FD
#  define MAX_FD 512
# endif

char	*get_next_line(int fd);
void	*ft_dealloc(char **ptr);
size_t	ft_strlen(const char *s);
char	*ft_strchr_l(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin_l(char const *s1, char const *s2);

#endif
