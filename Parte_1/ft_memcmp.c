/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 01:31:46 by aballest          #+#    #+#             */
/*   Updated: 2019/11/24 01:31:47 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && aux_s1[i] == aux_s2[i])
		i++;
	if (n == i)
		return (0);
	if (aux_s1[i] != aux_s2[i])
		return (aux_s1[i] - aux_s2[i]);
	else
		return (0);
}
