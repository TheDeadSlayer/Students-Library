//Database Program
//Mahmoud Saeed Osman
//Class 3E
//Reg:18102867

#include<stdio.h>
#include<string.h>


struct n         // Names struck 
{ 
	char f[20];
	char m[20];
	char l[20];
 	
};


typedef struct information  // Student's info Struck
{	
	struct n name;
	float GPA;
	int Reg;

}info;

const char fname[]="info.txt"; //File name


void Switch(int min,info x[],int i) // Function to switch the contents of the array
{
	int tempR;               // Temp for Registration number
	float tempG;             // Temp for GPA
	char a[20],b[20],c[20]; // Temp for Names 
	

	if(min!=i)
		{
			strcpy(a,x[i].name.f);
			strcpy(b,x[i].name.m);
			strcpy(c,x[i].name.l);
			tempG=x[i].GPA;
			tempR=x[i].Reg;
			
			strcpy(x[i].name.f,x[min].name.f);
			strcpy(x[i].name.m,x[min].name.m);
			strcpy(x[i].name.l,x[min].name.l);
			x[i].GPA=x[min].GPA;
			x[i].Reg=x[min].Reg;
				
			strcpy(x[min].name.f,a);
			strcpy(x[min].name.m,b);
			strcpy(x[min].name.l,c);
			x[min].GPA=tempG;
			x[min].Reg=tempR;
		}	
}

