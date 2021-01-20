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
