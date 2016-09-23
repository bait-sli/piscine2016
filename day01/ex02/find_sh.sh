#!/bin/sh
find . -type f -name "*.sh" | cut -c3- | cut -d . -f 1
