#include <string>
#include <fstream>
#include <streambuf>
#include <iostream>
#include <regex>
#include <algorithm>
#include <cctype>
#include <set>
#include <iterator>
#include <stdio.h>
#include <map>
#include <string.h>

using namespace std;
void splitter(string &str, char delim, vector<string> &out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

vector<string> nuskaityti(string failo_pavadinimas)
{
    ifstream t(failo_pavadinimas);
    string str((istreambuf_iterator<char>(t)),istreambuf_iterator<char>());

    transform(str.begin(), str.end(), str.begin(),[](unsigned char c)
    {
        return tolower(c);
    });

    regex nl("\n");
    str = regex_replace(str,nl, " ");

    regex e ("[^a-z \n]+");
    str = regex_replace(str,e,"");

    vector<string> zodziai;
    splitter(str,' ',zodziai);
    return zodziai;
}

vector<string> unikalios_reiksmes(vector<string> in)
{
    vector<string> skirtingi = in;
    sort(skirtingi.begin(), skirtingi.end());
    skirtingi.erase( unique( skirtingi.begin(), skirtingi.end() ), skirtingi.end() );
    return skirtingi;
}
string zodis_pagal_id(map<string,int> zodziaisuID,int id)
{
    for (auto it = zodziaisuID.begin(); it != zodziaisuID.end(); ++it)
        if (it->second == id)
            return it->first;
}

map<string,int> zodziai_su_unikaliu_id(vector<string> skirtingi)
{
    map<string,int> zodziaisuID;
    int j = 0;
    for(string z:skirtingi)
    {
        zodziaisuID.insert(pair<string,int>(z,j));
        j++;
    }
    return zodziaisuID;
}
multimap<int, string, less<int>> filtruoti(multimap<int, string, less<int>> rezultatas)
{

    multimap<int, string, less<int>> atfiltruotas;
    for(auto elem: rezultatas)
        {
            if(elem.first != 1){
            atfiltruotas.insert(make_pair(elem.first,elem.second));
            }
        }
    return atfiltruotas;
}

/*map<string,int> zodziu_pasikartojimai(multimap< int, string, less< int > > box,  map<string,int> zodziaisuID)
{
    int i = zodziaisuID.size();
    map<string,int> rezultatas;
    for(int k = 0 ; k < i ; k ++)
    {
        rezultatas.insert(pair<string,int>(zodis_pagal_id(zodziaisuID,k),box.count(k)));
    }
    return rezultatas;
}*/

multimap<int, string, less<int>> zodziu_pasikartojimai(multimap<int, string, less<int>> box,  map<string,int> zodziaisuID)
{

    int i = zodziaisuID.size();
    multimap<int, string, less<int>> rezultatas;
    for(int k = 0 ; k < i ; k ++)
    {
        rezultatas.insert(make_pair(box.count(k),zodis_pagal_id(zodziaisuID,k)));
    }
    return rezultatas;
}
