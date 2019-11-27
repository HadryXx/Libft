/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:21:32 by aballest          #+#    #+#             */
/*   Updated: 2019/11/22 16:19:42 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	a;
	unsigned char	*tmp;
	unsigned char	*tmp2;

	a = 0;
	tmp = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (tmp[a] && tmp[a] && tmp[a] == tmp2[a])
		a++;
	if (tmp[a] != tmp2[a])
		return (tmp[a] - tmp2[a]);
	else
		return (0);
}
