/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachera <mvachera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:57:03 by mvachera          #+#    #+#             */
/*   Updated: 2024/01/13 18:28:32 by mvachera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0.0f), y(0.0f) {}

Point::Point(float xVal, float yVal) : x(xVal), y(yVal) {}

Point::Point(const Point& other) : x(other.getX()), y(other.getY()) {}

Point::~Point() {}

Point& Point::operator=(const Point& other)
{
    return (*this);
}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}
