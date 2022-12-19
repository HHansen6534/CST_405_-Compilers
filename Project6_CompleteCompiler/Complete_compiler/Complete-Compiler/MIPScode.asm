.data
	CHAR: .byte 'c'
	fval: .float 12.650000
.text
main:
# -----------------------
li $v0, 4
la $a0, CHAR
syscall
li $a0, 10
li $v0, 11
syscall

li $t6,2332
move $a0,$t6
li $v0,1   # call code for terminate
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $v0, 2
lwc1 $f12, fval
syscall
li $v0, 10
li $v0, 11
syscall

li $t5,25

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $t5,20

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $t5,15

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $t5,10

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $t5,5

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

li $t5,0

move $a0,$t5
li $v0,1
syscall      # system call (terminate)
li $a0, 10
li $v0, 11
syscall

# -----------------
#  Done, terminate program.

li $v0,10   # call code for terminate
syscall      # system call (terminate)
.end main
