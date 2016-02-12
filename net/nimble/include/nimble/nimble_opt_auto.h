#ifndef H_NIMBLE_OPT_AUTO_
#define H_NIMBLE_OPT_AUTO_

#include "nimble/nimble_opt.h"

/***
 * Automatic options.
 * 
 * These settings are generated automatically from the user-specified settings
 * in nimble_opt.h.
 */

#undef NIMBLE_OPT_ADVERTISE
#define NIMBLE_OPT_ADVERTISE                    \
    (NIMBLE_OPT_ROLE_BROADCASTER || NIMBLE_OPT_ROLE_PERIPHERAL)

#undef NIMBLE_OPT_SCAN
#define NIMBLE_OPT_SCAN                         \
    (NIMBLE_OPT_ROLE_CENTRAL || NIMBLE_OPT_ROLE_OBSERVER)

#undef NIMBLE_OPT_CONNECT
#define NIMBLE_OPT_CONNECT                      \
    (NIMBLE_OPT_ROLE_CENTRAL || NIMBLE_OPT_ROLE_PERIPHERAL)


/** Supported client ATT commands. */

#undef NIMBLE_OPT_ATT_CLT_FIND_INFO
#define NIMBLE_OPT_ATT_CLT_FIND_INFO            (NIMBLE_OPT_GATT_DISC_ALL_DSCS)

#undef NIMBLE_OPT_ATT_CLT_FIND_TYPE
#define NIMBLE_OPT_ATT_CLT_FIND_TYPE            (NIMBLE_OPT_GATT_DISC_SVC_UUID)

#undef NIMBLE_OPT_ATT_CLT_READ_TYPE
#define NIMBLE_OPT_ATT_CLT_READ_TYPE            \
    (NIMBLE_OPT_GATT_FIND_INC_SVCS ||           \
     NIMBLE_OPT_GATT_DISC_ALL_CHRS ||           \
     NIMBLE_OPT_GATT_DISC_CHRS_UUID ||          \
     NIMBLE_OPT_GATT_READ_UUID)
    
#undef NIMBLE_OPT_ATT_CLT_READ
#define NIMBLE_OPT_ATT_CLT_READ                 \
    (NIMBLE_OPT_GATT_READ ||                    \
     NIMBLE_OPT_GATT_READ_LONG ||               \
     NIMBLE_OPT_GATT_FIND_INC_SVCS)

#undef NIMBLE_OPT_ATT_CLT_READ_BLOB
#define NIMBLE_OPT_ATT_CLT_READ_BLOB            (NIMBLE_OPT_GATT_READ_LONG)

#undef NIMBLE_OPT_ATT_CLT_READ_MULT
#define NIMBLE_OPT_ATT_CLT_READ_MULT            (NIMBLE_OPT_GATT_READ_MULT)

#undef NIMBLE_OPT_ATT_CLT_READ_GROUP_TYPE
#define NIMBLE_OPT_ATT_CLT_READ_GROUP_TYPE      \
    (NIMBLE_OPT_GATT_DISC_ALL_SVCS)

#undef NIMBLE_OPT_ATT_CLT_WRITE
#define NIMBLE_OPT_ATT_CLT_WRITE                (NIMBLE_OPT_GATT_WRITE)

#undef NIMBLE_OPT_ATT_CLT_WRITE_NO_RSP
#define NIMBLE_OPT_ATT_CLT_WRITE_NO_RSP         (NIMBLE_OPT_GATT_WRITE_NO_RSP)

#undef NIMBLE_OPT_ATT_CLT_PREP_WRITE
#define NIMBLE_OPT_ATT_CLT_PREP_WRITE           (NIMBLE_OPT_GATT_WRITE_LONG)

#undef NIMBLE_OPT_ATT_CLT_EXEC_WRITE
#define NIMBLE_OPT_ATT_CLT_EXEC_WRITE           (NIMBLE_OPT_GATT_WRITE_LONG)

#undef NIMBLE_OPT_ATT_CLT_NOTIFY  
#define NIMBLE_OPT_ATT_CLT_NOTIFY               (NIMBLE_OPT_GATT_NOTIFY)

#undef NIMBLE_OPT_ATT_CLT_INDICATE
#define NIMBLE_OPT_ATT_CLT_INDICATE             (NIMBLE_OPT_GATT_INDICATE)

#endif
