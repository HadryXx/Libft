/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 01:30:42 by aballest          #+#    #+#             */
/*   Updated: 2019/11/24 01:30:43 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = -1;
	p = (char*)malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (++i < count * size)
	{
		p[i] = '\0';
	}
	return (p);
}
