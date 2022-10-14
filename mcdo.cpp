#include <iostream>
#include <string>
#include "mcdo.h"
#include <ctime>
using namespace std;

client::client()

{

    
}

void Menu::date_commande()


{
  time_t now = time(0);
  tm *x = localtime(&now);
  min = x-> tm_min; // minute
  h = x-> tm_hour; // heure 
  js = x-> tm_wday; //jour +semaine
  j= x-> tm_mday; // jour
  h = x-> tm_mon;// mois
  a = x-> tm_year;//année

  cout<<"Nous sommes le"<<js<<endl;

  
}


void client::saisie()

{
    cout<<"!! Bonjour, Bienvenue Chez Mcdo !!\n";
    cout<<"vous etes?  taper 1 : pour client ou taper 2 : pour gerant\n";
    cin>>aff;
    
    if(aff == 1) // pour le client

    {
    cout<<"******mode client*******\n";    
    cout<<"Entrer votre Prenom :\n";
    cin>>prenom; 
    cout<<"Entrer votre Nom :\n";
    cin>>nom;
    cout<<"quel est votre mode paiement \n";
    cout<<"Tapez 1:Espece ou Tapez 2: Carte Bancaire:\n";
    cin>>paie;
    }

    if(aff == 2) // le gerant
    { 
        cout<<"****Mode Gerant****"<<endl;
        int essai = 0;
        do
        {
            cout<<"saisir le mot pass :";
            cin>>mdp;
            if(mdp ==147)
            {
                cout<<"Le mot pas correct"<<endl;
                cout<<"Consulter le menu"<<endl;
                

            }   
            else{ cout<<"Mot pass incorrect\n";}
            essai++;

        }while(essai < 5 );
             
    }
          
        


        
}

void Menu::MenuLundi()

{
    cout<<"********Menu(Lundi)*********"<<endl; //voici le menuLundi
    cout<<"------Entree-----\n";
    cout<<"3- Bouchée à la reine 8,5€"<<endl;
    cin>>entree;
    cout<<"------Plat-------\n";
    cout<<"2- Escalope Florentina 15€ \n";
    cout<<" (Escalope, Aubergine, sauce napolitaine, Mozarella Al forno)\n"<<endl;
    cin>>plat;
    cout<<"-----Dessert-----\n";
    cout<<"3-café gourmand 5€\n"<<endl;
    cin>>dessert;
    
  time_t now = time(0);
  struct tm tstruct;
  char* dt =ctime(&now);
  cout << "La date et l'heure locales sont: " << dt << endl;
  


}
/*
void client::MenuMardi()
{
 cout<<"******Menu(Mardi)******"<<endl; // Menu pour le mardi
 cout<<"----entree----\n";
 cout<<" Brushshetta saumon (2 pièces) 5,5euro \n"<<endl;
 cin>>entree;
 cout<<"------Plat-------\n";
 cout<<"Pizza Diavolata 11euro \n";
 cout<<"(Tomate, sauce picante, Mozarella, jambon et viande hachée)\n"<<endl;
 cin>>plat;
 cout<<"------Dessert------\n";
 cout<<"nature Creme glacee 3euro"<<endl;
 cin>>dessert;

}*/


/*

void client::MenuMercredi();
{
    cout<<"Menu(Mercredi)*****"<<endl;
    cout<<"----entree----\n";
    cout<<" Carpaccio de boeuf fraîchement tranché 8,5€\n"<<endl;
    cin<<entree;
    cout<<"-----plat--------\n";
    cout<<" Pâtes Pesto Aux choix : Tagliatelles.Penne ou Spaghetti 10€\n";
    cout<<"(Basilic, copeaux de Parmesan, pignons de pin)\n"<<endl;
    cin>>plat;
    cout<<"----dessert----\n";
    cout<<"1-Tiramisu 5€ \n";<<endl;
    cin>>dessert;

}*/

/*
void client::MenuJeudi()

{
    cout<<"Menu(Jeudi)*****"<<endl;
    cout<<"----entree----\n";
    cout<<" salade+crevettes 4euro\n"<<endl;
    cin<<entree;
    cout<<"-----plat--------\n"
    cout<<"Ratatouille 7euro\n"<<endl;
    cin>>plat;
    cout<<"----dessert----\n";
    cout<<"2-Moelleux au chocolat 5euro\n"<<endl;
    cin>>dessert;

}*/

/*
void client::MenuVendredi()
{
    cout<<"Menu(Vendredi)*****"<<endl;
    cout<<"----entree----\n";
    cout<<" carottes rappee 2euro\n"<<endl;
    cin<<entree;
    cout<<"-----plat--------\n"
    cout<<"Assiette de Kebab 6.5euro\n"<<endl;
    cin>>plat;
    cout<<"----dessert----\n";
    cout<<"2-Tarte au pomme 5euro\n"<<endl;
    cin>>dessert;

}*/



