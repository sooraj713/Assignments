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

