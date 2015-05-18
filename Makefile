all:
	gcc dgemm.c -o dgemm -lblas -llapack --std=c99
