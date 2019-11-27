/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:04:06 by aballest          #+#    #+#             */
/*   Updated: 2019/11/22 19:04:43 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	a;
	char	*f_str;

	if (s && f)
	{
		a = 0;
		if (!(f_str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
			return (0);
		while (s[a])
		{
			f_str[a] = f(a, s[a]);
			a++;
		}
		f_str[a] = '\0';
		return (f_str);
	}
	return (0);
}
