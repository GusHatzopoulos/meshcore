#include "MeshCore.hpp"
#include <cstring>

int main() {
    return std::strcmp(meshcore::version(), "0.1.0") == 0 ? 0 : 1;
}