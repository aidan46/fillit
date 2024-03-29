/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: asulliva <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 12:01:39 by asulliva      #+#    #+#                 */
/*   Updated: 2019/01/10 12:01:41 by asulliva      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
	|| (c >= '0' && c <= '9')))
		return (0);
	else
		return (1);
}
