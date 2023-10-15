## A library built with meson and tested with Catch2

- [From this CMake build](https://codeberg.org/tpedu/hello-catch2-cmake)

### Build and run

- Do it once:
```
$ meson setup build
```
- On a change (`compile` not strictly necessary):
```
$ meson compile -C build
$ meson test -vC build
```
- Format the sources whenever you want:
```
$ ./fmt
```
