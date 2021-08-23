#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "diameter.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Point p1,p2;
	Line l1;
	Circle circ;
int x1,x2,y1,y2;
int i;
printf(" ENTER THE CENTER \n");
scanf("%d %d",&x1,&y1);
printf(" ENTER THE OTHER POINT \n");
scanf("%d %d",&x2,&y2);

    p1 = createPoint(x1,y1);
    p2 = createPoint(x2,y2);
    l1 = createLine(p1,p2);
	distance(l1);
	displayDistance(l1);
	displayDiameter(l1);

	return 0;
}


