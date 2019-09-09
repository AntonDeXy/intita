#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
//	float ; 
	int i=0,kil=0,n,plus=0,minus=0;
	char numbers[50], number[10];
	FILE*fp;
	fp=fopen("numbers.dat","r");
	while(1){
		n=fscanf(fp,"%c",&numbers[i]);
		if (n == -1)
		{
			break;
		}
		i++;
	}
		fclose(fp);
		printf("%i numbers were read\n",i);
		kil=i;
		for(i=0;i<kil;i++)
		{
			if (numbers[i]>0)
			{
				plus++;
			}
			else if (numbers[i]<0){
				minus++;
			}
			if(numbers[i]/1 != numbers[i]){
				printf("%i not int", numbers[i]);
			}
		}
		fp=fopen("output.dat","w");
		for(i=0;i<kil;i++)
		{
			fprintf(fp,"%i ",numbers[i]);
		}
		fprintf(fp,"\nplus - %i minus - %i",plus,minus);
		fclose(fp);
		printf("complete");
		
}
