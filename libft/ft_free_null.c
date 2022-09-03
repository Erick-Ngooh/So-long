/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engooh <engooh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:06:32 by lazarus           #+#    #+#             */
/*   Updated: 2022/04/01 17:13:38 by engooh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_null(void *s)
{
	if (s)
		free(s);
	s = NULL;
	return (s);
}