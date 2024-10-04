echo -n "Enter the command to locate: "
read command

echo "Binary file:"
which "$command"

echo "Source file:"
type -p "$command"

echo "Manual page:"
man -w "$command"

