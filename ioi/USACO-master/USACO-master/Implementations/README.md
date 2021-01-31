# README

**If you find this organization confusing, please tell me how it could be improved!**

This collection is composed of the algorithms I have needed for USACO contests, plus a few more for CodeForces (and now ICPC). Thanks to kfoldcrossvalidator for some corrections.

Sources: 
  * [KACTL](https://github.com/kth-competitive-programming/kactl)
  * [MIT NULL ICPC Book](https://github.com/ecnerwala/icpc-book)
  * [CPH](https://cses.fi/book.pdf) refers to the competitive programmer's handbook.
    * Section numbers correspond with the [Guide to Competitive Programming](http://www.springer.com/us/book/9783319725468).
  * Previously, [Notebook Generator](https://github.com/pin3da/notebook-generator) was used to create the PDF.

## From KACTL

This repo hosts KACTL, KTH's ICPC team reference document.
It consists of 25 pages of copy-paste:able code, for use in ICPC-style programming competitions.

See [kactl.pdf](https://github.com/kth-competitive-programming/kactl/blob/master/kactl.pdf) for the final, browsable version,
and [content/](https://github.com/kth-competitive-programming/kactl/tree/master/content) for raw source code.

### Aspirations

KACTL algorithms should be: useful, short, fast enough, readable, and if relevant, easy to modify.
Short and readable sometimes conflict -- usually then short takes precedence, although
the algorithms should still be made easy to type in and hard to make typos in (since ICPC-style contests
require you to copy them from paper).

They should *not* be overly generic, since code is manually typed and that just adds overhead.
Due to space issues, we also exclude algorithms that are very common/simple (e.g., Dijkstra), or very uncommon (general weighted matching).

If you feel that something is missing, could be cleaned up, or notice a bug, please file an issue or send us a pull request!

### Hacking on KACTL

For coding style, try to copy existing code.
Each algorithm should contain a header with the author of the code, the date it
was added, a description of the algorithm, its testing status, and preferably also
source, license and time complexity.
Line width is 63 chars, with tabs for indentation (tab = 2 spaces in the pdf).

When adding/removing files, edit the corresponding `chapter.tex` file as well.
`chapter.tex` also contains all non-source code, e.g. math and textual descriptions.
For nicer alignment you might want to use `\hardcolumnbreak`, `\columnbreak` or `\newpage` commands,
though this is usually only done before important contests, and not on master.

To build KACTL, type `make kactl` (or `make fast`) on a \*NIX machine -- this will update `kactl.pdf`.
(Windows might work as well, but is not tested.) `doc/README` has a few more notes about this.

kactl.pdf is to be kept to 25 pages + cover page.
Occasionally the generated kactl.pdf is committed to the repo for convenience, but not too often because it makes git operations slower.

Before printing KACTL for an official contest, you may want to locally change the arguments to `\team`, `\contest`, etc. in build/kactl.tex to something more fitting,
You may also enable colored syntax highlighting in the same file.

To upstream your changes, [send a pull request](https://help.github.com/articles/fork-a-repo/).

### Testing

KACTL algorithms are tested manually, on online judges and/or using fuzz-tests (see the `fuzz-tests` directory).
Simple variable renamings etc. don't need testing, but it's prudent to at least run `./test-compiles.sh file.h` to make sure the file still compiles.

`old-unit-tests` contains a couple of broken unit tests, last touched about ten years ago.

### License

As usual for competitive programming, the licensing situation is a bit unclear.
Many source files are marked with license (we try to go with
[CC0](https://creativecommons.org/share-your-work/public-domain/cc0/)), but many also aren't.
Presumably good will is to be assumed from other authors, though, and in many cases permission should not be needed since the code is not distributed.
To help trace things back, sources and authors are noted in source files.

Everything in `fuzz-tests` and `build` is implicitly CC0.
