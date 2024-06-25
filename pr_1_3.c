#include<stdio.h>
/*Q.3 Triangle Angle Finder
Write a program to find the third angle of a right triangle when two other angles are given.
*/
main()
{
	int angle1,angle2,angle3;
	
	printf("enter the first angle = ");
	scanf("%d",&angle1);
	printf("enter the second angle = ");
	scanf("%d",&angle2);
	
	angle3=180-(angle1+angle2);
	
	printf("the third angle is= %d",angle3);
}
