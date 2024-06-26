/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:05:50 by cagarci2          #+#    #+#             */
/*   Updated: 2023/11/29 12:58:59 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_putchar((int)*str);
		str++;
		count++;
	}
	return (count);
}
