#!/bin/bash
git init
git add .
echo "Enter the commit(if you want automatically, type \"Auto\")"
read input_commit
if [ ${input_commit} == "Auto" ] ; then
  git commit -m "$(date) Up-to-Date"
else
  git commit -m "${input_commit}"
fi
echo "Enter the git repos"
read input_repos
git remote remove origin
git remote add origin "${input_repos}"
git push origin +master
pause