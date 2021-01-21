# Assignments
tASK 1.1) Create a new file readme.md with your details and create a new git repo and commit it.

1. mkdir Assignments
2. cd Assignmets
3. git init
4. touch README.md  //------> create a file
5. git add .
6. git commit -m "task 1 done"


--------------------------------------------------------------------------------------------------------------------------------------------

TASK 1.2) create a file with method add(a,b) which will output the addition of two integers and push it with a proper commit message.
commands:----------------------------------------------
root@suswap98:/home/suswap98/Desktop/Assignments# gedit add.c
root@suswap98:/home/suswap98/Desktop/Assignments# git status
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)

	add.c

no changes added to commit (use "git add" and/or "git commit -a")
root@suswap98:/home/suswap98/Desktop/Assignments# git add .
root@suswap98:/home/suswap98/Desktop/Assignments# git commit -m "push addition.c file having add(a,b) function"
[main e08bc17] push addition.c file having add(a,b) function
 2 files changed, 31 insertions(+), 1 deletion(-)
 rewrite README.md (100%)
 create mode 100644 add.c
root@suswap98:/home/suswap98/Desktop/Assignments# git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
root@suswap98:/home/suswap98/Desktop/Assignments# git log
commit e08bc17c813d198774420281583f38f36a1720c1 (HEAD -> main)
Author: Sooraj Gaikwad <suraj.gaikwad@cuelogic.com>
Date:   Wed Jan 20 19:52:33 2021 +0530

    push addition.c file having add(a,b) function

commit 2db77786df58a828daa841c274e89bce1a9d86ea (origin/main, origin/HEAD)
Author: sooraj713 <62977115+sooraj713@users.noreply.github.com>
Date:   Wed Jan 20 19:41:49 2021 +0530

    Initial commit
-----------------------------------------------------------------------------------------------------------------------------------------------


Task 1.3)
3) Create 3 separate environments as Production, Staging, and Development from the base branch and push those as well.	


process:---

root@suswap98:/home/suswap98/Desktop/Assignments# git branch
* main
root@suswap98:/home/suswap98/Desktop/Assignments# git checkout -b Production
M	README.md
Switched to a new branch 'Production'
root@suswap98:/home/suswap98/Desktop/Assignments# git checkout -b Staging
M	README.md
Switched to a new branch 'Staging'
root@suswap98:/home/suswap98/Desktop/Assignments# git checkout -b Development
M	README.md
Switched to a new branch 'Development'
root@suswap98:/home/suswap98/Desktop/Assignments# git branch
* Development
  Production
  Staging
  main
root@suswap98:/home/suswap98/Desktop/Assignments# git checkout master
error: pathspec 'master' did not match any file(s) known to git.
root@suswap98:/home/suswap98/Desktop/Assignments# git status
On branch Development
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   README.md

no changes added to commit (use "git add" and/or "git commit -a")
root@suswap98:/home/suswap98/Desktop/Assignments# git add .
root@suswap98:/home/suswap98/Desktop/Assignments# git commit -m "task 1.2"
[Development bd5ce21] task 1.2
 1 file changed, 60 insertions(+), 18 deletions(-)
 rewrite README.md (60%)
root@suswap98:/home/suswap98/Desktop/Assignments# push origin Production

Command 'push' not found, did you mean:

  command 'pwsh' from snap powershell (7.1.1)
  command 'pdsh' from deb pdsh
  command 'rush' from deb rush
  command 'ppsh' from deb ppsh
  command 'posh' from deb posh

See 'snap info <snapname>' for additional versions.

root@suswap98:/home/suswap98/Desktop/Assignments# git push origin Production
Username for 'https://github.com': soorajgaikwad713@gmail.com
Password for 'https://soorajgaikwad713@gmail.com@github.com': 
Counting objects: 4, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 682 bytes | 682.00 KiB/s, done.
Total 4 (delta 0), reused 0 (delta 0)
remote: 
remote: Create a pull request for 'Production' on GitHub by visiting:
remote:      https://github.com/sooraj713/Assignments/pull/new/Production
remote: 
To https://github.com/sooraj713/Assignments.git
 * [new branch]      Production -> Production
