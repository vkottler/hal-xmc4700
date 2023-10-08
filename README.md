<!--
    =====================================
    generator=datazen
    version=3.1.4
    hash=6abc4b519fd3a85c8fcc1698834f2c75
    =====================================
-->

# hal-xmc4700 ([0.1.0](https://github.com/vkottler/hal-xmc4700/releases/tag/0.1.0))

[![codecov](https://codecov.io/gh/vkottler/hal-xmc4700/branch/master/graph/badge.svg)](https://codecov.io/gh/vkottler/hal-xmc4700)
![Build Status](https://github.com/vkottler/hal-xmc4700/actions/workflows/yambs-project.yml/badge.svg)

*A hardware abstraction layer generated from the XMC4700's SVD.*

## Workflow

Install [vmklib](https://github.com/vkottler/vmklib) such that you can
`mk --version` (a `pip install vmklib` to your desired Python environment is
all that's needed).

From a fresh checkout:

```
git submodule update --init
mk dz-sync
mk g
```

This should result in fully compiled code that you can now use or add to.
