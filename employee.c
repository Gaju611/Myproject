#include<stdio.h>

	struct employee
	{
		int empno;
		char empname[20];
		char depart_name[20];
		float salary;
		char ph_no[10];
	};
	int main()
	{
		void getdata(struct employee*);
		void display(struct employee*);
		struct employee emp[20];
		printf("Enter data for employees");
		getdata(&emp[0]);
		printf("\nlist of employees\n ");
		display(&emp[0]); 
	}
	void getdata(struct employee *x)
	{
		int a;
		for(a=0;a<20;a++)
		{
			printf("\nempno:");
			scanf("%d",&x->empno);
			printf("\nempname:");
			scanf("%s",&x->empname);
			printf("\ndepart_name:");
			scanf("%s",&x->depart_name);
			printf("\nsalary:");
			scanf("%f",&x->salary);
			printf("\nphone number:");
			scanf("%s",&x->ph_no);
			x++;
		}
	}
	void display(struct employee *x)
	{
		int a;
		printf("empno\tempname\tdepart_name\tsalary\t\tph_no\n");
		for(a=0;a<20;a++)
		{
			printf("%d",x->empno);
			printf("\t%s",x->empname);
			printf("\t%s",x->depart_name);
			printf("\t\t%f",x->salary);
			printf("\t%s\n",x->ph_no);
			x++;
		}
	}
