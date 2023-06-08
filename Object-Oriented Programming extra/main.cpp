#include "functions.h"

using namespace std;

int main()
{
    /* 1 uþduotis */
    vector<string> zodziai = nuskaityti("1duomenys.txt");
    vector<string> skirtingi = unikalios_reiksmes(zodziai);
    map<string,int> zodziaisuID = zodziai_su_unikaliu_id(skirtingi);

    multimap< int, string, less< int > > box;
    for(string z: zodziai)
    {
        box.insert(make_pair(zodziaisuID.find(z)->second,z));
    }

    multimap<int, string, less<int>> rezultatas = zodziu_pasikartojimai(box, zodziaisuID);

    rezultatas = filtruoti(rezultatas);

    ofstream out("1rezultatas.txt");
    out<<"zodis kiekis"<<endl;
    for(auto elem: rezultatas)
    {
        out<<elem.first<<" "<<elem.second<<endl;
    }
    out.close();

    // 2 uþduotis
    vector<string> rezultato_zodziai;
     for(auto elem: rezultatas)
    {
        rezultato_zodziai.push_back(elem.second);
    }

    ifstream inn("1duomenys.txt");
    ofstream outt("2rezultatas.txt");
    string eilute;
    int i = 1;
    while (getline(inn, eilute))
    {
        transform(eilute.begin(), eilute.end(), eilute.begin(),[](unsigned char c)
        {
            return tolower(c);
        });
        regex e ("[^a-z ]+");
        string done = regex_replace(eilute,e,"");
        vector<string> zodziai;
        splitter(done,' ',zodziai);
        outt<<i<<" eilute: ";
        for(string z:zodziai)
        {
            if (find(rezultato_zodziai.begin(), rezultato_zodziai.end(), z) != rezultato_zodziai.end())
            {
                outt<<z<<" ";
            }
        }
        outt<<endl;
        i++;
    }
    inn.close();
    outt.close();
    /* 3 uzduotis */
    ifstream inurl("3duomenys.txt");
    string textas((istreambuf_iterator<char>(inurl)),istreambuf_iterator<char>());
    inurl.close();
    transform(textas.begin(), textas.end(), textas.begin(),[](unsigned char c)
    {
        return tolower(c);
    });
    vector<string> texto_zodziai;
    splitter(textas,' ',texto_zodziai);

    ofstream outurl("3rezultatas.txt");
    regex url_regex("\\S*www\\.\\S+");
    sregex_iterator iter(textas.begin(), textas.end(), url_regex);
    sregex_iterator end;
    while(iter != end)
    {
        for(unsigned i = 0; i < iter->size(); ++i)
        {
            outurl <<(*iter)[i] << endl;
        }
        ++iter;
    }
    outurl.close();
    return 0;
}
