MAKEFILES = $(shell find examples -name "*.mak")
ROOT = $(PWD)

.PHONY: all clean 

all:
	@for file in $(MAKEFILES); \
	do \
		$(MAKE) -w -C $$(dirname $${file}) -f $$(basename $${file}); \
	done

clean:
	@for file in $(MAKEFILES); \
	do \
		$(MAKE) -w -C $$(dirname $${file}) -f $$(basename $${file}) clean; \
	done
