#include <stdio.h>
#include <string.h>

main()
{
	char word[30], words[100][30];
	int i = 0;

	FILE *fp;
	fp = fopen("text.txt", "r");

	while (1){
		word[0] = 0;
		fscanf(fp, "%s", word);
		if (word[0] == 0)
			break;
		if ((word[0]>= 'A') && (word[0]<= 'Z') ){
			strcpy(words[i], word);
			i++;
		}
	}
	fclose(fp);
	fp = fopen("copy.txt", "w");
	i--;
	while(i>=0){
		fprintf(fp, "%s\n",words[i]);
		i--;
	}
	fclose(fp);
	printf("Complete");
}

