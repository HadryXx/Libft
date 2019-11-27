/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:12:20 by aballest          #+#    #+#             */
/*   Updated: 2019/11/22 19:04:37 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	x;
	char			*newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	x = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if ((newstr = (char*)malloc(sizeof(char) * (x + 1))) == NULL)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		newstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (s2[b])
	{
		newstr[a] = s2[b];
		a++;
		b++;
	}
	newstr[a] = '\0';
	return (newstr);
}
