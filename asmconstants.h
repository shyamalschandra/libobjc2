#ifdef __LP64__
#define DTABLE_OFFSET  64
#define SMALLOBJ_MASK  7
#define SHIFT_OFFSET   0
#define DATA_OFFSET    8
#define SLOT_OFFSET    32
#else
#define DTABLE_OFFSET  32
#define SMALLOBJ_MASK  1
#define SHIFT_OFFSET   0
#define DATA_OFFSET    8
#define SLOT_OFFSET    16
#endif
