// ConsoleApplication-STL.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<vector>
#include<list>
#include<deque>
#include<array>
#include<forward_list>
using namespace std;
#include<algorithm>

int main()
{
    cout << "\n*********************   Vector **********************\n";
    vector<int> vect;
    
    for (int i = 0; i < 5; i++)
        vect.push_back(i + 1);


    if (vect.empty() == true)
    {
        cout << endl << "VECTOR IS EMPTY !!" << endl;
    }
    else
    {
        for (auto i = vect.begin(); i != vect.end(); i++)
            cout << *i <<"\t";
        cout << "\nle size de vect est : " << vect.size();
        cout << "\nDebut = " << vect.front();
        cout << "\nFin = " << vect.back();
        cout << "\nCapacity : " << vect.capacity();
        cout << "\nMax_Size : " << vect.max_size();
        cout << "\nvect[4] = " << vect.at(4);

    }



    cout << "\n*********************   list **********************\n";

    list<int> liste1,liste2;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)liste1.push_back(i);
        else
            liste2.push_back(i);
    }
    if (liste1.empty() == true || liste2.empty()==true)
    {
        if(liste1.empty() == true)
            cout << endl << "LISTE1 IS EMPTY !!" << endl;
        if (liste2.empty() == true)
            cout << endl << "LISTE2 IS EMPTY !!" << endl;
    }
    else
    {
        cout << "\nListe 1 : ";
        for (auto i = liste1.begin(); i != liste1.end(); i++)
            cout << *i << "\t";

        cout << "\nle size est : " << liste1.size();
        cout << "\nDebut = " << liste1.front();
        cout << "\nFin = " << liste1.back();
        cout << "\nMax_Size : " << liste1.max_size();


        cout << "\n\nListe 2 : ";
        for (auto i = liste2.begin(); i != liste2.end(); i++)
            cout << *i << "\t";
        cout << "\nle size est : " << liste2.size();
        cout << "\nDebut = " << liste2.front();
        cout << "\nFin = " << liste2.back();
        cout << "\nMax_Size : " << liste2.max_size();
    }

    cout << "\n*********************   Array **********************\n";
    array<int, 5> Array = { 1,7,4,3,0 }, Array1 = {0,0,0,0,0};
    sort(Array.begin(), Array.end());
    for (auto i = Array.begin(); i != Array.end(); i++)
        cout << *i << "\t";
    cout << "\nle size est : " << Array.size();
    cout << "\nDebut = " << Array.front();
    cout << "\nFin = " << Array.back();
    cout << "\nMax_Size : " << Array.max_size();

    cout << "\n Array[4] = "<<  Array.at(4)<<endl<<endl;
    Array.fill(1);
    cout << "\nArray After sort  :: ";
    for (auto i = Array.begin(); i != Array.end(); i++)
        cout << *i << "\t";
    
    Array1.swap(Array);
    cout << endl;
    cout << "\nArray1 ::   ";
    for (auto i = Array1.begin(); i != Array1.end(); i++)
        cout << *i << "\t";

    cout << "\n*********************   deque **********************\n";







}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
