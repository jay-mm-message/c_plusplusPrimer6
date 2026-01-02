
FILE_NAME=$1

if [ -e a.out ];then
	rm a.out
fi

if [ $FILE_NAME != "" ]; then
	g++ $FILE_NAME
	./a.out
fi
