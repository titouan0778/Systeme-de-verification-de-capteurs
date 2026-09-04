#include "capteur.hpp"
#include <iostream>
#include <string>

capteur_double::capteur_double(std::string n,double v,double vin,double vax,std::string reac) : nom(n),val(v),val_min(vin),val_max(vax),reaction(reac){};
capteur_bool::capteur_bool(std::string n,bool v,bool s,std::string reac) : nom(n),val(v),statut(s),reaction(reac){};

void capteur_double::verification_val(){
	if(val<val_min || val>val_max){
		std::cout<<reaction;
	}
}

void capteur_double::modification_val(double nv_val){
	val=nv_val;
	verification_val();
}

void capteur_bool::verification_val(){
	if(val!=statut){
		std::cout<<reaction;
	}
}

void capteur_bool::modification_val(double nv_val){
	val=nv_val;
	verification_val();
}

capteur_double creeCapteur_double(std::string nom){
	double vin,vax,v;
	std::string reac;
	std::cout<<"Quelle est la valeur minimale que votre capteur est censé recevoir ?"<<std::endl;
	std::cin>>vin;
	std::cout<<"Quelle est la valeur maximale que votre capteur est censé recevoir ?"<<std::endl;
	std::cin>>vax;
	std::cout<<"Quelle est la valeur que reçoit votre capteur ?"<<std::endl;
	std::cin>>v;
	std::cout<<"Quelle est la réaction à avoir si la valeur ne se trouve pas entre la valeur minimale et la valeur maximale ?"<<std::endl;
	std::cin>>reac;
	return capteur_double(nom,v,vin,vax,reac);
}

capteur_bool creeCapteur_bool(std::string nom){
	bool v=false;
	bool statut= false;
	std::string reac,v_rep,s_rep;
	std::cout<<"Quelle est la valeur qu'est censé recevoir votre capteur (Oui/Non) ?"<<std::endl;
	std::cin>>s_rep;
	if(s_rep=="Oui"){
		statut=true;
	}
	std::cout<<"Quelle est la réaction à avoir si la valeur n'est pas la valeur attendue ?"<<std::endl;
	std::cin>>reac;
	std::cout<<"Quelle est la valeur que vous voulez attribuer à votre capteur (Oui/Non) ?"<<std::endl;
	std::cin>>v_rep;
	if(v_rep=="Oui"){
		v=true;
	}
	return capteur_bool(nom,v,statut,reac);
}
