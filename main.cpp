//exercice 1
#include <iostream> 
#include <ctime>
#include "mcdo.h"

using namespace std;

int main()

{

char prenom[20];// inscrire le prénom
char nom[20]; // inscrire le nom
int paie; //pour choisir son mode de paiement 
char men; //afficher et choisir le menu 
int i =0; //indice

client CLIENT[20]; // afficher le tableau  

do

{

CLIENT[i].saisie(); //pour saisir les informations 
//CLIENT[i].MenuLundi(); //afficher le menu et le prix
//CLIENT[i].MenuMardi(); //afficher le menu et le prix
//CLIENT[i].MenuMercredi(); //afficher le menu et le prix
//CLIENT[i].MenuJeudi(); //afficher le menu et le prix
//CLIENT[i].MenuVendredi(); //afficher le menu et le prix
//CLIENT[i].MenuSamedi(); //afficher le menu et le prix
//CLIENT[i].MenuDimanche(); //afficher le menu et le prix
//CLIENT[i].ticket_commande(); //afficher les inforamtion du client*

} while(i != 10); // j'ai utilisié un do while pour qu'il affiche les informations des *10 la commande

Menu MENU[20];

do
{
MENU[i].date_commande();//afficher la date 
    
} while (i !=10);


}

