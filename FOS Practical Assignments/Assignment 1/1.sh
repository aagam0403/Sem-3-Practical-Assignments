echo "Display Hidden Files"
ls -a

echo "Delete Directory With Files"
mkdir 1example
cd 1example
touch 1.txt
ls
rm 1.txt
cd ..
rmdir 1example
ls

echo "2 Functionality of mv Command"
mkdir 2example
cd 2example
mkdir 1
mkdir 2
ls
mv 1 2
ls
