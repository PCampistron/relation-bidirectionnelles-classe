/**
 * @file Individu.h
 * @author Lopisteguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @details Cette classe représente un Individu par son nom / prénom.
 * 
 * La classe Individu est liée à la classe Voiture via un pointeur.
 * @version 0.1
 * @date 12/08/22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Représente un Individu par son nom, son prénom et la Voiture qu'il conduit.
 * @warning Dans cette représentation un Individu conduit au plus une Voiture.
 * @deprecated Utiliser à la place la classe Personne.
 */

class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom;

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet de la classe Individu à partir du nom et du prénom.
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    /**
     * @brief Retourne l'identité de l'individu
     * 
     * @return une chaîne sous forme "nom prénom"
     * @bug Une espace en trop entre le nom et le prénom.
     * @todo Ajouter un paramètre qui permet de chisir entre un retour du type "nom prenom" ou "prenom nom".
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Défini la voiture conduite par l'individu.
     * 
     * @param [in] voiture un pointeur vers un objet de la classe Voiture
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H