void Search (info x[],int Max,int *n)  // Function to Search array of strucks 
									// According to user preference then prints the Fields 
								   // Linear Search 
{	
		char Target[20]; // User input for the names

		int a,d,i,j; //Counters
	
		int found=0;
		
		float target; // User input for the GPA
		
		int target1; // User input for the Registration Number
		 
		int LengthF,LengthM,LengthL,Total,t;
	
	printf("\nSearch for?\n(1)First name\n(2)Middle name\n(3)Last name\n(4)GPA\n(5)Registration Number\n\n\tWrite number: ");
	
	while(1)
	{
		scanf("%d",&t);

	if(t==1)   // Searches First names
	{
		printf("\nPlease enter name: ");
		getchar();
		gets(Target);

		for(a=0;a<*n;a++)
		{
			if(strcmp(Target,x[a].name.f)==0)
				found++;
				 
		}		if(found>0)
				{
				
						for(i=0;i<=Max+28;i++)
						{
							printf("_");
						}
						printf("\n");
						printf("|Name");
	
						for(i=0;i<=Max-2;i++)
						{
							printf(" ");
						}
						printf("|GPA |Registration no.  |");
	
						printf("\n");
						for(j=0;j<=Max+28;j++)
						{
							printf("-");
						}
				}
					
					for(d=0;d<*n;d++)
					{
						if(strcmp(Target,x[d].name.f)==0)
						{
						
							LengthF=strlen(x[d].name.f);
							LengthM=strlen(x[d].name.m);
							LengthL=strlen(x[d].name.l);
		
							Total=LengthF+LengthM+LengthL;
		
							printf("\n");
							printf("|%s",x[d].name.f);
							printf(" ");
							printf("%s",x[d].name.m);
							printf(" ");
							printf("%s",x[d].name.l);
		
							for(j=0;j<=Max-Total;j++)
							{
								printf(" ");
							}
							printf("|");

							printf("%1.2f",x[d].GPA);
							printf("|");
							printf("%8d",x[d].Reg);
							printf("          |");
		
							printf("\n");
							for(j=0;j<=Max+28;j++)
							{
								printf("-");
							}
						}
					}
				
						
		if(found==0)
		{
			printf("\nNot found");
		}
		
		break;	
	}
	else if(t==2)  // Searches Middle names
	{
		printf("\nPlease enter name: ");
		getchar();
		gets(Target);

		for(a=0;a<*n;a++)
		{
			if(strcmp(Target,x[a].name.m)==0)
			{	
				found++;
			}
				 
		}		if(found>0)
				{
				
					int i,j,LengthF,LengthM,LengthL,Total;
	
						for(i=0;i<=Max+28;i++)
						{
							printf("_");
						}
						printf("\n");
						printf("|Name");
	
						for(i=0;i<=Max-2;i++)
						{
							printf(" ");
						}
						printf("|GPA |Registration no.  |");
	
						printf("\n");
						for(j=0;j<=Max+28;j++)
						{
							printf("-");
						}
				}
					
					for(d=0;d<*n;d++)
					{
						if(strcmp(Target,x[d].name.m)==0)
						{
						
							LengthF=strlen(x[d].name.f);
							LengthM=strlen(x[d].name.m);
							LengthL=strlen(x[d].name.l);
		
							Total=LengthF+LengthM+LengthL;
		
							printf("\n");
							printf("|%s",x[d].name.f);
							printf(" ");
							printf("%s",x[d].name.m);
							printf(" ");
							printf("%s",x[d].name.l);
		
							for(j=0;j<=Max-Total;j++)
							{
								printf(" ");
							}
							printf("|");

							printf("%1.2f",x[d].GPA);
							printf("|");
							printf("%8d",x[d].Reg);
							printf("          |");
		
							printf("\n");
							for(j=0;j<=Max+28;j++)
							{
								printf("-");
							}
						}
					}
				
						
		if(found==0)
		{
			printf("\nNot found");
		}
				
		break;		
	}
	else if(t==3)  // Searches Last names
	{
		printf("\nPlease enter name: ");
		getchar();
		gets(Target);
		
		for(a=0;a<*n;a++)
		{
			if(strcmp(Target,x[a].name.l)==0)
			{	
				found++;
			}
				 
		}		if(found>0)
				{
				
					int i,j,LengthF,LengthM,LengthL,Total;
	
						for(i=0;i<=Max+28;i++)
						{
							printf("_");
						}
						printf("\n");
						printf("|Name");
	
						for(i=0;i<=Max-2;i++)
						{
							printf(" ");
						}
						printf("|GPA |Registration no.  |");
	
						printf("\n");
						for(j=0;j<=Max+28;j++)
						{
							printf("-");
						}
				}
					
					for(d=0;d<*n;d++)
					{
						if(strcmp(Target,x[d].name.l)==0)
						{
						
							LengthF=strlen(x[d].name.f);
							LengthM=strlen(x[d].name.m);
							LengthL=strlen(x[d].name.l);
		
							Total=LengthF+LengthM+LengthL;
		
							printf("\n");
							printf("|%s",x[d].name.f);
							printf(" ");
							printf("%s",x[d].name.m);
							printf(" ");
							printf("%s",x[d].name.l);
		
							for(j=0;j<=Max-Total;j++)
							{
								printf(" ");
							}
							printf("|");

							printf("%1.2f",x[d].GPA);
							printf("|");
							printf("%8d",x[d].Reg);
							printf("          |");
		
							printf("\n");
							for(j=0;j<=Max+28;j++)
							{
								printf("-");
							}
						}
					}
				
						
		if(found==0)
		{
			printf("\nNot found");
		}
		
		break;		
	}
	else if(t==4)  // Searches GPA
	{
		printf("\nPlease enter GPA: ");
		scanf("%f",&target);

		for(a=0;a<*n;a++)
		{
			if(target==x[a].GPA)
			{	
				found++;
			}
				 
		}		if(found>0)
				{
				
					int i,j,LengthF,LengthM,LengthL,Total;
	
						for(i=0;i<=Max+28;i++)
						{
							printf("_");
						}
						printf("\n");
						printf("|Name");
	
						for(i=0;i<=Max-2;i++)
						{
							printf(" ");
						}
						printf("|GPA |Registration no.  |");
	
						printf("\n");
						for(j=0;j<=Max+28;j++)
						{
							printf("-");
						}
				}
					
					for(d=0;d<*n;d++)
					{
						if(target==x[d].GPA)
						{
						
							LengthF=strlen(x[d].name.f);
							LengthM=strlen(x[d].name.m);
							LengthL=strlen(x[d].name.l);
		
							Total=LengthF+LengthM+LengthL;
		
							printf("\n");
							printf("|%s",x[d].name.f);
							printf(" ");
							printf("%s",x[d].name.m);
							printf(" ");
							printf("%s",x[d].name.l);
		
							for(j=0;j<=Max-Total;j++)
							{
								printf(" ");
							}
							printf("|");

							printf("%1.2f",x[d].GPA);
							printf("|");
							printf("%8d",x[d].Reg);
							printf("          |");
		
							printf("\n");
							for(j=0;j<=Max+28;j++)
							{
								printf("-");
							}
						}
					}
				
						
		if(found==0)
		{
			printf("\nNot found");
		}
		getchar();
		
		break;	
	}
	else if(t==5)  // Searches Registration Numbers
	{
		printf("\nPlease enter Registration number: ");
		scanf("%d",&target1);

		for(a=0;a<*n;a++)
		{
			if(target1==x[a].Reg)
			{	
				found++;
			}
				 
		}		if(found>0)
				{
				
					int i,j,LengthF,LengthM,LengthL,Total;
	
						for(i=0;i<=Max+28;i++)
						{
							printf("_");
						}
						printf("\n");
						printf("|Name");
	
						for(i=0;i<=Max-2;i++)
						{
							printf(" ");
						}
						printf("|GPA |Registration no.  |");
	
						printf("\n");
						for(j=0;j<=Max+28;j++)
						{
							printf("-");
						}
				}
					
					for(d=0;d<*n;d++)
					{
						if(target1==x[d].Reg)
						{
						
							LengthF=strlen(x[d].name.f);
							LengthM=strlen(x[d].name.m);
							LengthL=strlen(x[d].name.l);
		
							Total=LengthF+LengthM+LengthL;
		
							printf("\n");
							printf("|%s",x[d].name.f);
							printf(" ");
							printf("%s",x[d].name.m);
							printf(" ");
							printf("%s",x[d].name.l);
		
							for(j=0;j<=Max-Total;j++)
							{
								printf(" ");
							}
							printf("|");
							
							printf("%1.2f",x[d].GPA);
							printf("|");
							printf("%8d",x[d].Reg);
							printf("          |");
		
							printf("\n");
							for(j=0;j<=Max+28;j++)
							{
								printf("-");
							}
						}
					}
				
						
		if(found==0)
		{
			printf("\nNot found");
		}
		getchar();
		
		break;	
	}
	
		else
		{
			printf("\nInvalid Input");
			printf("\n\n\tWrite number:");
		}
	}
}


