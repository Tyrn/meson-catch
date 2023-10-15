project('meson-catch-test', 'cpp')

catch2_dep = dependency('catch2', fallback : ['catch2', 'catch2_dep'])

src_dir = include_directories('src')
test_dir = include_directories('tests')

src_files = files(
  'src/fibonacci.cpp'
)

test_files = files(
  'tests/test_fib.cpp',
  'tests/tests.cpp'
)

catch_test = executable(
  'catch-meson-test', test_files, src_files,
  include_directories: src_dir,
  dependencies : catch2_dep
)

test('Test', catch_test)

