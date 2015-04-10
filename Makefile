MAKEFILES = $(shell find examples -name "*.mak")

.PHONY: all clean 

# $(call maketarget[,clean])
define maketarget
 for file in $(MAKEFILES); \
 do \
 	$(MAKE) -w -C $$(dirname $${file}) -f $$(basename $${file}) $1; \
 done
endef

all:
	$(call maketarget)

clean:
	$(call maketarget,clean)
