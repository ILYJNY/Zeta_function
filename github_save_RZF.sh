#!/bin/bash
git init
git add .
setted_name="ILYJNY"
echo "Enter the commit(if you want automatically, type \"Auto\")"
read input_commit
if [ ${input_commit} == "Auto" ] ; then
  git commit -m "$(date) Up-to-Date"
else
  git commit -m "${input_commit}"
fi
git remote remove origin
git remote add origin https://github.com/ILYJNY/Zeta_function.git
git push origin +master
pause