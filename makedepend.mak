#---------------------------------------------------------#
# Automatic Dependencies Generation--Tromey's Method      #
#---------------------------------------------------------#
#---------------------------------------------------------#
# Dependencies Directory
#---------------------------------------------------------#
DEPENDS = .depends
$(shell [ ! -e $(DEPENDS) ] && mkdir $(DEPENDS))

#---------------------------------------------------------#
# SOURCES must be define in parent Makefile
#---------------------------------------------------------#
ifndef SOURCES
   $(error "Undefined variable SOURCES!")
endif

ifneq "$(MAKECMDGOALS)" "clean"
   -include $(addprefix $(DEPENDS)/,$(subst .c,.d,$(SOURCES)))
endif

clean_depends:
	rm -rf $(DEPENDS)

#---------------------------------------------------------#
# $(call make-depend,source-file,object-file)
#---------------------------------------------------------#
define make-depend
	gcc -MM -MF $(DEPENDS)/$(subst .o,.d,$(notdir $2)) -MP -MT $2 $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) $1 
endef

%.o: %.c
	$(call make-depend,$<,$@)
	gcc -c $(CFLAGS) $(CPPFLAGS) $<
