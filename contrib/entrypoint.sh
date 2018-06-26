#!/bin/ash
set -e

if [ "$1" = 'cryplyd' ]; then
    shift
    exec cryplyd -datadir=/data "$@"
fi

if [ "$1" = 'cryply-cli' ]; then
    shift
    exec cryply-cli -datadir=/data "$@"
fi

exec "$@"

