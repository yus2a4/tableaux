#include <stdio.h>
#include <stdlib.h>
int main() {
	float t1[13],t2[15];
	int max1 , min1 , max2, min2 ,i;
	for (i=0;i<13;i++)
	{printf ("la note de l'etudiant est :\n");
	scanf ("%f",&t1[i]);
	}
	if(t1[i]>max1)
	printf("ecrire la premiere note:");
	if(t1[i]<min1)
	printf("ecrire la derniére note:");
	{for (i=0;i<13;i++)
	if(t1[i]>=10)
	printf("saisir cette note:",t1[i]);
	}
	for (i=0;i<13;i++)
	{printf ("la note de l'etudiant est :\n");
	scanf ("%f",&t2[i]);
	}
	if(t2[i]>max1)
	printf("ecrire la premiere note:");
	if(t2[i]<min1)
	printf("ecrire la derniére note:");
	{for (i=0;i<13;i++)
	if(t2[i]>=10)
	printf("saisir cette note:",t2[i]);
	}
	return 0;
}
