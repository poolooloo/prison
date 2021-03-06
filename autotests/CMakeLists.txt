set(aztecbarcodetest_srcs
    aztecbarcodetest.cpp
    ../src/lib/aztecbarcode.cpp
    ../src/lib/bitvector.cpp
    ../src/lib/reedsolomon.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/../src/lib/prison_debug.cpp
)
qt5_add_resources(aztecbarcodetest_srcs aztec/aztec.qrc)

ecm_add_test(${aztecbarcodetest_srcs} TEST_NAME prison-aztecbarcodetest LINK_LIBRARIES Qt5::Test KF5::Prison)

ecm_add_test(
    reedsolomontest.cpp
    ../src/lib/bitvector.cpp
    ../src/lib/reedsolomon.cpp
    TEST_NAME prison-reedsolomontest
    LINK_LIBRARIES Qt5::Test KF5::Prison
)

set(code128barcodetest_srcs
    code128barcodetest.cpp
    ../src/lib/code128barcode.cpp
    ../src/lib/bitvector.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/../src/lib/prison_debug.cpp
)

ecm_add_test(${code128barcodetest_srcs} TEST_NAME prison-code128barcodetest LINK_LIBRARIES Qt5::Test KF5::Prison)
