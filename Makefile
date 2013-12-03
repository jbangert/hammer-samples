
LDFLAGS+=-lhammer 
CFLAGS+=-std=gnu99 -ggdb


all: dns base64 base64_sem1 base64_sem2

dns: dns.c rr.c dns_common.c
base64: base64.c
base64_sem1: base64_sem1.c
base64_sem2: base64_sem2.c 
