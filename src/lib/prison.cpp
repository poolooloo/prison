/*
    SPDX-FileCopyrightText: 2010-2016 Sune Vuorela <sune@vuorela.dk>

    SPDX-License-Identifier: MIT
*/

#include <config-prison.h>
#include "prison.h"
#include "aztecbarcode.h"
#include "datamatrixbarcode.h"
#include "qrcodebarcode.h"
#include "code39barcode.h"
#include "code93barcode.h"
#include "code128barcode.h"

Prison::AbstractBarcode *Prison::createBarcode(BarcodeType type)
{
    switch(type)
    {
        case Prison::Null:
            return nullptr;
        case Prison::QRCode:
            return new QRCodeBarcode;
        case Prison::DataMatrix:
#ifdef HAVE_DMTX
            return new DataMatrixBarcode;
#else
            return nullptr;
#endif
        case Prison::Aztec:
            return new AztecBarcode;
        case Prison::Code39:
            return new Code39Barcode;
        case Prison::Code93:
            return new Code93Barcode;
        case Prison::Code128:
            return new Code128Barcode;
    }
    return nullptr;

}
