# Systeme-de-verification-de-capteurs

## Description

Ce projet est un programme en C++ permettant de créer et de gérer différents capteurs.

Le programme permet de vérifier si la valeur d'un capteur correspond aux conditions définies lors de sa création.

Deux types de capteurs sont disponibles :

* Capteur `double` : vérification d'une valeur avec un minimum et un maximum.
* Capteur `bool` : vérification d'un état vrai ou faux.

## Fonctionnalités

Le programme permet de :

* Ajouter un capteur
* Modifier la valeur d'un capteur
* Supprimer un capteur
* Afficher les capteurs
* Vérifier l'état des capteurs
* Quitter le programme

## Structure du projet


Systeme-de-verification-de-capteurs/
	main.cpp      	# Programme principal
	capteur.cpp   	# Fonctions liées aux capteurs
	capteur.hpp   	# Définition des structures et fonctions
	LICENSE       	# Licence du projet
	.gitignore	# Définition des fichiers que git ne doit pas prendre en charge lors du suivi
	README.md	# Description du projet


## Fonctionnement

### Capteur `double`

Un capteur de type `double` possède une valeur minimale et une valeur maximale.

Par exemple :
* Minimum : 10 ;
* Maximum : 50 ;
* Valeur : 30.

La valeur `30` est correcte car elle se trouve entre `10` et `50`.

Si la valeur est en dehors de cette plage, le programme considère que le capteur n'est pas dans son état attendu et affiche la réaction définie.

### Capteur `bool`

Un capteur de type `bool` permet de vérifier un état `true` ou `false`.

Par exemple, on peut avoir un capteur qui doit être à `true`. Si sa valeur passe à `false`, le programme détecte que l'état attendu n'est plus respecté.

## Utilisation

Au lancement du programme, un menu permet de choisir différentes actions :

1 - Ajouter un capteur
2 - Modifier la valeur d'un capteur
3 - Supprimer un capteur
4 - Visualiser les capteurs
5 - Quitter

Il suffit de sélectionner l'action souhaitée en entrant le numéro associé puis de suivre les instructions affichées dans le terminal.

## Compilation

Le projet peut être compilé avec un compilateur C++ comme `g++`.

g++ -std=c++23 -o capteur main.cpp capteur.cpp

Puis lancer le programme :

### Linux / macOS

./capteurs

### Windows

capteurs.exe

## Technologies

* C++ ;
* Git ;
* GitHub ;
* Bibliothèque standard C++ (STL).

Aucune bibliothèque externe n'est nécessaire.

## Objectif

Ce projet a été réalisé afin de mettre en pratique plusieurs notions de programmation en C++, notamment :

* les structures ;
* les fonctions ;
* les `vector` ;
* les chaînes de caractères ;
* les conditions ;
* la gestion des entrées utilisateur ;
* la séparation entre fichiers `.hpp` et `.cpp`.

## Améliorations possibles

* Ajout d'une interface graphique (Design déjà en cours disponible à l'adresse `https://github.com/titouan0778/Interface-de-syst-me-de-v-rification-de-capteurs` mais incomplet pour le moment) ;
* Ajout d'autres types de capteurs ;
* Sauvegarde des capteurs enregistrés dans un fichier ;
* Ajout de tableaux `vector` afin de mémoriser les différentes valeurs de chaque capteur entrée après entrée.

## Licence

Ce projet est sous licence MIT.

Voir le fichier LICENSE pour plus d'informations.

## Auteur

FOUCHE Titouan.

