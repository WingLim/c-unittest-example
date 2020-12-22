# C Unittest Example
![build](https://github.com/WingLim/c-unittest-example/workflows/build/badge.svg)
[![codecov](https://codecov.io/gh/WingLim/c-unittest-example/branch/main/graph/badge.svg?token=ETBV6SV7IE)](https://codecov.io/gh/WingLim/c-unittest-example)

Use [CMocka](https://cmocka.org) and [CodeCov](https://about.codecov.io)

## Usage

Test in local:
```shell script
CODECOV=ON IWYU=OFF make cmake coverage
```

Upload report:

`.cc_token` alread ignore in `.gitignore`

```shell script
echo "YOUR TOKNE" > .cc_token
bash <(curl -s https://codecov.io/bash) -f cmake-build-debug/codecov.xml -t @.cc_token
```