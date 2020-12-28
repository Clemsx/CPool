#!/bin/bash
clear

if [ $# -gt 0 ]
then

	blih -u clement.xia@epitech.eu repository create $1
	blih -u clement.xia@epitech.eu repository setacl $1 
ramassage-tek r
	blih -u clement.xia@epitech.eu repository getacl $1
fi 
