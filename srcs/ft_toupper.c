/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:22:30 by averheij       #+#    #+#                */
/*   Updated: 2019/10/29 15:27:41 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}