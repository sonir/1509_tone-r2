#!/bin/bash

sudo pd-extended -nogui -alsa -audioindev 3 -audiooutdev 3 bin/sampler.pd
