#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BCI");
	int x,y,tx,ty;
	printf("Enter coordinates\n");
	scanf("%d%d",&x,&y);
	putpixel(x,y,7);
	printf("Enter transition coordinates\n");
	scanf("%d%d",&tx,&ty);
	x=x+tx;
	y=y+ty;
	putpixel(x,y,7);
	getch();

}
