PREFIX = /usr/local

.PHONY: install
install: libvector.hpp
	cp $< $(PREFIX)/include

.PHONY: uninstall
uninstall:
	rm -f $(PREFIX)/include/libvector.hpp