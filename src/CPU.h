#ifndef CPU_H
#define CPU_H

#include <string>

struct PIPELINE_STAGE{
    int INSTRUCTION_FETCH;
    int INSTRUCTION_DECODE;
    int EXECUTE;
    int MEMORY;
    int WRITE_BACK;
};

#endif  // CPU_H