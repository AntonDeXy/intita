#include<stdio.h>

main()
{
	FILE *fp,*fp1,*fp2;
	char num[20]={};
	float sumFloat = 0,tempNum, floatToInt[20], sumFloatToInt=0;
	int n,i, m=0,p=0,point, j,sumInt = 0;
	
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
				sscanf(num,"%f ",&tempNum);
//				printf("\n---------- %.0f -------\n",tempNum);
				while(m<20){
					floatToInt[m] = tempNum;
					printf("%f\n ",tempNum);
					m++;
					break;
				}
//				printf("%f ",floatToInt)
				sumFloat=sumFloat+tempNum;
//				printf("%i ",floatToInt);
			}
			else {
				fprintf(fp1,"%s ",num);
				sscanf(num,"%f",&tempNum);
				sumInt=sumInt+tempNum;
			}
		}
		
	}
		fprintf(fp2,"\nSum = %g", sumFloat);
		fprintf(fp2,"\nCili chysla:  ");
		fprintf(fp1,"\nSum = %i", sumInt);
		for(p=0;p<20;p++){
			fprintf(fp2,"%.0f ",floatToInt[p]);
			sumFloatToInt=sumFloatToInt+floatToInt[p];
			if(floatToInt[p] == 0.00000){
				break;
			}
		}
		fprintf(fp2,"sum floats to int = %.0f ",sumFloatToInt);
		fclose(fp);
		fclose(fp1);
		fclose(fp2);
}