void Sort(info x[],int *n) // Function to sort the array of strucks 
					// According to user preference 
				   // Selection Sort 
{
	int i,j;       // Counters
	
	int T,d,min;
	
	
	printf("\nSort accoring to ?\n(1)First name\n(2)Middle name\n(3)Last name\n(4)GPA\n(5)Registration Number\n\n\tWrite number: ");
	
	while(1)
	{
	
		scanf("%d",&T);
	
	if(T==1)   // Sorts accoring to the first name
	{
		for(i=0;i<*n-1;i++)
		{
			min=i;
		
			for(j=i+1;j<*n;j++)
			{
				d=strcmp(x[min].name.f,x[j].name.f);
			
		
				if(d>0)
					min=j;
			}
		
				Switch(min,x,i);
				
		}
		
		for(i=0;i<*n;i++)
		{
			for(j=i;j<5;j++)
			{
				if(strcmp(x[i].name.f,x[i+1].name.f)==0)
				{
					if(strcmp(x[i].name.m,x[i+1].name.m)>0)
						Switch(j,x,i);
				}
			}
		}
		break;
	}
	
	else if(T==2)  // Sorts accoring to the middle name
	{
		for(i=0;i<*n-1;i++)
		{
			min=i;
		
			for(j=i+1;j<*n;j++)
			{
				d=strcmp(x[min].name.m,x[j].name.m);
			
		
				if(d>0)
					min=j;
			}
		
			Switch(min,x,i);
			
		}
		
			for(i=0;i<*n;i++)
		{
			for(j=i;j<5;j++)
			{
				if(strcmp(x[i].name.m,x[i+1].name.m)==0)
				{
					if(strcmp(x[i].name.l,x[i+1].name.l)>0)
						Switch(j,x,i);
				}
			}
		}
		break;
	}
	
	else if(T==3)  // Sorts accoring to the last name
	{
			for(i=0;i<*n-1;i++)
			{
				min=i;
		
				for(j=i+1;j<*n;j++)
				{
					d=strcmp(x[min].name.l,x[j].name.l);
			
					if(d>0)
					min=j;
				}
		
				Switch(min,x,i);
			}
			
			for(i=0;i<*n;i++)
			{
				for(j=i;j<5;j++)
				{
					if(strcmp(x[i].name.l,x[i+1].name.l)==0)
					{
						if(strcmp(x[i].name.f,x[i+1].name.f)>0)
							Switch(j,x,i);
					}
				}
			}
			break;
	}
	
	else if(T==4)  // Sorts accoring to the GPA
		{
			for(i=0;i<*n-1;i++)
			{
				min=i;
		
				for(j=i+1;j<*n;j++)
				{
					if(x[j].GPA<x[min].GPA)
						min=j;
				}
		
				Switch(min,x,i);
			}
			break;
		}
	
		else if(T==5)  // Sorts accoring to the Registration number
		{
			for(i=0;i<*n-1;i++)
			{
				min=i;
		
				for(j=i+1;j<*n;j++)
				{
					if(x[j].Reg<x[min].Reg)
						min=j;
				}
			
				Switch(min,x,i);
			
			}
			break;
		}
		
		else
		{
			printf("\nInvalid Input");
			printf("\n\n\tWrite number:");
		}
	}
		
		WriteF(x,*n);
}


