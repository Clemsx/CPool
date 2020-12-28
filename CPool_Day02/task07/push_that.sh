#!/bin/bash
clear

mv * /home/clemsx/delivery/CPool_Day02
git add --all
git commit -m "Adding new task"
git push origin master
git log

