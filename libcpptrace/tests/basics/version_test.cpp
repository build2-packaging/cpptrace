#include <cpptrace/version.hpp>

#undef NDEBUG
#define NDEBUG
#include <cassert>
#include <cstdio>

int main()
{
  printf("CPPTRACE_VERSION_MAJOR: %d\n", CPPTRACE_VERSION_MAJOR);
  printf("CPPTRACE_VERSION_MINOR: %d\n", CPPTRACE_VERSION_MINOR);
  printf("CPPTRACE_VERSION_PATCH: %d\n", CPPTRACE_VERSION_PATCH);
  printf("CPPTRACE_VERSION: %d\n", CPPTRACE_VERSION);
}