int MaxLength(info x[],int n) // Function that calculates the maximum length of the full name
						// (Will be used in the print function to measure the size of the name field)
{   
	int i,LengthF,LengthM,LengthL,Total,z[n],max=0;
	
	for (i=0;i<n;i++)
	{
		LengthF=strlen(x[i].name.f);
		LengthM=strlen(x[i].name.m);
		LengthL=strlen(x[i].name.l);
		
		Total=LengthF+LengthM+LengthL;
		z[i]=Total;
	}

	max=z[0];
	
	for(i=0;i<n;i++)
	{
		if(max<z[i])
			max=z[i];
	}
	max=max+2; // Adds an extra 2 to the max for the 2 spaces added in the print function
	return max;
}


void Print(info x[],int Max,int n) // Function to print the array of stucks into a database looking table
{
	int i,j,LengthF,LengthM,LengthL,Total;
	
	if(n==0)
		printf("\nNo Contents");
	
	
	else
	{
		for(i=0;i<=Max+28;i++)
		{
			printf("_");
		}
		printf("\n");
		printf("|Name");
	
		for(i=0;i<=Max-2;i++)
			printf(" ");
				
		printf("|GPA |Registration no.  |");
	
		printf("\n");
		for(j=0;j<=Max+28;j++)
			printf("-");

		for(i=0;i<n;i++)
		{
			LengthF=strlen(x[i].name.f);
			LengthM=strlen(x[i].name.m);
			LengthL=strlen(x[i].name.l);
		
			Total=LengthF+LengthM+LengthL;
		
			printf("\n");
			printf("|%s",x[i].name.f);
			printf(" ");
			printf("%s",x[i].name.m);
			printf(" ");
			printf("%s",x[i].name.l);
		
			for(j=0;j<=Max-Total;j++)
				printf(" ");
		
			printf("|");

			printf("%1.2f",x[i].GPA);
			printf("|");
			printf("%8d",x[i].Reg);
			printf("          |");
		
			printf("\n");
			for(j=0;j<=Max+28;j++)
			printf("-");
			
		}
	}
}


void Read(info x[],int*n,int first)  //Funtion to read the contents of the array of strucks 
{
	int i,c=0,temp;
	
	
	for (i=first;i<*n;i++)
	{	
		getchar();
		printf("\nEnter the First Name of Student %d: ",i+1);
		gets(x[i].name.f);
		
		printf("Enter the Middle Name of Student %d: ",i+1);
		gets(x[i].name.m);
		
		printf("Enter the Last Name of Student %d: ",i+1);
		gets(x[i].name.l);
		
		while(1)
		{
		
			printf("Enter the GPA of Student %d: ",i+1);
			scanf("%f",&x[i].GPA);
			if(x[i].GPA>4||x[i].GPA<0)
				printf("\nInvalid Input\n");
			else
				break;
		}
		
		while (1)
		{
			printf("Enter the Registration number of Student %d: ",i+1);
			scanf("%d",&x[i].Reg);
			temp=x[i].Reg;
			c=0;
			while(temp!=0)
			{
				temp/=10;
				c++	;
			}
			
			if(c==8)
				break;
			else
				printf("\nInvalid Input\n");
		}
	}
	
	WriteF(x,*n);
	
}

