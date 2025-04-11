/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_length_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 17:09:48 by jseo              #+#    #+#             */
/*   Updated: 2021/03/20 11:40:05 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	process_length_str(t_form *f, va_list ap)
{
	t_bool	ret;

	ret = FL;
	if (f->length == 1 && (f->t == 1 || f->t == 2))
		ret = process_str_l(f, ap);
	else
		ret = process_str(f, ap);
	return (ret);
}