/*void client::MenuSamedi()
{

    cout<<"Menu(Samedi)*****"<<endl;
    cout<<"----entree----\n";
    cout<<"oeuf avec la moyonaise 2euro\n"<<endl;
    cin<<entree;
    cout<<"-----plat--------\n"
    cout<<"cheese burger+ hot dog 8euro\n"<<endl;
    cin>>plat;
    cout<<"----dessert----\n";
    cout<<"2-Beignet au chocolat 2euro\n"<<endl;
    cin>>dessert;

}*/


/*void client::MenuDimanche()

{

cout<<"Menu(Dimanche)*****"<<endl;
    cout<<"----entree----\n";
    cout<<"saumon fumée 2euro\n"<<endl;
    cin<<entree;
    cout<<"-----plat--------\n";
    cout<<"couscous 10euro\n"<<endl;
    cin>>plat;
    cout<<"----dessert----\n";
    cout<<"2-fruits 2euro\n"<<endl;
    cin>>dessert;


}*/


/*
void client::modifier(){



}


void client::ticket_commande()

{
    cout<<"\n Bonjour Mr "<<nom<<"  "<<prenom<<"\n";
    if(paie == 1) 
    
    {
        cout<<"votre mode paiement est en Espece \n"<<endl;
    }

    
   if(paie == 2) 
    
    {
        cout<<"votre mode paiement est la carte paiement \n"<<endl;
    }

    //******************************************************************************afficher l'entrer
    
    
    switch(entree) 
    
    {
         case 1 :
        MenuLundi();
        cout<<"Vous avez choissi :";
        prix =+ 8.5;     
        total = prix + total;
        break;
        
    
        case 2 :
        cout<<"Vous avez choisi ***Brushshetta saumon (2 pièces) 5,5€***\n"<<endl;
        prix =+ 5.5;
        total = prix + total;
        break;

        case 3 :
        cout<<"Vous avez choisi ***Bouchée à la reine 8,5€***\n"<<endl;
        prix =+ 8.5;
        total = prix + total;
        break;
    
    }
   

    //************************************************************************afficher plat


    
    switch(plat) 
    
    {
        case 1 :
        cout<<"Vous avez choisi ***Pizza Diavolata 11euro***\n"<<endl;
        prix =+ 11;
        total = prix + total;
        break;
    

        

    

    


        case 2 :
        cout<<"Vous avez choisi ***Escalope Florentina 15euro***\n"<<endl;
        prix =+ 15;
        total = prix + total;
        break;
    
   
   


        case 3 :
        cout<<"Vous avez choisi ***Pates Pesto Aux choix : Tagliatelles.Penne ou Spaghetti 10euro***\n"<<endl;
        prix =+ 10;
        total = prix + total;
        break;
    }
    
    
    
    // *********************************************************************************************Afficher dessert 
    
    
    
    switch(dessert)
    
    {
        case 1 : 
        cout<<"Vous avez choisi ***Tiramisu 5euro***\n"<<endl;
        prix =+5 ;
        total = prix + total;
        break;
    
        case 2 :
        cout<<"Vous avez choisi ***Moelleux au chocolat 5euro***\n"<<endl;
        prix =+ 5 ;
        total = prix + total;
        break;

        case 3 :
        cout<<"Vous avez choisi ***café gourmand 5€***\n"<<endl;
        prix =+ 5;
        total = prix + total;
        break;

        case 4 :
        cout<<"Vous avez choisi ***Boisson Café 1,9€***\n"<<endl;
        prix =+ 1.9;
        total = prix + total;
        break;

        case 5 :
        cout<<"Vous avez choisi ***Bouteille d'eau 4,9€**\n"<<endl;
        prix =+ 4.9;
        total = prix + total;
        break;

        case 6 :
        cout<<"Vous avez choisi ***Demi-bouteille d'eau 3€***\n"<<endl;
        prix =+ 3;
        total = prix + total;
        break;
    }
    
//afficher l'heure pour la commande
//imprimer le ticket 


 cout<<"******************************le total est "<<total<<"€"<<endl;  // le total


}*/
    
    
    
    
    
   
    
  
         


    
















//Entrainement 

/*

Bonjour Bienvenue chez mcdo
Entrez votre prénom:
Entrez votre nom:
choissisez votre mode paiement : 
taper 1 pour -> Espece
taper 2 pour -> carte Bancaire

Le menu de Lundi sont 

-entrer : 1/ salade ou 2/crevettes 5euro
taper 1 ou 2 pour choissir

-plats : Ratatouille 8.50euro

-dessert : Milkshake :1/ Vanille; 2/ Chocolat; 3/ Fraise/ 
Tapez 1/ ou 2/ ou 3/

Votre commande est en cours //5s

Votre commande est accepter

*/