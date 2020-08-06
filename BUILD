cc_library(
  name = 'maglev',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    ':maglev_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    'include/maglev/MagLev.h',
    'include/maglev/MagLevCpp.h',
    'include/maglev/CppAny.h',
    'include/maglev/CppCallbackPtr.h',
  ]
)

genrule(
  name = 'maglev_a',
  outs = ["maglev.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && haxelib run hxcpp Build.xml && mv liboutput.a $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**"]),
)
