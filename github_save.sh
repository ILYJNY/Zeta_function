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

echo "Type a type(repos or project and username)"
read choice

if [ ${choice} == "repos" ] ; then

  echo "Enter the git repos"
  read input_repos

else

  echo "Enter the User name(if you are setted, type \"Auto\""
  read input_username
  if [ ${input_username} == "Auto" ] ; then
    input_username=${setted_name}
  else
    pass

  fi
  echo "Enter the Project name"
  read project_name
  input_repos=https://github.com/${input_username}/${project_name}.git


fi
git remote remove origin
git remote add ${input_repos}
git push origin +master
pause