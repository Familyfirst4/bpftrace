#include "common.h"

namespace bpftrace::test::codegen {

TEST(codegen, ptr_to_ptr)
{
  test(R"PROG(kprobe:f { $pp = (int32 **)0; $res = **kptr($pp); })PROG",

       NAME);
}

} // namespace bpftrace::test::codegen
