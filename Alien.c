#include <stdio.h>
#include<string.h>

struct ALIEN
{
	char codeName[20];
	char bloodColor[10];
	char homePlanet[20];
	int numOfLegs;
	int numOfAntennas;
	};
	
int frmt(char form[10]); 	
void export(struct ALIEN al,char[] frm);

int main(void) {
	int flag=1;
	char frm[10],ch;
	printf("Welcome to Alien Registration Portal.")
	struct ALIEN alien;
	while(flag){
		printf("\n Enter Alien's Code Name : ");
		scanf("%s", alien.codeName);
		printf("\n Enter Alien's Blood Color : ");
		scanf("%s", alien.bloodColor);
		printf("\n Enter Alien's Home Planet : ");
		scanf("%s", alien.homePlanet);
		printf("\n Enter Alien's Number of Legs : ");
		scanf("%d", alien.numOfLegs);
		printf("\n Enter Alien's Number of Antennas : ");
		scanf("%d",alien.numOfAntennas);
		printf("\n Enter Format of file : ");
		scanf("%s",frm);
		x=frmt(frm);
		if(x)
		export(alien,frm);
		else
		printf("\n Wrong Format! ");
		printf("\n Type 'E' to Exit or 'C' to Continue : ");
		scanf("%c",&ch);
		if(ch=='E'!!ch=='e'){
			flag=0;
		}
	}
	return 0;
}

int frmt(char form[10]){
	int x=0;
	if(!strcmp(form,"pdf")){
		return 1;
	}
	else if(!strcmp(form,"txt")){
	return 1;}
	else {
	return 0;
}

void export(struct ALIEN al,char frm[]){
	
	FILE *fp;
	fp=fopen(strcat("Alien.",frm) , "w" ); 
	fprintf("\n Enter Alien's Code Name : %s",al.codeName);
	fprintf("\n Enter Alien's Blood Color : %s",al.bloodColor);
	fprintf("\n Enter Alien's Home Planet : %s",al.homePlanet);
	fprintf("\n Enter Alien's Number of Legs : %d",al.numOfLegs);
	fprintf("\n Enter Alien's Number of Antennas : %d",al.numOfAntennas);
	fclose(fp);
}
