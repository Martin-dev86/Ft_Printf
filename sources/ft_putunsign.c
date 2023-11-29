/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:24:15 by cagarci2          #+#    #+#             */
/*   Updated: 2023/11/29 13:27:28 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/printf.h"

int	ft_putunsign(unsigned int n)
{
	int	num;
	int	count;

	count = 0;
	num = (unsigned int)n;
	count += ft_putdigit(num);
}
