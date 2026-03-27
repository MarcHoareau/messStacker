# TP1 – File par tableau circulaire

## Intro

L’objectif de ce sujet est de concevoir une librairie nommée MessStacker permettant de gérer une file (une pile FIFO) de messages.

Quand a l'arborescence la voici:
- messStacker
    - build (code en c)
        - ...
    - src (librairie)
        - messStacker.c
        - messStacker.h
        - messStacker.o
    - test (fichier de test)
        - ...
    - Makefile
    - README.md

Ce projet est disponible a https://github.com/MarcHoareau/messStacker.git

## L'API

haveMessage: Son rôle est de permettre de savoir s’il existe un message dans la file. 

checksumMessage: Cette fonction sert à calculer un checksum sur les valeurs cmd et data qui lui sont fournies en argument.

sendMessage: Son action est de placer le message décrit en argument dans la file.

curMessageCmd, curMessageSize, et curMessageChecksum: Leurs rôles consistent à fournir respectivement les valeurs cmd, size et checksum du message courant.

curMessageData: Elle doit remplir le tableau buff donné en argument avec les n premières cases du tableau data du message courant (n étant la valeur size du message courant). Puis, après avoir fait ça, elle retourne true.