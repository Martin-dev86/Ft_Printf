/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:59 by cagarci2          #+#    #+#             */
/*   Updated: 2023/11/29 12:58:40 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/printf.h"

int	ft_putdigit(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		num == 147483648;
	}
	if (num < 0)
	{
		count += ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		count += ft_putdigit(num / 10);
		count += ft_putdigit(num % 10);
	}
	else
		count += ft_putchar(num + '0');
	return (count);
}
