
# A Tutorial on How to Use Bazel for C++
This repo is a simple demo for teaching how to use Bazel for C++ projects.

Please refer to the [examples](/examples) folder:
- [example1](/examples/example1): A single-file C++ program
- [example2](/examples/example2): Separating the main.cc and lib files
- [example3](/examples/example3): Using multiple libs


## A Video on how to use this repo:

<table><tr><td>

<a href="https://youtu.be/JfOzsBi_irY">
<img border="5" alt="Bazel Tutorial for C++" src="https://raw.githubusercontent.com/ourarash/cpp-template/master/video_thumbnail.jpg" width="400">
</a>
</td></tr></table>

# Bazel Examples:
## Example 1
Running Example 1:
```bash
bazel run examples/example1:example1
```

Check All dependencies of Example 1:

```bash
bazel query  --noimplicit_deps \
"deps(//examples/example1:example1)" \
--output graph | dot -Tsvg > output.svg
```


## Example 2
Running Example 2:

```bash
bazel run examples/example2:example2
```

Check All dependencies of Example 2:
```bash
bazel query  --noimplicit_deps \
"deps(//examples/example2:example2)" \
--output graph | dot -Tsvg > output.svg
```

## Example 3
Running Example 3:

```bash
bazel run examples/example3:example3
```

Check all dependencies of Example 3:
```bash
bazel query  --noimplicit_deps \
"deps(//examples/example3:example3)" \
--output graph | dot -Tsvg > output.svg
```

Check all paths from lib1 to example3:
```bash
bazel query \
"allpaths(//examples/example3:example3, //examples/example3/lib1:lib1)" \
--output graph | dot -Tsvg > output.svg
```
