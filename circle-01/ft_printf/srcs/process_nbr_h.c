/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_nbr_h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:17:11 by jseo              #+#    #+#             */
/*   Updated: 2021/03/19 15:39:14 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	process_nbr_h(t_form *f, va_list ap)
{
	t_bool	ret;

	ret = FL;
	if (f->t == 4 || f->t == 5)
		ret = prnt_dec_signed(f, (short)(va_arg(ap, int)), TR);
	else if (f->t == 6)
		ret = prnt_dec_unsigned(f, (unsigned short)(va_arg(ap, int)), FL);
	else if (f->t == 7)
		ret = prnt_oct(f, (unsigned short)(va_arg(ap, int)));
	else if (f->t == 8)
		ret = prnt_hex(f, (unsigned short)(va_arg(ap, int)), FL, FL);
	else if (f->t == 9)
		ret = prnt_hex(f, (unsigned short)(va_arg(ap, int)), TR, FL);
	return (ret);
}
