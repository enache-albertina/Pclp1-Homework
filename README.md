******************************************************
Problema 1 - Un produs infinit

####Descriere####
Acest program calculeaza produsul scalar al doua siruri de numere,
determina al doilea cel mai mare numar din fiecare serie si calculeaza
normele vectorilor reprezentati de aceste serii.

####Functionalitati####
- Produsul scalar: Calculeaza produsul scalar pentru cele doua siruri de numere
- Al doilea maxim: Determina al doilea cel mai mare maxim
- Calculul Normelor: calculeaza normele vectorilor a si b

###Input####
- un numar intreg N ce reprezinta numarul de elemente din cei doi vectorilor
- pe urmatoarea linie cele e N elemente intregi, pentru a si N, pentru b

###Output###
- produsul scalar 
- al doilea cel mai mare max din fiecare serie
- normele calculate pentru a si b

###Mod de utilizare###
- complilare program cu gcc
- introduceti N, urmat de cele N elemente pentru a si N elemente pentru b
- retultatele vor fi afisate pe 3 linii pe ecran


******************************************************

Problema 2 - Perfect, ionarea punctajelor

####Descriere####
Acest program calculeaza numarul minim de examene pe care un student trebuie
sa le imbunatateasca pentru a atinge o medie ponderata specificata. Programul
citeste numarul de examene, notele actuale, creditele fiecarui examen si media
ponderata minima dorita. Foloseste un algoritm pentru a determina ce note 
trebuie imbunatatite pentru a maximiza cresterea mediei

####Functionalitati####
Programul va afisa numarul minim de examene care trebuie imbunatatite pentru a
atinge media dorita. Daca nu este posibil sa se atinga media, programul va afisa -1.

####Input####
Programul asteapta urmatoarele intrari de la utilizator:
Numarul total de examene (N).
Notele obtinute la fiecare examen (grades[i]), unde i variaza de la 0 la N-1.
Numarul de credite pentru fiecare examen (credits[i]), unde i variaza de la 0 la N-1.
Media ponderata minima dorita (min_p).

####Output####
Programul va afisa numarul minim de examene care trebuie imbunatatite pentru a atinge 
media dorita. Daca nu este posibil sa se atinga media, programul va afisa -1.
******************************************************

Problema 3 - Gigel si tabla de sah

####Descriere####
Programul descrie posibilitatile lui Gigel de a muta o piesa pe tabla de sah.
Tabla este reprezentat sub forma unei matrici si in cadrul fiecarui patrat se afla 
un numar intreg. Miscarile pe care acesta alege sa le faca depind de culoarea 
patratului pe care se afla: u patratele albe indicand o miscare in aceeasi linie 
si patratele negre indicand o miscare in aceeasi coloana. Programul calculeaza distanta 
totala parcursa de Gigel si pozitia sa finala pe tabla de sah.

####Functionalitati#####
- Avem la dispozitie o functie secundara black_or_white ce stabileste tipul patratului
pe care ne aflam.
- Citim dimensiunile tablei de sah si continutul ei
- deplasam pe tabla si adaugam la distanta valoarea de pe chenar
- tinem cont sa nnu iesim din dimensiunile tablei
- afisam distanta totala si coordonatele finale pe care ne aflam

####Input####
- pe prima linie se citeste un n si nxn elemente ale tablei de sah

###Output###
- pe prima linie distanta totala parcursa de Gigel ca numar intreg lung.
- a doua linie este pozitia finala 

******************************************************

Problema 4 - Nonogram checker

###Descriere###
Acest program este un verificator pentru nonograme, un tip de puzzle logic
similar cu Sudoku. Scopul este de a determina daca o matrice data, colorata
in alb (0) si negru (1), respecta anumite restrictii specificate pentru 
fiecare linie si coloana. Restrictiile definesc numarul si lungimea secventelor
de casute negre pentru fiecare linie si coloana.

###Functionalitate###
Programul efectueaza urmatoarele operatiuni:

Citirea Dimensiunilor si a Restrictiilor: Programul citeste dimensiunile matricei 
(N x M) si restricsiile pentru fiecare linie si coloana. Restrictiile sunt citite sub
forma de numar de grupuri de casute negre si dimensiunile acestora.

Validarea Restrictiilor: Programul verifics dacs matricea dats respects restricsiile 
specificate. Verificarea se face separat pentru fiecare linie si coloans.

Afisarea Rezultatului: Daca matricea respecta toate restrictiile, programul afiseaza
"Corect". Altfel, afiseaza "Eroare".

####Implementare####
Programul implementeaza functii cheie cum ar fi:

matrix_with_zeros: Initializeaza o matrice cu valori de zero.
number_of_restrictions: Calculeaza numarul de restrictii pentru o linie sau coloana data.
restriction: Verifica daca o linie sau coloana respecta restrictiile specificate.


