#include <stdio.h>


struct etudiant {
char nom [15];
char prenom [15];
int td; 
};

int main (){
	int i , n ;	
	struct etudiant *p ;
	struct etudiant eleve[5] ;

	printf("entrez le nombre d'étudiants souhaitez, max 5 \n");
	scanf("%d",&n);
	for (i=0;i<n; i++ ) 
	{
		printf("entrez le prenom de l'étudiant numéro %d \n",i);
		scanf("%s",(*p).prenom);
		printf("entrez le nom de l'étudiant \n");
		scanf("%s",(*p).nom);
		printf("entrez TD de l'étudiant numéro \n");
		scanf("%d",&(*p).td);
		printf("Voici le contenu de la structure \n%s\n%s\n%d\n",(*p).nom ,(*p).prenom,(*p).td);
	}
}








