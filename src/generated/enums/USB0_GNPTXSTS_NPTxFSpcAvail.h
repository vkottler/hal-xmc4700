/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GNPTXSTS_NPTxFSpcAvail : uint16_t
{
    value1 /*!< Non-periodic TxFIFO is full */,
    value2 = 1 /*!< 1 word available */,
    value3 = 2 /*!< 2 words available */
};
static_assert(sizeof(USB0_GNPTXSTS_NPTxFSpcAvail) == 2);

/**
 * Converts USB0_GNPTXSTS_NPTxFSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GNPTXSTS_NPTxFSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_GNPTXSTS_NPTxFSpcAvail";

    switch (instance)
    {
    case USB0_GNPTXSTS_NPTxFSpcAvail::value1:
        result = "value1";
        break;
    case USB0_GNPTXSTS_NPTxFSpcAvail::value2:
        result = "value2";
        break;
    case USB0_GNPTXSTS_NPTxFSpcAvail::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GNPTXSTS_NPTxFSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GNPTXSTS_NPTxFSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::value3;
    }

    return result;
}

}; // namespace XMC4700
