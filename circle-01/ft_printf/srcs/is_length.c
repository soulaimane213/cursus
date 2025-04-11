/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:47:23 by jseo              #+#    #+#             */
/*   Updated: 2021/03/18 12:47:24 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_bool	is_length(int c)
{
	return (c == 'l' || c == 'h');
}