void format(char a[50]) //Changes the inputed string into a certain format to use in the code
{	
	int i,j;
	
	strlwr(a);
	
	for(i=0;i<50;i++)
		if(a[i]==' ')
		{
			for(j=i;j<50;j++)
					a[j]=a[j+1];
			i--;
		}
}

void example (info x[],int *n) // Inputs a sample to the file
{
	strcpy(x[0].name.f,"Mahmoud");strcpy(x[0].name.m,"Saeed");strcpy(x[0].name.l,"Mohammed");x[0].GPA=3;x[0].Reg=18102867;
	strcpy(x[1].name.f,"Mohammed");strcpy(x[1].name.m,"Mahmoud");strcpy(x[1].name.l,"Komsany");x[1].GPA=2.5;x[1].Reg=18100765;
	strcpy(x[2].name.f,"Mahmoud");strcpy(x[2].name.m,"Ali");strcpy(x[2].name.l,"Emad");x[2].GPA=1.9;x[2].Reg=17626731;
	strcpy(x[3].name.f,"Omar");strcpy(x[3].name.m,"Mostafa");strcpy(x[3].name.l,"Elaraby");x[3].GPA=4;x[3].Reg=19087861;
	strcpy(x[4].name.f,"Walid");strcpy(x[4].name.m,"Kamal");strcpy(x[4].name.l,"Kamelo");x[4].GPA=3.7;x[4].Reg=18100627;
	
	WriteF(x,*n);
}

void ReadF(info x[],int *n) //Reads content from the file and adds it to the array of structs
{
	int i;
	
	FILE *d=fopen(fname,"r");
	fscanf(d,"%d",n);
	for(i=0;i<*n;i++)
	{
		fscanf(d,"%s%s%s%f%d",x[i].name.f,x[i].name.m,x[i].name.l,&x[i].GPA,&x[i].Reg);
	}
	
}
void WriteF(info x[],int n) //Writes content from array of structs to the file
{
	int i;
	
	FILE *d=fopen(fname,"w");
	
	fprintf(d,"%d\n",n);
	
	for(i=0;i<n;i++)
	{
		fprintf(d,"%s\n%s\n%s\n%.2f\n%d\n",x[i].name.f,x[i].name.m,x[i].name.l,x[i].GPA,x[i].Reg);
	}
	fclose(d);
}

void Append(info x[],int *n) //Adds record to the file
{
	int i,t,f;
	
	printf("\nEnter the number of records you want to add:");
	scanf("%d",&t);
	
	f=*n;
	*n+=t;
	
	Read(x,n,f);
	
	WriteF(x,*n);
	
	
}

void Remove(info x[],int *n) // Removes a record from the file
{
	int i,t;
	
	while (1)
	{
		printf("\nWhich record do you want to remove?: ");
		scanf("%d",&t);
		if(t>*n||t<=0)
			printf("Invalid input");
		else
		{

			for(i=t-1;i<*n;i++)
			{
				strcpy(x[i].name.f,x[i+1].name.f);
				strcpy(x[i].name.m,x[i+1].name.m);
				strcpy(x[i].name.l,x[i+1].name.l);
				x[i].GPA=x[i+1].GPA;
				x[i].Reg=x[i+1].Reg;
			}
			
			--*n;
			break;
		}
	
	}
		
	WriteF(x,*n);
}

void Edit(info x[]) // Edits a field in the array of structs 
{
	int i,t;
	
	printf("\nWhich record do you want to edit?\n\n\tWrite record number: ");
	scanf("%d",&i);
	printf("\nWhich Field?\n(1)First name\n(2)Middle name\n(3)Last name\n(4)GPA\n(5)Registration Number\n\n\tWrite number: ");

	
	while(1)
	{
		scanf("%d",&t);
	if(t==1)
	{	
		printf("\nEnter edited name: ");
		scanf("%s",x[i-1].name.f);
		break;
	}
	else if(t==2)
	{	
		printf("\nEnter edited name: ");
		scanf("%s",x[i-1].name.m);
		break;
	}
	else if(t==3)
	{
		printf("\nEnter edited name: ");
		scanf("%s",x[i-1].name.l);
		break;
	}
	
	else if(t==4)
	{
		printf("\nEnter edited GPA: ");
		scanf("%f",&x[i-1].GPA);
		break;
	}
	
	else if(t==5)
	{
		printf("\nEnter edited Reg.no.: ");
		scanf("%d",&x[i-1].Reg);
		break;
	}
	
		else
		{
			printf("\nInvalid Input");
			printf("\n\n\tWrite number:");
		}
	}
}

