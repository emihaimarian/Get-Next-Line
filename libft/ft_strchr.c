/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 19:53:30 by mienache          #+#    #+#             */
/*   Updated: 2018/01/06 19:58:44 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	locate;

	locate = c;
	ptr = (char*)s;
	while (*ptr)
	{
		if (*ptr == locate)
			return (ptr);
		ptr++;
	}
	if (*ptr == locate)
		return (ptr);
	else
		return (NULL);
}
