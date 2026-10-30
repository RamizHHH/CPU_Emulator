grammar Rex32;



register_instr:   'ADD'         # Reg_ADD
                | 'SUB'         # Reg_SUB
                | 'AND'         # Reg_AND
                | 'OR'          # Reg_OR
                | 'XOR'         # Reg_XOR
                | 'SHL'         # Reg_SHL
                | 'SHR'         # Reg_SHR
                | 'SAR'         # Reg_SAR
                | 'MUL'         # Reg_Mul
                | 'DIV'         # Reg_DIV
                | 'MOD'         # Reg_MOD
                | 'CMP'         # Reg_CMP
                | 'MOV'         # Reg_MOV
                | 'NOT'         # Reg_NOT
                | 'NEG'         # Reg_NEG
                ;