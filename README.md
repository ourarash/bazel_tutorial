
# Bazel Query Examples:


Check All dependencies of Example 1:

```bash
bazel query  --noimplicit_deps \
"deps(//examples/example1:example1)" \
--output graph | dot -Tsvg > output.svg
```


Check All dependencies of Example 2:
```bash
bazel query  --noimplicit_deps \
"deps(//examples/example2:example2)" \
--output graph | dot -Tsvg > output.svg
```

Check All dependencies of Example 3:
```bash
bazel query  --noimplicit_deps \
"deps(//examples/example3:example3)" \
--output graph | dot -Tsvg > output.svg
```

Check All paths from lib1 to example3:
```bash
bazel query \
"allpaths(//examples/example3:example3, //examples/example3/lib1:lib1)" \
--output graph | dot -Tsvg > output.svg
```


