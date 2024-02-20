/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:57:08 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/13 18:28:12 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(float const xVal, float const yVal);
        Point(const Point &other);
        ~Point();

        Point &operator=(const Point &other);

        Fixed getX() const;
        Fixed getY() const;

    private:
        Fixed const x;
        Fixed const y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif