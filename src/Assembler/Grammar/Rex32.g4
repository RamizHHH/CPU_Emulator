

grammar Rex32;

file: imm_stat* EOF;


imm_stat : imm_instr COMMA REG COMMA REG COMMA INT;

reg_instrs : ADD | SUB | AND | OR | XOR | SHL | SHR | SAR | MUL | DIV | MOD | CMP | MOV | NOT | NEG ;
imm_instr : ADDI | SUBI | ANDI | ORI | XORI | SHLI | SHRI | SARI | CMPI | MOVI ;
l_and_s_intr : LD | LDH | LDB | LDUH | LDUB | ST | STH | STB ;
branch_instr : BEQ | BNE| BLT| BGE| BLTU| BGEU;
jmp_instr : JMP | JAL | JALR ;
ret_instr : RET;



// Lexer Rules

REG : [r]INT;
INT : [0-9]+;


//Keywords

COMMA : ',';

// Register Instr

ADD : 'ADD';
SUB : 'SUB';
AND : 'AND';
OR : 'OR';
XOR : 'XOR';
SHL : 'SHL';
SHR : 'SHR';
SAR : 'SAR';
MUL : 'MUL';
DIV : 'DIV';
MOD : 'MOD';
CMP : 'CMP';
MOV : 'MOV';
NOT : 'NOT';
NEG : 'NEG';

// Immediate Instr

ADDI : 'ADDI';
SUBI : 'SUBI';
ANDI : 'ANDI';
ORI : 'ORI';
XORI : 'XORI';
SHLI : 'SHLI';
SHRI : 'SHRI';
SARI : 'SARI';
CMPI : 'CMPI';
MOVI : 'MOVI';

// Load and Store

LD : 'LD';
LDH : 'LDH';
LDB : 'LDB';
LDUH : 'LDUH';
LDUB : 'LDUB';
ST : 'ST';
STH : 'STH';
STB : 'STB';

// Branching

BEQ : 'BEQ';
BNE : 'BNE';
BLT : 'BLT';
BGE : 'BGE';
BLTU : 'BLTU';
BGEU : 'BGEU';

// Jumps
JMP : 'JMP';
JAL : 'JAL';
JALR : 'JALR';

// Returns
RET : 'RET';

COMMENT : '//' ~[\r\n]* -> skip;