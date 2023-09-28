//=========================================================
// 	hs pour nos �tudiants en C
//=========================================================

/*	ce nouveau gabarit  vous initie au d�veloppement de
	fonctions simples

	il vous permettra de d�velopper un petit
	algorithme dans un main ( avec son #if 1 )

	une fois le programme test� (breakpoint, F10,F11)
    on extrait l'algo de ce main pour en faire une fonction
	IND�PENDANTE avec sa d�claration et sa d�finition

	vous testez bien s�r un premier appel de la nouvelle fonction
	dans l'autre main (inversez le 1 et le 0 dans les #if )
	�a marche bien, testez alors quelques appels diff�rents

	maintenant vous �tes passablement assur�es
	de la qualit� de votre fonction
		jetez le contenu du premier main (qui est devenu inutile YES)
		et attaquez- vous � un autre algorithme de votre niveau
		tr�s rapidement vous deviendrez bons et bonnes


*/

//=========================================================


//=========================================================
// voici qui permet de d�sactiver certains warnings stupides de Visual 
#define _CRT_SECURE_NO_WARNINGS 

/*=========================================================*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<assert.h>

/*=========================================================*/
// et on utilisera le twister 
#include "mtwister.h"
/*=========================================================*/


/*=========================================================*/
// PLACE DES D�CLARATIONS DE FONCTIONS
/*=========================================================*/
//  r�alisez une d�claration pour  chaque fonction
// aujourd'hui remplissez sommairement les commentaires
// j'en laisse 2 en gabarit, suffit de copier/coller

/*==========================================================*/
/* La fonction   (mettez son nom)
   donne ou r�alise .... BLABLABLA

PARAMETRE(s): 

SORTIE: 

SPECS: 
*/

// votre vraie d�claration  exig�e par le C vient ici


/*==========================================================*/

/*==========================================================*/
/* La fonction   (mettez son nom)
   donne ou r�alise .... BLABLABLA

PARAMETRE(s):

SORTIE:

SPECS:
*/

// votre vraie d�claration  exig�e par le C vient ici


/*==========================================================*/

/*=========================================================*/

/*just for fun, je vous laisse l'algo qui fait la somme  
  des resultats pairs en lancant plusieurs fois un d� */

#if 1
int main(void) {
	// variable libre
	// moi c'est ok pour 5000 
	// vous essairez plus ou moins si vous voulez
	int nb_lancers = 5000;

	// variables de travail
	int valeur_dice;
	int somme_pairs = 0;
	int iter_lancers = 0;

	mt_srandSys(); // j'initialise le twister

	// la boucle de simulation des lancers du d�
	while (iter_lancers < nb_lancers) {
		valeur_dice = mt_randi(6);

		//  on somme si le r�sultat est pair
		if ((valeur_dice % 2) == 0) {
			somme_pairs = somme_pairs + valeur_dice;
		}
		// incr�mentation qui assure la boucle
		iter_lancers += 1;
	}

	// c'est fini, le  r�sultqat est dans la variable pr�vue
	return EXIT_SUCCESS;
}
#endif
//=========================================================



//=========================================================
// c'est dans celui-ci que vous testerez la nouvelle fonction
// vous comprenez :)

#if 0
int main(void) {











	return EXIT_SUCCESS;
}
#endif
//=========================================================


/*=========================================================*/
// PLACE DES D�FINITIONS DE FONCTIONS
/*=========================================================*/




//=========================================================




//=========================================================




//=========================================================
 // C'EST FINI :(
//=========================================================