/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:56:56 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/13 18:15:47 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	res0;
	Fixed	res1;
	Fixed	res2;

	res0 = ( a.getX() - point.getX() ) * ( b.getY() - point.getY() ) \
		- ( a.getY() - point.getY()) * ( b.getX() - point.getX() );
	res1 = ( b.getX() - point.getX() ) * ( c.getY() - point.getY() ) \
		- ( b.getY() - point.getY()) * ( c.getX() - point.getX() );
	res2 = ( c.getX() - point.getX() ) * ( a.getY() - point.getY() ) \
		- ( c.getY() - point.getY()) * ( a.getX() - point.getX() );

	if ( ( res0 < 0 && res1 < 0 && res2 < 0 ) \
		|| ( res0 > 0 && res1 > 0 && res2 > 0 ) )
		return ( true );
	return ( false );
}
