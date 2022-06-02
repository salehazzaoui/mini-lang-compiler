flex lang.l
bison -d lang.y
gcc lex.yy.c lang.tab.c TS.c RS.c Quad.c asm.c -o project
./project