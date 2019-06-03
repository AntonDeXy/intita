#include<stdio.h>

main()
{
	FILE *fp,*fp1,*fp2;
	char num[20]={};
	float sumFloat = 0,tempNum;
	int n,i,point, j,sumInt = 0;
	
	fp=fopen("input.txt","r");
	fp1=fopen("int.txt","w");
	fp2=fopen("float.txt","w");
	while(1){
		point=0;		
		n=fscanf(fp,"%s",num);
		//printf("%s\n",num);
		if(n==-1) break;
		i=0;
		while(num[i]!=0){
			if(i==0)
				if(num[i]=='+' || num[i]=='-'){
					i++;
					continue;
				}
			if(num[i]=='.') point=1; 
			else if(num[i]<'0' || num[i]>'9') break;
			i++;
		}
		
		
		if(num[i]==0){
			if(point==1){
				fprintf(fp2,"%s ",num);
				sscanf(num,"%f",&tempNum);
				sumFloat=sumFloat+tempNum;
			}
			else {
				fprintf(fp1,"%s ",num);
				sscanf(num,"%f",&tempNum);
				sumInt=sumInt+tempNum;
			}
		}
	}
		printf("%i", sumInt);
		
//		sumInt=0;
	
		fprintf(fp2,"\nSum = %g", sumFloat);
		fprintf(fp1,"\nSum = %i", sumInt);
	
		fclose(fp);
		fclose(fp1);
		fclose(fp2);
}
