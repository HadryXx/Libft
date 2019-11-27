/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:19:40 by aballest          #+#    #+#             */
/*   Updated: 2019/11/22 19:04:57 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*newstr;

	if (s == NULL)
		return (NULL);
	if ((newstr = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	a = 0;
	if (!(start > ft_strlen((char *)s)))
	{
		while (a < len && s[start + a])
		{
			newstr[a] = s[start + a];
			a++;
		}
	}
	newstr[a] = '\0';
	return (newstr);
}
