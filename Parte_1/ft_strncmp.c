/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 01:32:50 by aballest          #+#    #+#             */
/*   Updated: 2019/11/24 01:32:51 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while (aux_s1[i] && aux_s2[i] && aux_s1[i] == aux_s2[i] && i < n)
		i++;
	if (n == i)
	{
		return (0);
	}
	if (aux_s1[i] != aux_s2[i])
		return (aux_s1[i] - aux_s2[i]);
	else
		return (0);
}
