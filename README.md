# Collection of HDL Design Tools

- [Collection of HDL Design Tools](#collection-of-hdl-design-tools)
  - [Building, Testing, and Deploying the HDL-Design-Tools Container Image](#building-testing-and-deploying-the-hdl-design-tools-container-image)
    - [Prerequisites](#prerequisites)
    - [Building in Interactive Mode](#building-in-interactive-mode)
      - [On a Linux Host](#on-a-linux-host)
      - [On a Windows Host](#on-a-windows-host)
      - [In the Linux Guest](#in-the-linux-guest)
        - [Installing the Missing Development Libraries/Tools](#installing-the-missing-development-librariestools)
        - [Compiling with the Gnu GCC/G++ Compilers](#compiling-with-the-gnu-gccg-compilers)
        - [Compiling with the LLVM CLANG/CLANG++ Compilers](#compiling-with-the-llvm-clangclang-compilers)
        - [Compiling with the Intel ICX/ICPX Compilers](#compiling-with-the-intel-icxicpx-compilers)
        - [Testing](#testing)
    - [Building in Batch Mode](#building-in-batch-mode)
      - [On a Linux Host](#on-a-linux-host-1)
      - [On a Windows Host](#on-a-windows-host-1)
  - [Useful Links](#useful-links)

## Building, Testing, and Deploying the HDL-Design-Tools Container Image

```powershell
cd /Path/To/HDL-Design-Tools
```

### Prerequisites

```bash
java \
    -jar $(pwd)/Resources/Packages/antlr-4.13.2-complete.jar \
        -Dlanguage=Cpp \
        -package "byEAjksCom::Libraries::VHDL::Formatting::ANTLR" \
        -listener \
        -visitor \
        -o $(pwd)/Code/Libraries/VHDL-Formatting/src/byEAjksCom/Libraries/VHDL/Formatting/ANTLR \
        $(pwd)/Resources/Grammars/VHDL/VHDL.g4
```

### Building in Interactive Mode

#### On a Linux Host

```bash
docker run \
    --interactive \
    --tty \
    --name hdl-design-tools \
    --volume '/Path/To/HDL-Design-Tools:/src' \
    --workdir /build \
    docker.io/eajkseajks/cpp-only-devenv-sdk-core:3
```

```powershell
docker start --interactive hdl-design-tools
```

#### On a Windows Host

```powershell
docker run `
    --interactive `
    --tty `
    --name hdl-design-tools `
    --volume 'D:/Projects/HDL-Design-Tools:/src' `
    --workdir /build `
    docker.io/eajkseajks/cpp-only-devenv-sdk-core:3
```

```powershell
docker start --interactive hdl-design-tools
```

#### In the Linux Guest

##### Installing the Missing Development Libraries/Tools

```bash
apt-get update

apt-get install --yes --no-install-recommends \
    wget \
    libpython3.13-dev \
    python3.13

apt-get autoremove --yes --purge

rm -rf /var/lib/apt/lists/*
```

```bash
mkdir /tools

wget -c https://github.com/Kitware/CMake/releases/download/v4.1.2/cmake-4.1.2-linux-x86_64.tar.gz -O - | tar -xz -C /tools
```

```bash
pushd /root

gzip -cd /src/Resources/Packages/cmake-4.1.2.tar.gz | tar -xvf -

cd cmake-4.1.2

./bootstrap
make -j
make install

popd
```

##### Compiling with the Gnu GCC/G++ Compilers

```bash
. /opt/intel/oneapi/setvars.sh

cmake \
    -G "Ninja" \
    -D CMAKE_C_COMPILER=gcc \
    -D CMAKE_C_COMPILER_AR=ar \
    -D CMAKE_CXX_COMPILER=g++ \
    -D CMAKE_CXX_COMPILER_AR=ar \
    -D CMAKE_UNITY_BUILD=OFF \
    -D CMAKE_BUILD_TYPE=Debug \
    -D CMAKE_LINKER_TYPE=DEFAULT \
    -D PYBIND11_FINDPYTHON=ON \
    -D HDL_DESIGN_TOOLS_VERSION=0.0.0.0 \
    -D USE_PRECOMPILED_HEADERS=OFF \
    -D BUILD_API_DOCUMENTATION=OFF \
    /src/Code

ninja package
```

##### Compiling with the LLVM CLANG/CLANG++ Compilers

```bash
. /opt/intel/oneapi/setvars.sh

cmake \
    -G "Ninja" \
    -D CMAKE_C_COMPILER=clang \
    -D CMAKE_C_COMPILER_AR=llvm-ar \
    -D CMAKE_CXX_COMPILER=clang++ \
    -D CMAKE_CXX_COMPILER_AR=llvm-ar \
    -D CMAKE_UNITY_BUILD=ON \
    -D CMAKE_BUILD_TYPE=Debug \
    -D CMAKE_LINKER_TYPE=DEFAULT \
    -D PYBIND11_FINDPYTHON=ON \
    -D HDL_DESIGN_TOOLS_VERSION=0.0.0.0 \
    -D USE_PRECOMPILED_HEADERS=ON \
    -D BUILD_API_DOCUMENTATION=OFF \
    /src/Code

ninja package
```

##### Compiling with the Intel ICX/ICPX Compilers

```bash
. /opt/intel/oneapi/setvars.sh

cmake \
    -G "Ninja" \
    -D CMAKE_C_COMPILER=icx \
    -D CMAKE_C_COMPILER_AR=xiar \
    -D CMAKE_CXX_COMPILER=icpx \
    -D CMAKE_CXX_COMPILER_AR=xiar \
    -D CMAKE_UNITY_BUILD=OFF \
    -D CMAKE_BUILD_TYPE=Release \
    -D CMAKE_LINKER_TYPE=DEFAULT \
    -D PYBIND11_FINDPYTHON=ON \
    -D HDL_DESIGN_TOOLS_VERSION=0.0.0.0 \
    -D USE_PRECOMPILED_HEADERS=OFF \
    -D BUILD_API_DOCUMENTATION=ON \
    /src/Code

ninja package
```

##### Testing

```bash
apt install ./HDL-Design-Tools_0.0.0.0.deb

export PATH=/opt/by-EAjks.Com/HDL-Design-Tools/bin${PATH:+:${PATH}}

VHDL-Formatter -vvv
VHDL-Formatter -vvv --input-file /src/Resources/Examples/VHDL/Example.vhd
```

### Building in Batch Mode

#### On a Linux Host

```bash
docker build \
    --build-arg IMAGE_REPOSITORY=docker.io/eajkseajks \
    --build-arg DEVELOPMENT_IMAGE_NAME=cpp-only-sdk-core \
    --build-arg DEVELOPMENT_IMAGE_TAG=4 \
    --build-arg RUNTIME_IMAGE_NAME=cpp-only-runtime-core \
    --build-arg RUNTIME_IMAGE_TAG=4 \
    --build-arg HDL_DESIGN_TOOLS_VERSION=0.0.0.0 \
    --file DevOps/Docker/HDL-Design-Tools/Dockerfile \
    --tag ghcr.io/hdl-design-tools/hdl-design-tools:v0.0.0.0 \
    --tag ghcr.io/hdl-design-tools/hdl-design-tools:latest \
    .
```

#### On a Windows Host

```powershell
docker build `
    --build-arg IMAGE_REPOSITORY=docker.io/eajkseajks `
    --build-arg DEVELOPMENT_IMAGE_NAME=cpp-only-sdk-core `
    --build-arg DEVELOPMENT_IMAGE_TAG=4 `
    --build-arg RUNTIME_IMAGE_NAME=cpp-only-runtime-core `
    --build-arg RUNTIME_IMAGE_TAG=4 `
    --build-arg HDL_DESIGN_TOOLS_VERSION=0.0.0.0 `
    --file DevOps/Docker/HDL-Design-Tools/Dockerfile `
    --tag ghcr.io/hdl-design-tools/hdl-design-tools:v0.0.0.0 `
    --tag ghcr.io/hdl-design-tools/hdl-design-tools:latest `
    .
```

## Useful Links

- <https://www.antlr.org/>
- <https://www.antlr.org/download.html>
- <https://github.com/antlr/antlr4/tags>
