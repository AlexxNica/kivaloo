# Used by Makefile code which generates POSIX Makefiles
.for X in ${SRCS}
source-${X:.c=.o}: ${X}
	@echo $>
cflags-${X:.c=.o}:
.endfor

# Defaults for all kivaloo code
WARNS	?=	3

# Use POSIX standard
CFLAGS	+=	-D_POSIX_C_SOURCE=200809L -D_XOPEN_SOURCE=700

# Make logic (bits which are separated out in individual Makefiles).
CFLAGS	+=	${IDIRS}
LDADD	+=	${LDADD_REQ}
