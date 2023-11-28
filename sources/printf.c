/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:34:39 by cagarci2          #+#    #+#             */
/*   Updated: 2023/11/28 10:59:42 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/printf.h"
#include "../library/libft.h"

int	printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
	}
	va_end(ap);
	return (count);
}