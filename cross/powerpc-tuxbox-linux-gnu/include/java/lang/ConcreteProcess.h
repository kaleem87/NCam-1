// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_ConcreteProcess__
#define __java_lang_ConcreteProcess__

#pragma interface

#include <java/lang/Process.h>
#include <gcj/array.h>

class java::lang::ConcreteProcess : public ::java::lang::Process
{
public:
  void destroy ();
  jint exitValue ();
  ::java::io::InputStream *getErrorStream () { return errorStream; }
  ::java::io::InputStream *getInputStream () { return inputStream; }
  ::java::io::OutputStream *getOutputStream () { return outputStream; }
  jint waitFor ();
  void startProcess (JArray< ::java::lang::String *> *, JArray< ::java::lang::String *> *, ::java::io::File *);
  ConcreteProcess (JArray< ::java::lang::String *> *, JArray< ::java::lang::String *> *, ::java::io::File *);
private:
  jlong __attribute__((aligned(__alignof__( ::java::lang::Process ))))  pid;
  jboolean hasExited;
  jint status;
  ::java::io::InputStream *errorStream;
  ::java::io::InputStream *inputStream;
  ::java::io::OutputStream *outputStream;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_lang_ConcreteProcess__ */
