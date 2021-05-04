all: mergealphaMain.c mergealphaFuntion.o mergeintMain.c mergeintFuntion.o quickintMain.c quickintFuntion.o quickalphaMain.c quickalphaFuntion.o radixintMain.c radixintFuntion.o radixalphaMain.c radixalphaFuntion.o
		gcc mergealphaMain.c mergealphaFuntion.o -o mergealpha
		gcc mergeintMain.c mergeintFuntion.o -o mergeint
		gcc quickintMain.c quickintFuntion.o -o quickint
		gcc quickalphaMain.c quickalphaFuntion.o -o quickalpha
		gcc radixintMain.c radixintFuntion.o -o radixint
		gcc radixalphaMain.c radixalphaFuntion.o -o radixalpha

mergeintFuntion.o: mergeintFuntion.c mergeint.h
		gcc -c mergeintFuntion.c -o mergeintFuntion.o

quickintFuntion.o: quickintFuntion.c quickint.h
		gcc -c quickintFuntion.c -o quickintFuntion.o

quickalphaFuntion.o: quickalphaFuntion.c quickalpha.h
		gcc -c quickalphaFuntion.c -o quickalphaFuntion.o

mergealphaFuntion.o: mergealphaFuntion.c mergealpha.h
		gcc -c mergealphaFuntion.c -o mergealphaFuntion.o

radixintFuntion.o: radixintFuntion.c radixint.h
		gcc -c radixintFuntion.c -o radixintFuntion.o

radixalphaFuntion.o: radixalphaFuntion.c radixalpha.h
		gcc -c radixalphaFuntion.c -o radixalphaFuntion.o

clean:
		rm -f mergealphaFuntion.o mergealpha
		rm -f mergeintFuntion.o mergeint
		rm -f quickintFuntion.o quickint
		rm -f quickalphaFuntion.o quickalpha
		rm -f radixintFuntion.o radixint
		rm -f radixalphaFuntion.o radixalpha
