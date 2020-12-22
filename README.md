# C Unittest Example

Use [CMocka](https://cmocka.org) and [CodeCov](https://about.codecov.io)

## Usage

Test in local:
```shell script
CODECOV=ON IWYU=OFF make cmake coverage
```

Upload report:
```shell script
bash <(curl -s https://codecov.io/bash) -f cmake-build-debug/codecov.xml -t "YOUR TOKEN"
```