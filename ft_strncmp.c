/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:45:41 by wbertoni          #+#    #+#             */
/*   Updated: 2020/01/27 17:18:47 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	int		i;

	i = 0;
	len = n;
	while (len--)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
		{
			if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
				return (-1);
			return (1);
		}
		i++;
	}
	return (0);
}
