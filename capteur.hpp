#ifndef CAPTEUR_HPP
#define CAPTEUR_HPP
#include <string>
#include<vector>

struct capteur_double{
	double val;
	double val_max;
	double val_min;
	std::string nom;
	std::string reaction;

	capteur_double(std::string n,double v,double vin,double vax,std::string reac);
	
	void modification_val(double nv_val);
	
	void verification_val();
};

struct capteur_bool{
	bool val;
	bool statut;
	std::string nom;
	std::string reaction;
	
	capteur_bool(std::string n,bool v,bool s,std::string reac);

	void modification_val(bool nv_val);
	
	void verification_val();
};

capteur_double creeCapteur_double(std::string nom);
	
capteur_bool creeCapteur_bool(std::string nom);

void visualiserCapteurs(std::vector<capteur_double> listeCapteursDoubles,std::vector<capteur_bool> listeCapteursBools);

#endif // CIRCLE_HPP
