typedef struct{
	int x1;
	int y1;
}Point;

typedef struct{
      Point center;
      float radius;
} Circle;

typedef struct{
    Point cen;
    Point sec;
    float dis;
} Line;
Line createLine(Point p1, Point p2);
void displayLine(Line l1);
Point createPoint(int x, int y);
float distance(Line l1);
void displayDiameter(Line l1);
void displayDistance(Line l1);

	

