
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ConcurrentSkipListMap$Values__
#define __java_util_concurrent_ConcurrentSkipListMap$Values__

#pragma interface

#include <java/util/AbstractCollection.h>
#include <gcj/array.h>


class java::util::concurrent::ConcurrentSkipListMap$Values : public ::java::util::AbstractCollection
{

public: // actually package-private
  ConcurrentSkipListMap$Values(::java::util::concurrent::ConcurrentNavigableMap *);
public:
  ::java::util::Iterator * iterator();
  jboolean isEmpty();
  jint size();
  jboolean contains(::java::lang::Object *);
  void clear();
  JArray< ::java::lang::Object * > * toArray();
  JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
private:
  ::java::util::concurrent::ConcurrentNavigableMap * __attribute__((aligned(__alignof__( ::java::util::AbstractCollection)))) m;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ConcurrentSkipListMap$Values__
