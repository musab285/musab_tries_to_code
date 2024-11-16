// 2. Define a structure to represent a point in 2D space with x and y coordinates. Implement
//functions to calculate the distance between two points and to check if a point lies within
//a specific rectangular boundary.

#include<stdio.h>
#include<math.h>

struct point{
	int x, y;
};

float distance(int x1,int y1,int x2,int y2){
	float length = sqrt(pow((x2-x1), 2) + pow((y2-y1),2));
	return length;
}

void boundary(int x, int y){
	if(x>10 && x<20 && y>10 && y<15){
		printf("Lies within the boundary\n");
	}else{
		printf("Doesn't Lie within the boundary\n");
	}
}

int main(){
	struct point A = {7,4};
	struct point B = {13,11};
	
	printf("Distance bw A and B: %.2f\n", distance(A.x, A.y, B.x, B.y));
	printf("Point A "); boundary(A.x, A.y);
	printf("Point B "); boundary(B.x, B.y);
}