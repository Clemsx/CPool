#!/bin/bash
clear

sed -n '1~2p' | cut -d: -f 1 | rev | sort -r | sed -n '24,42p' | tr '\n' 
',' | sed 's/,$/.\n/g' | sed 's/,/, /g'
