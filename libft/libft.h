/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 18:41:03 by mienache          #+#    #+#             */
/*   Updated: 2018/01/06 20:02:49 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t		ft_strlen(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *s, int c);
void		ft_memdel(void **ap);
char		*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
