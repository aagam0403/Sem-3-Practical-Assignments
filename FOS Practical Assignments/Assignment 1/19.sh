ls -l > fir
chmod +x fir

if [ -r fir ]
then
echo "The file has read access"
else
echo "The file doesn't have read access"
fi

if [ -w fir ]
then
echo "The file has write access"
else
echo "The file does not have write access"
fi

if [ -x fir ]
then
echo "The file have execute permission"
else
echo "The file does not have execute permission"
chmod +x fir
fi

