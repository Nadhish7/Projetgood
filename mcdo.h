//exercice 1
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;


class client { 

private :

//gerant

int aff;
int mdp;

// Client

char prenom[20]; // Pour ecrire le prénom
char nom[20];   // Pour ercire le nom
int paie; //pour choisir son mode de paiement 
float total=0;//le TOTAL
float prix;//le prix


// Menu




                    
                   
public :

client();// Constructeur
void menu();//afficher le menu
void saisie();//c'est quand le client va saisir ses information
void ticket_commande();//afficher les information que le client a saisi
void modifier();//permet de modifier


};



class Menu{

private :


double min,h,js,j,a;



int entree;//afficher l'entrée
int plat;//afficher le plat
int dessert;// afficher le desert

public :


void date_commande();
void MenuLundi();
void MenuMardi();
void MenuMercredi();
void MenuJeudi();
void MenuVendredi();
void MenuSamedi();
void MenuDimanche();
void choisirdate();

};
