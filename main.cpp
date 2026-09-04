#include "capteur.hpp"
#include <string>
#include <vector>
#include <iostream>

int main(){
	std::vector<capteur_double> listeCapteursDoubles;
	std::vector<capteur_bool> listeCapteursBools;
	int reponse;
	do{
		std::cout<<"Bonjour, que voulez vous faire ?"<<std::endl;
		std::cout<<"1 - Ajouter un capteur"<<std::endl;
		std::cout<<"2 - Modifier la valeur d'un capteur"<<std::endl;
		std::cout<<"3 - Supprimer un capteur"<<std::endl;
		std::cout<<"4 - Visualiser les capteurs"<<std::endl;
		std::cout<<"5 - Quitter"<<std::endl;
		std::cin>>reponse;
		if(reponse==5){
			return 0;
		}
		if(reponse==4){
			visualiserCapteurs(listeCapteursDoubles,listeCapteursBools);
		}
		if(reponse==1){
			std::string type,nom;
			std::cout<<"Quel type de capteur voulez-vous créer (double/bool)"<<std::endl;
			std::cin>>type;
			std::cout<<"Que voulez vous capter (Pression,Luminosité,Pluie,...)"<<std::endl;
			std::cin>>nom;
			if(type=="double"){
				listeCapteursDoubles.push_back(creeCapteur_double(nom));
				listeCapteursDoubles.at(listeCapteursDoubles.size()-1).verification_val();
			}
			if(type=="bool"){
				listeCapteursBools.push_back(creeCapteur_bool(nom));
				listeCapteursBools.at(listeCapteursBools.size()-1).verification_val();
			}
			if(type!="double" && type!="bool"){
				std::cout<<"Erreur, retour au menu principal";
			}
		}
		if(reponse==2){
			std::string nom;
			std::cout<<"Quel capteur voulez-vous modifier ?"<<std::endl;
			std::cin>>nom;
			bool pres=false;
			for(int i=0 ; i<listeCapteursDoubles.size() ; i++){
				if(nom==listeCapteursDoubles.at(i).nom){
					pres=true;
					double val;
					std::cout<<"Quelle valeur voulez-vous mettre au capteur ?"<<std::endl;
					std::cin>>val;
					listeCapteursDoubles.at(i).modification_val(val);
				}
			}
			for(int i=0 ; i<listeCapteursBools.size() ; i++){
				if(nom==listeCapteursBools.at(i).nom){
					pres=true;
					std::string val_rep;
					bool val;
					std::cout<<"Quelle valeur voulez-vous mettre au capteur ?"<<std::endl;
					std::cin>>val_rep;
					if(val_rep=="Oui"){
						val=true;
					}
					listeCapteursBools.at(i).modification_val(val);
				}
			}
			if(pres==false){
				std::cout<<"Le capteur que vous recherchez n'existe pas"<<std::endl;
			}	
		}
		if(reponse==3){
			std::string nom;
			std::cout<<"Quel capteur voulez-vous supprimer ?"<<std::endl;
			std::cin>>nom;
			bool pres=false;
			for(int i=0 ; i<listeCapteursDoubles.size() ; i++){
				if(nom==listeCapteursDoubles.at(i).nom){
					pres=true;
					listeCapteursDoubles.erase(listeCapteursDoubles.begin()+i);
				}
				if(pres==true){
					break;
				}
		}
			for(int i=0 ; i<listeCapteursBools.size() ; i++){
				if(nom==listeCapteursBools.at(i).nom){
					pres=true;
					listeCapteursBools.erase(listeCapteursBools.begin()+i);
				}
				if(pres==true){
					break;
				}
		}
			if(pres==false){
				std::cout<<"Le capteur que vous recherchez n'existe pas"<<std::endl;
			}
		}
		if(reponse<1 || reponse>5){
			std::cout<<"Erreur : commande inexistante"<<std::endl;
		}
	} while(reponse!=5);
}
			
		
	
