#include <iostream>
#include <cmath>

#include "point.h"
#include "point.cpp"
#include "circle.h"

Circle::Circle(const Point& acenter, float aradius):center(acenter),radius(aradius){

}

Circle::Circle():center(Point {0, 0}),radius(1.0){

}

Point& Circle::getCenter() const{
    return (Point&)center;
}

float Circle::getRadius() const{

    return radius;
}

void Circle::setCenter(const Point& acenter){
    center = acenter;
}

void Circle::setRadius(float aradius){

    if (aradius <= 0)
        radius = 0;
    else
        radius = aradius;
}

float Circle::getArea() const{
    return M_PI * pow(radius, 2);
}


float Circle::getDistance(const Point& p) const{

    float distance = sqrt(pow(cener.x - p.x, 2) + pow(center.y - p.y, 2));
    return distance - radius;
}

bool Circle::isColliding(const Circle& c) const{

    float distance = sqrt(pow(cener.x - c.center.x, 2) + pow(center.y - c.center.y, 2))
    float sumradius = c.radius + radius;

    if (distance - sumradius > 0)
        return true;
    else
        return false;
}

void Circle::move(const Point& p){

    center += p; 
}