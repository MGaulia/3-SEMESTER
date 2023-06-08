#include "functions.cpp"
using namespace std;

void splitter(string &str, char delim, vector<string> &out);
vector<string> nuskaityti(string failo_pavadinimas);
vector<string> unikalios_reiksmes(vector<string> in);
string zodis_pagal_id(map<string,int> zodziaisuID,int id);
map<string,int> zodziai_su_unikaliu_id(vector<string> skirtingi);
multimap<int, string, less<int>> filtruoti(map<string,int> &rezultatas);
multimap<int, string, less<int>> zodziu_pasikartojimai(multimap< int, string, less< int > > box,  map<string,int> zodziaisuID);
