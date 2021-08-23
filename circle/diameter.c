#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "diameter.h"

Point createPoint(int x, int y){
	Point p;
	p.x1 = x;
	p.y1 = y;
	return p;	
}
Line createLine(Point p1, Point p2){
	Line l1;
    l1.cen = p1;
    l1.sec = p2;
	return l1;	
}
void displayPoint(Point p){
	printf("(%d,%d)",p.x1,p.y1);	
}
float distance(Line l1){
    int a, b;
    float c;
	a = pow(l1.sec.x1 - l1.cen.x1,2);
	b = pow(l1.sec.y1 - l1.cen.y1,2);
	c = (a + b);
	l1.dis = sqrt(c);
  
return l1.dis;
}
void displayLine(Line l1){
	printf("[");
	displayPoint(l1.cen);
	displayPoint(l1.sec);
	printf("]");
}
void displayDistance(Line l1){
	printf(" DISTANCE BETWEEN: %.2f\n", distance(l1));
}
void displayDiameter(Line l1){
	printf(" DIAMETER: %.2f\n", distance(l1));
}

