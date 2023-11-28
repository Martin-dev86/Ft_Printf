/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:00:54 by cagarci2          #+#    #+#             */
/*   Updated: 2023/11/28 11:23:44 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/printf.h"
#include "../library/libft.h"

int	print_format(char simbol, va_list list)
{
	int	count;

	count = 0;
	if (simbol == 'c')
		count += ft_putchar (va_arg(ap, int));
	else if (simbol == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (simbol == 'p')
		count += ft_putvoid(va_arg(ap, *void));
	else if (simbol == 'd')
		count += ft_putdigit(va_arg(ap, int), 10);
	else if (simbol == 'i')
		count += ft_putinteger(va_arg(ap, int), 10);
	else if (simbol == 'u')
		count += ft_putdigit(va_arg(ap, unsigned int), 10);
	else if (simbol == 'x')
		count += ft_puthex_lower(va_arg(ap, unsigned int), 16);
	else if (simbol == 'X')
		count += ft_puthex_upper(va_arg(ap, unsigned int), 16);
	else if (simbol == '%')
		count += ft_putspecial(va_arg(ap, unsigned int));
	else
		write(1, &simbol, 1);
	return (count);
}
