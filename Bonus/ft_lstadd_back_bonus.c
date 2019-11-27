/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aballest <aballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:17:20 by aballest          #+#    #+#             */
/*   Updated: 2019/11/24 01:57:13 by aballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *front;

	if (alst && new)
	{
		front = *alst;
		if (front == NULL)
			*alst = new;
		else
		{
			while (front->next)
				front = front->next;
			front->next = new;
		}
	}
}
