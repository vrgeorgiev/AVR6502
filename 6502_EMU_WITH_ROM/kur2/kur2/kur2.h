//void (*addrtable[256])(void);
//static void (*optable[256])();

static uint16_t getvalue();
static void putvalue(uint16_t saveval);

uint8_t read6502(uint16_t address);
void write6502(uint16_t address, uint8_t value);

uint8_t* s_memory6502; //[65536];