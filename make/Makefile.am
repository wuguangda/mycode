AUTOMAKE_OPTIONS = foreign

CC=g++
noinst_PROGRAMS = bin/DataTest


INCLUDE = -I ../hdr\
	 -I ../Queue


bin_DataTest_SOURCES = ../src/main.cpp


#bin_DataTest_LDADD = -L /usr/lib64  -lpthread

bin_DataTest_CXXFLAGS = -Wall -g -D_LINUX_

install-data-local:
	mkdir -p ${prefix}/make/bin

clean-local:
	rm -rf *.lo
	rm -rf *.la
