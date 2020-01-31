/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:33:15 by wbertoni          #+#    #+#             */
/*   Updated: 2020/01/30 15:37:31 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if ((char)needle[j] == '\0')
		return ((char *)haystack);
	while (len && (char)haystack[i])
	{
		j = 0;
		if ((char)haystack[i] == (char)needle[j])
		{
			ptr = &((char *)haystack)[i];
			while ((char)needle[j] == (char)haystack[i + j] && len-- && \
					(char)needle[j])
				j++;
			if ((char)needle[j] == '\0')
				return (ptr);
		}
		i++;
		len--;
	}
	return (NULL);
}
