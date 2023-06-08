# V1.1
V1.1 Programos veikimo principas padarytas pagal V1.0 versiją<br>
V1.1 Pridėtas programos veikimas naudojant "Klases"<br>
V1.1 Pridėta laiko analizė naudojant skirtingus kompiliatoriaus optimizavimo flag'us<br>
(Laikai lentelėje pateikiami sekundėmis)

<table>
<thead>
  <tr>
    <th>Flags-&gt;</th>
    <th colspan="2">01</th>
    <th colspan="2">02</th>
    <th colspan="2">03</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td></td>
    <td>STRUCT</td>
    <td>CLASS</td>
    <td>STRUCT</td>
    <td>CLASS</td>
    <td>STRUCT</td>
    <td>CLASS</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.035</td>
    <td>0.034</td>
    <td>0.037</td>
    <td>0.033</td>
    <td>0.032</td>
    <td><b>0.031</b></td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>0.375</td>
    <td>0.378</td>
    <td>0.398</td>
    <td>0.386</td>
    <td><b>0.369</b></td>
    <td>0.409</td>
  </tr>
</tbody>
</table>

<i>Išvada:</i> didžiausią skirtumą duoda kompiliatoriaus flag'ai<br>
<i>Išvada:</i> Su mažesniais kiekiais tendencingai matosi, kad naudojant Class vietoj struct, daugelį atvejų programa suveikė greičiau<br>
<i>Išvada:</i> Su didesniais kiekiais to paties negalima pasakyti<br>
# V1.2
V1.2 Pridėti pakeitimai naudojantis "Rule of Three"<br>
V1.2 Pridėtas 'copy constructor'<br>
V1.2 Pridėtas 'copy assignment operator'<br>
V1.2 Pridėtas destruktorius<br>

# V1.5
V1.5 Pridėta bazinė klasė "Žmogus"<br>
V1.5 Iš žmogaus klasės išvesta klasė "StudentasClass"<br>
V1.5 "Žmogus" klasė padaryta abstrakti

# V2.0
V2.0 Sugeneruota dokumentacija su doxygen įrankiu<br>
V2.0 Pridėti komentarai funkcijoms
