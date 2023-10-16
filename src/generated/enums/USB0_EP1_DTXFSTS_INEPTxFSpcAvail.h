/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP1_DTXFSTS_INEPTxFSpcAvail : uint16_t
{
    value1 /*!< Endpoint TxFIFO is full */,
    value2 = 1 /*!< 1 word available */,
    value3 = 2 /*!< 2 words available */
};
static_assert(sizeof(USB0_EP1_DTXFSTS_INEPTxFSpcAvail) == 2);

/**
 * Converts USB0_EP1_DTXFSTS_INEPTxFSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP1_DTXFSTS_INEPTxFSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_EP1_DTXFSTS_INEPTxFSpcAvail";

    switch (instance)
    {
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value1:
        result = "value1";
        break;
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value2:
        result = "value2";
        break;
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP1_DTXFSTS_INEPTxFSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_EP1_DTXFSTS_INEPTxFSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::value3;
    }

    return result;
}

}; // namespace XMC4700
