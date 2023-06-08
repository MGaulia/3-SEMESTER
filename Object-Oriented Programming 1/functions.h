#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
using namespace std;
struct studentas
{
    string vardas;
    string pavarde;
    vector<int> nd;
    int egz;
    float rezultatas;
};

double vidurkis(vector<int> nd);

vector<studentas> generavimas_vector(int kiek);

void vector_dalijimas_mano_strategija(vector<studentas> studentai);

void list_dalijimas_mano_strategija(list<studentas> studentai);

void vector_dalijimas_1_strategija(vector<studentas> studentai);

void list_dalijimas_1_strategija(list<studentas> studentai);

void vector_dalijimas_2_strategija(vector<studentas> studentai);

void list_dalijimas_2_strategija(list<studentas> studentai);

void testuoti(int kiek);