root@suswap98:/home/suswap98/Desktop/Assignments# git push origin Staging
Username for 'https://github.com': soorajgaikwad713@gmail.com
Password for 'https://soorajgaikwad713@gmail.com@github.com': 
Total 0 (delta 0), reused 0 (delta 0)
remote: 
remote: Create a pull request for 'Staging' on GitHub by visiting:
remote:      https://github.com/sooraj713/Assignments/pull/new/Staging
remote: 
To https://github.com/sooraj713/Assignments.git
 * [new branch]      Staging -> Staging
root@suswap98:/home/suswap98/Desktop/Assignments# git push origin Development
Username for 'https://github.com': soorajgaikwad713@gmail.com
Password for 'https://soorajgaikwad713@gmail.com@github.com': 
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 1.11 KiB | 1.11 MiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
remote: 
remote: Create a pull request for 'Development' on GitHub by visiting:
remote:      https://github.com/sooraj713/Assignments/pull/new/Development
remote: 
To https://github.com/sooraj713/Assignments.git
 * [new branch]      Development -> Development

--------------------------------------------------------------------------------------------------------------------------------------------------------------

TASK 2.1)Now you have set up all the branches for environments. We'll do a workflow of how we use git in our daily practice.

1) Make a new feature branch from the development environment feature for the card# GIT-001 (introduce subtraction method subtract(a,b) ). and implement that in the feature branch and push those changes to git.


step1---> make a new feature branch under Development branch named as GIT-001
step2---> add substraction code
step3 ---> commit the changes 
step4----> merge GIT-001 to Development and development with main branch 

---------------------------------------------------------------------------------

2)2) Make a new feature branch from the development environment feature for the card# GIT-002 (introduce multiplication method multiply(a,b) ). and implement that in the feature branch and push those changes to git.


step1---> make a new feature branch under Development branch named as GIT-002
step2---> add multiplication code
step3 ---> commit the changes 
step4----> merge GIT-002 to Development and development with main branch 

---------------------------------------------------------------------------------

3) merge feature GIT-001 that to development branch with using pull request and follow your branching and merging process and merge it.
4) Merge dev branch to staging branch via Pull reques
step1--> merged Development branch to Main branch 
step2---> push all changes o github

----------------------------------------------------------------------------------

5)5) Create a new release tag from the staging branch after merging and push it.


step1---> created one release tag named as v.1.0 and push it on git

git tag v.1.0
git push origin v.1.0


----------------------------------------------------------------------------------------------

TASK 3)
1) After you change to the QA staging branch the requested that for subtask, they do not want negative output, so make changes that the negative number is always gets converted to a positive integer and return it. Make a hotfix branch and create a pull request of it and merge it back.
	step1--->create a hostfix1 branch

	1) git checkout -b Hostfix1 main
	2) git gedit add.c                 // for adding new feature like non negative no
	3) git add .
	4) git commit -m "Hotfix1 added feature of non negative no"
	5) git checkout main
	6) git merge main Hotfix1

1.5) Create a tag of the hotfix on the staging branch and push it.
	1) git tag v.1.1
	2) git push origin
	
	

2) merge feature GIT-002 that to development branch using pull request and follow your branching and merging process and merge it.
 
	1) git checkout Development
	2) git merge development GIT-002
	
2.5) (If conflicts arrive in PR, solve those conflicts, and then create the PR). Make sure all the old methods are their code is present and also after the merge code of GIT-002 is there in the staging branch.   
	1) conflict occurs in my case i resolved it manually 
	
	
3) merge development to staging and Create a new release tag from the staging branch after merging, if conflicts arrives, please solve them and merge dev to staging via Pull request.
	
	1) git checkout Staging
	2)git merge Staging Development
		Updating e08bc17..977fd54
		Fast-forward
		 README.md | 136 		+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++---
		 add.c     |  11 ++++++++---
		 mul.c     |  12 ++++++++++++
		 3 files changed, 153 insertions(+), 6 deletions(-)
		 create mode 100644 mul.c
	3) git push
	
	
==================================================================================================================================================

TASK 4:

1) The client now doesn't want the last release (GIT-002) and wants to remove it. Rollback your staging branch to the previous version(without GIT-002) and verify that it is removed.
