
#include<stdio.h>
/*Q.2 Gross Salary Calculator
Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
the base salary as chosen by the user.
*/
main()
{
	float basesalary,hrap,dap,tap;
	float hra,da,ta,grosssalary;
	
	printf("enter the basesalary =");
	scanf("%f",&basesalary);
	printf("enter the hra =");
	scanf("%f",&hrap);
	printf("enter the da =");
	scanf("%f",&dap);
	printf("enter the ta =");
	scanf("%f",&tap);
	
	hra=(hrap/100)*basesalary;
	da=(dap/100)*basesalary;
	ta=(tap/100)*basesalary;
	
	grosssalary=basesalary+hra+da+ta;
	
	printf("grosssalary : rs.%.2f\n",grosssalary);
	
}
