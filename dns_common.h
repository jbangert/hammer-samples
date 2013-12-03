#ifndef HAMMER_DNS_COMMON__H
#define HAMMER_DNS_COMMON__H
#include <hammer/hammer.h>
#include <hammer/glue.h>


HParser* init_domain();
HParser* init_character_string();

HParsedToken* act_index0(const HParseResult *p, void* user_data);

#endif
