<b>Matas Gaulia </b><br/>
<b>Vilniaus Universitetas </b><br/>
<b>Obektinio programavimo pratybos</b><br/>

V0.1 Sukurtas duomenų priėmimas iš vartotojo sąsajos<br/>
V0.1 Sukurtas skaičiavimo būdo (vidurkis arba mediana) pasirinkimas<br/>
V0.1 Sukurtas galutinio balo skaičiavimas<br/>

V0.2 Pridėta nuskaitymo iš .txt failo galimybe<br/>
V0.2 Pridėtas rūšiavimas rezultatuose pagal vardus<br/>
V0.2 Pridėtas lygiavimas rezultatų spausdinime<br/>

V0.3 Funkcijos ir struktūros iškeltos į atskirą failą <br/>
V0.3 Kur prasminga, pridėta "klaidų gaudymas" su try/catch metodu.

V0.4 Sukurta programos spartos analizė

V0.5 Sukurtas programos spartos lyginimas naudojant std::list ir std::vector<br>
V0.5 Rezultatas (laikai pateikiami sekundėmis): <br>
Failo nuskaitymas:
<table>
<thead>
  <tr>
    <th>Failo dydis</th>
    <th>STRUCT</th>
    <th>LIST</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>1000</td>
    <td>0.005</td>
    <td>0.007</td>
  </tr>
  <tr>
    <td>10000</td>
    <td>0.036</td>
    <td>0.034</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.39</td>
    <td>0.326</td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>3.349</td>
    <td>3.253</td>
  </tr>
  <tr>
    <td>10000000</td>
    <td>33.504</td>
    <td>32.185</td>
  </tr>
</tbody>
</table>

Failo dalijimas:
<table>
<thead>
  <tr>
    <th>Failo dydis</th>
    <th>STRUCT</th>
    <th>LIST</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>1000</td>
    <td>0.001</td>
    <td>0.001</td>
  </tr>
  <tr>
    <td>10000</td>
    <td>0.007</td>
    <td>0.006</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.0078</td>
    <td>0.061</td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>0.729</td>
    <td>0.62</td>
  </tr>
  <tr>
    <td>10000000</td>
    <td>7.11</td>
    <td>6.026</td>
  </tr>
</tbody>
</table>

Išvada: su labai mažais duomenų kiekiais (pvz. 1000) std::LIST veikia leciau arba taip pat kaip std:STRUCT, o kai didėja duomenų kiekiai pasimato kad std::LIST yra greitesnis, tačiau net analizuojant 10000000  atveji sutaupymas yra tik apie 1 sekundę.

Kompiuterio su kuriuo daryti testai parametrai : 2.60GHz procesorius, 8 GB RAM, SSD 231 GB dydžio.


<B>V1.0</B> <BR>
V1.0 Ką kode reiškia mano strategija? <BR>
V1.0 Aš iteruodamas per studentų vektorių nustatęs ar studentas "kvailas" ar "protingas", ištrinu iš pirminio vektoriaus ir dedu į atitinkamą, tad pabaigoje dalijimo studentų vektorius bus tuščias, o kvaili ir protingi pripildyti.
<BR>
(Lentelėje skaičiai pateikiami sekundėmis)
<table>
<thead>
  <tr>
    <th></th>
    <th colspan="2">MANO</th>
    <th colspan="2">1</th>
    <th colspan="2">2</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td></td>
    <td>VECTOR</td>
    <td>LIST</td>
    <td>VECTOR</td>
    <td>LIST</td>
    <td>VECTOR</td>
    <td>LIST</td>
  </tr>
  <tr>
    <td>1000</td>
    <td>0.001</td>
    <td>0.002</td>
    <td>0.001</td>
    <td>0.001</td>
    <td>0.001</td>
    <td>0.001</td>
  </tr>
  <tr>
    <td>10000</td>
    <td><b>0.008</b></td>
    <td>0.009</td>
    <td><b>0.008</b></td>
    <td>0.009</td>
    <td>0.009</td>
    <td>0.011</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.084</td>
    <td>0.083</td>
    <td>0.069</td>
    <td><b>0.067</b></td>
    <td>0.08</td>
    <td>0.098</td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>0.764</td>
    <td>0.844</td>
    <td><b>0.681</b></td>
    <td>0.724</td>
    <td>0.733</td>
    <td>0.879</td>
  </tr>
  <tr>
    <td>10000000</td>
    <td>8.05</td>
    <td>8.488</td>
    <td>7.715</td>
    <td><b>7.474</b></td>
    <td>8.343</td>
    <td>8.805</td>
  </tr>
</tbody>
</table>

<br>
Išvada: Mano atveju 1-oji strategija pasirodė greičiausia, o naudojant ją, skirtumas tarp naudojamų struktūrų vector ir list nėra didelis net su dideliais duomenų kiekiais
<br>
<br>
<br>
<b>Instrukcija</b><br>
1. Parsisiųsti main.cpp failą<br>
2. Atsidaryti main.cpp failą su tinkama programa (aš naudoju CodeBlocks)<br>
3. Pasileisti programą<br>
