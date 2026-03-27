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

haveMessage: Son rôle est de permettre de savoir s’il existe un message dans
la file. 