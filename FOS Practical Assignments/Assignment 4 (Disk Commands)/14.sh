echo "CREATING A TAR TO HOLD MULTIPLE FOLDER"
tar -cvf archive.tar Q14.1 Q14.2
echo "MAKING TAR EXECUTABLE"
chmod +x archive.tar
echo "CONTENTS OF TAR FILE"
tar -tvf archive.tar
