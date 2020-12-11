cc_library(
  name = 'maglev',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    ':libmaglev_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = glob(['include/**/*.h']),
  linkstatic = 1,
  alwayslink = 1,
  linkopts = ["-pthread"],
)

cc_import(
  name = 'libmaglev_a',
  static_library = 'libmaglev.a',
  alwayslink = 1,
)

genrule(
  name = 'make_libmaglev_a',
  outs = ["libmaglev.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && (cd $$(dirname $(location Build.xml)); haxelib run hxcpp Build.xml) && mv $$(dirname $(location Build.xml))/liboutput.a $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**"]),
)
