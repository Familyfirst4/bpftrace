#include "../mocks.h"
#include "common.h"

namespace bpftrace::test::codegen {

using ::testing::Return;

TEST_F(codegen_btf, kprobe_session)
{
  test("kprobe:sys_* { @ = 1 } kretprobe:sys_* { @ = 0 }", NAME);
}

} // namespace bpftrace::test::codegen
