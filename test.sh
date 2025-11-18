#!/bin/sh
./changecase -L Test/test1.txt out.txt && (cmp out.txt Test/test1-L.txt || exit 1)
./changecase -U Test/test1.txt out.txt && (cmp out.txt Test/test1-U.txt || exit 1)
./changecase -G Test/test1.txt out.txt && (cmp out.txt Test/test1-G.txt || exit 1)
./changecase -T Test/test1.txt out.txt && (cmp out.txt Test/test1-T.txt || exit 1)
./changecase -R Test/test1.txt out.txt

