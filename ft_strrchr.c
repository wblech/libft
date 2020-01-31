/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:49:17 by wbertoni          #+#    #+#             */
/*   Updated: 2020/01/22 14:04:13 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lst;

	i = 0;
	lst = NULL;
	while ((char)s[i])
	{
		if ((char)s[i] == (char)c)
			lst = &((char *)s)[i];
		i++;
	}
	if ((char)c == '\0' && s[i] == '\0')
		return (&((char *)s)[i]);
	return (lst);
}
