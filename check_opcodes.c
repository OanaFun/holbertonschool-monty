#include "monty.h"

/**
 * 
*/

void (*check_opcodes(void))(stack_t **, unsigned int)
{
    int i = 0;
    int j;
    int valid_opcode;
    int len_opcode;

    instruction_t opcodes[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
    };

    while (opcodes[i])
    {
        j = 0;
        valid_opcode = 1;
        len_opcode = strlen(opcodes[i].opcode);

        while (j < len_opcode)
        {
            if (opcodes[i].opcode[j] != buff[j])
            {
                valid_opcode = 0;
                break;
            }
            j++;
        }
        if (valid_opcode == 1 && (buff[j] == '\n' || buff[j] == ' ' || buff[j] == '\0'))
            break;
        i++;
    }
    return (opcodes[i].f);
}
