
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_AWTUtilities$VisibleComponentList__
#define __gnu_java_awt_AWTUtilities$VisibleComponentList__

#pragma interface

#include <java/util/AbstractSequentialList.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
          class AWTUtilities$VisibleComponentList;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Component;
    }
  }
}

class gnu::java::awt::AWTUtilities$VisibleComponentList : public ::java::util::AbstractSequentialList
{

public: // actually package-private
  AWTUtilities$VisibleComponentList(JArray< ::java::awt::Component * > *);
public:
  virtual ::java::util::ListIterator * listIterator(jint);
  virtual jint size();
public: // actually package-private
  JArray< ::java::awt::Component * > * __attribute__((aligned(__alignof__( ::java::util::AbstractSequentialList)))) components;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_AWTUtilities$VisibleComponentList__
