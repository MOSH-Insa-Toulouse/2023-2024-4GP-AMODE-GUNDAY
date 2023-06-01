# 2023-2024-AMODE-GUNDAY

## Projet capteur 2022-2023
Projet Capteur
<p style="color: red; font-weight: bold">>>>>>  gd2md-html alert:  ERRORs: 0; WARNINGs: 1; ALERTS: 15.</p>
<ul style="color: red; font-weight: bold"><li>See top comment block for details on ERRORs and WARNINGs. <li>In the converted Markdown or HTML, search for inline alerts that start with >>>>>  gd2md-html alert:  for specific instances that need correction.</ul>

<p style="color: red; font-weight: bold">Links to alert messages:</p><a href="#gdcalert1">alert1</a>
<a href="#gdcalert2">alert2</a>
<a href="#gdcalert3">alert3</a>
<a href="#gdcalert4">alert4</a>
<a href="#gdcalert5">alert5</a>
<a href="#gdcalert6">alert6</a>
<a href="#gdcalert7">alert7</a>
<a href="#gdcalert8">alert8</a>
<a href="#gdcalert9">alert9</a>
<a href="#gdcalert10">alert10</a>
<a href="#gdcalert11">alert11</a>
<a href="#gdcalert12">alert12</a>
<a href="#gdcalert13">alert13</a>
<a href="#gdcalert14">alert14</a>
<a href="#gdcalert15">alert15</a>

<p style="color: red; font-weight: bold">>>>>> PLEASE check and correct alert issues and delete this message and the inline alerts.<hr></p>


**Projet Capteur**

SOMMAIRE


[TOC]



# Introduction

Dans le cadre de l'UF "du capteur au banc de test" en 4ème année Génie Physique à l'INSA Toulouse, nous devions réaliser un capteur low-tech à base de graphite. Notre projet se base sur ce papier scientifique dont le but était de mesurer la résistance d’un capteur low-tech à base de graphite et déterminer son évolution au cours du temps en fonction de sa déformation. 

Ce répertoire comporte l’ensemble des étapes de réalisation.  


# Circuit électronique 

Le capteur que nous souhaitons utiliser pour ce projet est alimenté en 5V a une résistance de quelques dizaines megohms qui rend une mesure directe d’un courant de l’ordre 1 nA assez difficile avec les outils conventionnels. Ainsi il est nécessaire de passer par un circuit amplificateur. Pour cela nous avons utilisé un circuit de l'amplificateur transimpédance à  2 étages. 

Nous avons également utilisé 3 filtres pour réduire le bruit au maximum. Le schéma est présenté ci-dessous:



<p id="gdcalert1" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image1.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert2">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image1.png "image_tooltip")


• R5 en entrée protège l'ampli opérationnel contre les décharges électrostatiques (il sera remplacé par notre capteur graphite)

• C1 avec R1 forme un filtre pour le bruit en courant 

• R2 pour une adaptation du calibre 

• C4 avec R3 forme un filtre actif 

• C2 avec R6 forme le filtre de sortie 

• C3 filtre le bruit d'alimentation (pour l'Arduino ce condensateur ne sera pas nécessaire)  

Le signal de la sortie en fonction de la résistance R5 s'écrit:



<p id="gdcalert2" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image2.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert3">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image2.png "image_tooltip")



## Etude des filtres

Si nous ne mettons aucun filtres, nous obtiendrons la réponse suivante:



<p id="gdcalert3" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image3.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert4">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image3.png "image_tooltip")


**Visualisation mesure filtre R1C1**



<p id="gdcalert4" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image4.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert5">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image4.png "image_tooltip")


**Visualisation mesure filtre R3C4**



<p id="gdcalert5" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image5.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert6">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image5.png "image_tooltip")


**Visualisation mesure filtre R6C2**



<p id="gdcalert6" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image6.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert7">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image6.png "image_tooltip")
 


## Modélisation du capteur: 



<p id="gdcalert7" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image7.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert8">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image7.png "image_tooltip")



## Schema complet: 



<p id="gdcalert8" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image8.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert9">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image8.png "image_tooltip")



# KICAD

Nous avons utilisé le logiciel KICAD pour la réalisation de notre PCB. 



<p id="gdcalert9" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image9.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert10">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image9.png "image_tooltip")
 

**Schématique et empreinte des composants que nous avons dû modéliser: **



<p id="gdcalert10" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image10.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert11">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image10.png "image_tooltip")




<p id="gdcalert11" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image11.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert12">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image11.png "image_tooltip")


**Notre PCB:**



<p id="gdcalert12" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image12.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert13">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image12.png "image_tooltip")



## **Photo du circuit**



<p id="gdcalert13" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image13.jpg). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert14">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image13.jpg "image_tooltip")



# Le programme Arduino

Le programme Arduino permet de lire les valeurs de tension du capteur graphite et du capteur flex et de les envoyer par bluetooth. Il permet également d'ajuster le gain en recevant une valeur de l'application. 


# Application bluetooth

L'application à été développée avec le logiciel MIT App Inventor. Elle est dotée de fonctionnalités suivantes:



* Affichage de la résistance du capteur et du flex sensor
* Modification du gain du circuit
* Affichage de la datasheet


# Banc de test

L’objectif de ce banc de test est de déterminer la variation relative de résistance de notre capteur en fonction de la déformation appliquée. À l'aide d'une imprimante 3D, nous avons créé notre bande de test. Ensuite nous avons utilisé notre banc de test pour mesurer la résistance en fonction de la déformation.



<p id="gdcalert14" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image14.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert15">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image14.png "image_tooltip")




<p id="gdcalert15" ><span style="color: red; font-weight: bold">>>>>>  gd2md-html alert: inline image link here (to images/image15.png). Store image on your image server and adjust path/filename/extension if necessary. </span><br>(<a href="#">Back to top</a>)(<a href="#gdcalert16">Next alert</a>)<br><span style="color: red; font-weight: bold">>>>>> </span></p>


![alt_text](images/image15.png "image_tooltip")


D'après nos tests nous constatons que notre capteur donne des résultats acceptables.


# Datasheet

Pour la datasheet nous avons été inspirés par Texas Industries. 


# Discussions 

Ce projet nous a sensibilisé sur les technologies low-tech. Ces technologies écoresponsables et moins coûteuses peuvent devenir une alternative aux méthodes conventionnelles. Nous faire prendre conscience de cette démarche dès la 4ème année du cursus d’ingénieur nous aidera dans nos futurs métiers.  


# Ameliorations 

Lors de nos tests, nous avons remarqué que les capteurs n'étaient pas durables. Il serait intéressant d'effectuer des tests avec d’autres types de papier. 


# Remerciements

Nous souhaitons remercier le département de Génie Physique de l’INSA de Toulouse de nous avoir offert la chance de réaliser ce projet complet d’un capteur: de son développement jusqu’à sa caractérisation. Nous tenons tout particulièrement à remercier Jérémie Grisolia et Cathy Crouzet qui nous ont apporté leur aide pour mener à bien ce projet. 
