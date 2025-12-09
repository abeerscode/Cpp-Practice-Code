# Only once for the first commit in a new repository

1. git init --> Initialize Git (if not already)
2. git add . --> Add all files in the folder
3. git commit -m "Initial commit" --> Commit your files
4. git branch -M main --> Rename your local branch to 'main'
5. git remote add origin https://github.com/githubUsername/FileName.git --> Add your GitHub remote
6. git push -u origin main --> Push your code to GitHub

# Commit and Push

1. git add.
2. git commit -m "comments"
3. git push origin main

#Check linked Repositor --> git remote -v

#Delete file from Git --> git rm filename

#Delete folder from Git --> git rm -r foldername

#Delete from Git, keep locally --> git rm --cached filename / git rm -r --cached foldername

#Commit deletion --> git commit -m "Delete ..."

#Push to remote --> git push

#Update repo --> git pull

#Always clone your GitHub repo instead of manually creating a folder: git clone https://github.com//.git

#run command

1.  g++ FileName.cpp -o FileName
2.  ./FileName
