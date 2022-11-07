#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exercice: machine a cafe
// ========================
// Distributeur de boissons chaude
// =>


#define MINV DIX_CENT

typedef struct boisson_chaude cafe;
struct boissson_chaude
{
	int eau;
	int sucre;
	int cafe;
};


typedef enum pieces_euro pieces;
enum pieces_euro
{
	DIX_CENT,
	VINGT_CENT,
	TRENTE_CENT,
	QUARANTE_CENT,
	CINQUANTE_CENT,
	SOIXANTE_CENT,
	CINQ_EURO
};

typedef enum prix_boisson prix_cafe;
enum prix_boisson
{
	EXPRESSO = TRENTE_CENT,
	CAFE_COURT = QUARANTE_CENT,
	CAFE_LONG = CINQUANTE_CENT,
	CAFE_LATE = SOIXANTE_CENT

};




// Prototypes - functions
// ======================
//

void menu(char* msg)
{
	puts(msg);
}

int selection(prix_cafe price)
{
	
	switch(price)
	{
		case EXPRESSO: 		{	break; }
		case CAFE_COURT: 	{ 	break; }
		case CAFE_LONG: 	{	break; }
		case CAFE_LATE: 	{	break; }
		// default {}
	}
}

int payement2(int somme)
{
	switch(somme)
	{
		case 10: {	break; }
		case 20: { 	break; }
		case 50: {	break; }
		case 100: {	break; }
		case 200: {	break; }
		case 500: {	break; }
		// default {}
	}
}


// main 
// ================
// Entree du programme | arguments => 0 | retourne 0

int main(void)
{
	puts("machine a cafe !");


	return 0;
}