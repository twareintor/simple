Use 'loadData()' function to get data into the buffer 'pData' from a specific file.
If a file is not specified (null pointer) or does not exists the result is undefined.
If 'pData' points to an invalid address or zero, will be set. Don't forget in the client
code to cast the address of this data to a 'void**' type. You will get the data and the
size of the data read from the file (the size of the file got with SEEK_END) - if the
'seek()' and/ or 'rewind()' operation cannot be performed or the result is undefined.
The function doesn't check if the file is readable nor another access parameters.


Use 'dropData()' to clear the memory stored in the 'pData' after saving its content in
the file name 'szFNm'. The program doesn't check if the file were created; if not, the
result and behavoiur of th program is undefined. Doesn't check for any read/ write 
permissions on the media. 
You can use 'free()' function instead of 'dropData()' if you don't want the processed
data to be saved, but you have to if you don't call 'dropData()' as the 'pData' is
loaded with 'malloc()' in the 'loadData()' function.

The usage in the client code is exemplified in the 'main.c' - see the exit function.

The data in the 'data.dat' and 'data2.dat' are dummy binary data with no connection.