
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Dialog$ModalExclusionType__
#define __java_awt_Dialog$ModalExclusionType__

#pragma interface

#include <java/lang/Enum.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Dialog$ModalExclusionType;
    }
  }
}

class java::awt::Dialog$ModalExclusionType : public ::java::lang::Enum
{

  Dialog$ModalExclusionType(::java::lang::String *, jint);
public:
  static JArray< ::java::awt::Dialog$ModalExclusionType * > * values();
  static ::java::awt::Dialog$ModalExclusionType * valueOf(::java::lang::String *);
  static ::java::awt::Dialog$ModalExclusionType * APPLICATION_EXCLUDE;
  static ::java::awt::Dialog$ModalExclusionType * NO_EXCLUDE;
  static ::java::awt::Dialog$ModalExclusionType * TOOLKIT_EXCLUDE;
private:
  static JArray< ::java::awt::Dialog$ModalExclusionType * > * ENUM$VALUES;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_Dialog$ModalExclusionType__