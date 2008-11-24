#include "ruby.h"
#include "stdio.h"

static VALUE t_itu_t(VALUE self, VALUE string) {
  VALUE str = StringValue(string);
#ifdef RSTRING_LEN
  int   n = RSTRING_LEN(str);
#else
  int   n = RSTRING(str)->len;
#endif

#ifdef RSTRING_PTR
  char* p = RSTRING_PTR(str);
#else
  char* p = RSTRING(str)->ptr;
#endif

  unsigned long r = 0xFFFFFFFF;
  int i, j;

  for (i = 0; i < n; i++) {
    r = r ^ p[i];
    for (j = 0; j < 8; j++) {
      if ( (r & 1) != 0 ) {
        r = (r >> 1) ^ 0xEDB88320;
      } else {
        r = r >> 1;
      }
    }
  }
  return INT2FIX(r ^ 0xFFFFFFFF);
}

VALUE cCRC32;
void Init_crc32() {
  cCRC32 = rb_define_module("CRC32");
  rb_define_module_function(cCRC32, "itu_t", t_itu_t, 1);
}
