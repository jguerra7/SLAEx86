# SLAEx86 : Student ID: PA-1191
### Assignment 1
Create a Shell Bind TCP Shellcode
- Binds to a port
- Execs shell on incoming connection

Port number should be easily configurable

### Assignment 2
Create a Shell Reverse Tcp Shellcode
- Reverse connect to configured IP and Port
- Execs shell on incoming connection
IP and Port should be easily configurable

### Assignment 3
Study about Egg Hunter Shellcode
Create a working demo of the Egg Hunter
Should be configurable for different payload

### Assignment 4
Create a custom encoding scheme  like "Insertion Encoder" we showed you
Poc using execve-stack as the shellcode to encode your schema and execute

### Assignment 5
Take up at least 3 shellcode sample created using Msfpayload for linux/x86
Use GDB/Ndisasm/Libemu to dissect the functionality of the shellcode
Present your analysis
```
As msfpayload is outdate, all the payloads are created using msfvenom
1. Analysis of linux/x86/adduser shellcode
2. Analysis of linux/x86/chmod shellcode
3. Analysis of linux/x86/exec shellcode

Blog : https://oxhat.blogspot.com/2019/04/analyzing-shellcode.html
```
### Assignment 6
Take upto 3 shellcode from shell-storm and create a polymorphic versions of them to beat patten matching
The polymorphic versions cannot be larger 150% of the existing shellcode
Bonus point for making it shorter in length than original
```
1. Implemented 2 polmorphic versions of exit() shellcode 
2. Implmented polymorphic version of cat /etc/password shellcode
3. Implemented a polymorphic and obfuscated version of commandline netcat 

Blog : https://oxhat.blogspot.com/2019/04/polymorphic-shellcodes.html
```
### Assignment 7
Create a custom crypter like the one shown in "crypters" video.
Free to use any existing encryption schema.
Can use any programming language.
```
1. Implemented a crypter with encrytion based on one time pad.

Blog : https://oxhat.blogspot.com/2019/04/coding-custom-crypter.html 
```
### Additional Assignments
```
1. Implemented a shellcode for chdir() 
```
### Scripts
```
1. Implmented a bash automation script to generate shellcode from binary
usage: dump.sh binary
There is also an extended version of this inside the same directory.
Sometimes the script does not dump all the shellcode properly so the extended version is used.

2. Implemented an automation script to generate a C code with an embedded shellcode inside it.
usage : python shellcode_template.py filename.c "\x41\x41\x41x\41"
```
