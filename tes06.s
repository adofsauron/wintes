.data
wd : .string "fuck\n"
len = .-wd

.text
.globl  _start

_start:
	movl $wd, %edx
	movl $len, %ecx
	movl $1, %ebx
	movl $4, %eax
	int $0x80

	movl $1, %eax
	int $0x80
