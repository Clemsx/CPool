#!/bin/bash
clear
if [ $# -gt 0 ]
	 then
		 cut -d ";" -f 3 | grep -c "$1"


elif [ $# -ge 0 ]
	then
		wc -l

fi

