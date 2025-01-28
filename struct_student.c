
#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char speciality[10];
    float grad;
};

int main()
{
    struct student dd_1[10];

    strcpy(dd_1[0].name, "Hibat Arrahman");
    strcpy(dd_1[0].speciality, "CSA");
    dd_1[0].grad = 20;

    strcpy(dd_1[1].name, "Abd Arrahim");
    strcpy(dd_1[1].speciality, "CSA");
    dd_1[1].grad = 15.5;

    strcpy(dd_1[2].name, "Belkis");
    strcpy(dd_1[2].speciality, "CSA");
    dd_1[2].grad = 13.75;

    strcpy(dd_1[3].name, "Ahmed");
    strcpy(dd_1[3].speciality, "IT");
    dd_1[3].grad = 17.5;

    strcpy(dd_1[4].name, "Sara");
    strcpy(dd_1[4].speciality, "IT");
    dd_1[4].grad = 18.25;

    strcpy(dd_1[5].name, "Omar");
    strcpy(dd_1[5].speciality, "SE");
    dd_1[5].grad = 14;

    strcpy(dd_1[6].name, "Mariam");
    strcpy(dd_1[6].speciality, "SE");
    dd_1[6].grad = 19;

    strcpy(dd_1[7].name, "Khaled");
    strcpy(dd_1[7].speciality, "CS");
    dd_1[7].grad = 12.5;

    strcpy(dd_1[8].name, "Laila");
    strcpy(dd_1[8].speciality, "CS");
    dd_1[8].grad = 16.75;

    strcpy(dd_1[9].name, "Youssef");
    strcpy(dd_1[9].speciality, "AI");
    dd_1[9].grad = 20;

	for (int i=0 ;i<10;i++){
	printf ("\n The student is %s .",dd_1[i].name);
	printf (" \n The of speciality of %s is :%s. ",dd_1[i].name,dd_1[i].speciality);
	printf (" \n %s got: %0.2f .",dd_1[i].name,dd_1[i].grad);
	printf("\n___________________________________________\n");}
	return 0;
}

