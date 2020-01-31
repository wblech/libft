/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbertoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:05:48 by wbertoni          #+#    #+#             */
/*   Updated: 2020/01/27 16:35:28 by wbertoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	c;
	int		i;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	c = count;
	i = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}
