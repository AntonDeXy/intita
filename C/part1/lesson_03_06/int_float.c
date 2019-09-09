#include<stdio.h>

main()
{
	FILE *fp,*fp1,*fp2;
	char num[20]={};
	float sumFloat = 0,tempNum, floatToInt[20], sumFloatToInt=0, numsForSortFloats[20], numsForSortInt[20];
	int point, sumInt = 0, intsNum, temp, size=10;
	int n,i,m=0,p=0,j, k,l,e=0,h=0,kilDrob=0, kilInt=0;
	
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
//				fprintf(fp2,"%s ",num);
				sscanf(num,"%f ",&tempNum);
				while(1){
					numsForSortFloats[e] = tempNum;
					printf("%g",numsForSortFloats[e]);
					e++;
					kilDrob++;
					break;
				}
				while(m<size){
					floatToInt[m] = tempNum;
					m++;
					break;
				}
				sumFloat=sumFloat+tempNum;
			}
			else {
//				fprintf(fp1,"%s ",num);
				sscanf(num,"%f",&tempNum);
				while(1){
					numsForSortInt[h]=tempNum;
					h++;
					kilInt++;
					break;
				}
//				printf("1");
				sumInt=sumInt+tempNum;
//				printf("------------ %i",sumInt);
			}
		}
	}
//	printf("\n%i-------",kilDrob);
	
	
		for (k = 0; k < kilInt - 1; k++) {
	        for (l= 0; l < kilInt - k - 1 ; l++) {
	            if (numsForSortInt[l] > numsForSortInt[l + 1]) {
	                temp = numsForSortInt[l];
	                numsForSortInt[l] = numsForSortInt[l + 1];
	                numsForSortInt[l + 1] = temp;
	            }
	        }
	    }
	    
	    for (k = 0; k < kilDrob - 1; k++) {
	        for (l= 0; l < kilDrob - k - 1 ; l++) {
	            if (numsForSortFloats[l] > numsForSortFloats[l + 1]) {
	                temp = numsForSortFloats[l];
	                numsForSortFloats[l] = numsForSortFloats[l + 1];
	                numsForSortFloats[l + 1] = temp;
	            }
	        }
	    }
	    
//		IntFile
		for(h=0;h<kilInt;h++){
			fprintf(fp1,"%0.f ",numsForSortInt[h]);
		}
		fprintf(fp1,"\nSum = %i", sumInt);
//		floatFile
		for(h=0;h<kilDrob;h++){
			fprintf(fp2,"%.1f ",numsForSortFloats[h]);
		}
		fprintf(fp2,"\nSum = %g", sumFloat);
		fprintf(fp2,"\nCili chysla:  ");
	
		
		for (k = 0; k < kilDrob - 1; k++) {
	        for (l= 0; l < kilDrob - k - 1 ; l++) {
	            if (floatToInt[l] > floatToInt[l + 1]) {
	                temp = floatToInt[l];
	                floatToInt[l] = floatToInt[l + 1];
	                floatToInt[l + 1] = temp;
	            }
	        }
	    }
//		
//		for(i=0;i<kilDrob;i++)
//			printf("\n%g",floatToInt[i]);
		
		for(p=0;p<kilDrob;p++){
//			if(floatToInt[p] == 0){
//				break;
//			}
			intsNum=floatToInt[p];
			fprintf(fp2,"%i ",intsNum);
			sumFloatToInt=sumFloatToInt+intsNum;
		}
		fprintf(fp2,"\nSum floatsToInt = %0.f ",sumFloatToInt);
		fclose(fp);
		fclose(fp1);
		fclose(fp2);
}