void main()
{
	info x[1000]={};
	char a[50];
	int Max,n,i,first;
	
	
	ReadF(x,&n);

	Max=MaxLength(x,n);
	printf("Hello\nThis is a program to make a data base that stores students data\nEnter 'Command' to view the list of commands");
	
	int flag=0;

	while(1)
	{
		ReadF(x,&n);
		printf("\n\nEnter>> ");
		gets(a);
		format(a);
	
		
		if(strcmp(a,"command")==0)
		{
			printf("\n  New:- Creates the file and adds a sample to it\n  Read:- Reads content and replaces it in the file\n  Display:- Views the contents in atable\n  Sort:- Sorts the contents according to preference\n  Search:- Searches for whatever you want\n  Append:- Adds records to the file\n  Edit:- Edits a field in the table\n  Remove:- Removes a reocrd form the file\n  Clear:- Clears the contents\n  Info:- My personal information\n  Quit:- Quits the program\n");
			flag=0;
		}
		
		else if(strcmp(a,"remove")==0)
		{
			Remove(x,&n);
			printf("\nRemoved record successfully!\n\n");
			getchar();
			flag=0;
			
		}
		
		else if(strcmp(a,"read")==0)
		{
			printf("\nHow many records do you want to create: ");
			scanf("%d",&n);
			first=0;
			FILE *d=fopen(fname,"w");
			fclose(d);
			Read(x,&n,first);
			getchar();
			Max=MaxLength(x,n);
			flag=0;
		}
		
		else if(strcmp(a,"new")==0)
		{	
			n=5;
			example(x,&n);
			printf("info.txt File Created\nSample In");
			flag=0;
		} 	
		
		else if(strcmp(a,"clear")==0)
		{
			FILE *d=fopen(fname,"w");
			fclose(d);
			ReadF(x,&n);
			n=0;
			printf("Cleared");
			flag=0;
		}
		
		else if(strcmp(a,"display")==0)
		{
			Max=MaxLength(x,n);
			Print(x,Max,n);
			flag=0;
		}
		
		else if(strcmp(a,"sort")==0)
		{
			if(n==0)
				printf("\nNo Contents");
					
			else
			{
				Sort(x,&n);
				printf("\nSorted successfully!\n");
				getchar();	
			}
			
			flag=0;
		}
			
		else if(strcmp(a,"append")==0)
		{
			Append(x,&n);
			getchar();
			flag=0;
		}
		
		else if(strcmp(a,"search")==0)
		{
			if(n==0)
				printf("\nNo Contents");
			else
				Search(x,Max,&n);
			
			flag=0;
		}
		
		else if(strcmp(a,"quit")==0)
		{
		 	printf("\nThanks for your time\nPlease give bonus");
		 	printf("\nGood Bye C:\n");
			break;
		}
		
		else if(strcmp(a,"info")==0)
		{
			printf("\nMahmoud Saeed\nClass 3-E\nReg:- 18102867\n\nSpecial thanks to:\n  Dr. Marwa:- For helping me increase my programming prowess\n  Omar Mostafa Elaraby:- For teaching me files and helping me code it\n  Mohammed Mahmoud Komsany:- For being retarded");
			flag=0;
		}
		
		else if(strcmp(a,"edit")==0)
		{
			Edit(x);
			printf("\nEdited Successfully!\n");
			getchar();
			WriteF(x,n);
			flag=0;
		}
		
		else
		{
		
			flag++;
				
			if(flag>0&&flag<3)
				printf("\nInvalid Input");
			
			if (flag==3)
				printf("\nYou're not taking this seriously,ha?");
			
			if (flag==4)
			{
				printf("\nFine\nGood Bye then >:C\n");
				break;
			}
		}
	}
}
