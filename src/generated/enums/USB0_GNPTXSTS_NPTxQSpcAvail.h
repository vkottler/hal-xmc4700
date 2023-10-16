/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GNPTXSTS_NPTxQSpcAvail : uint8_t
{
    value1 /*!< Non-periodic Transmit Request Queue is full */,
    value2 = 1 /*!< 1 location available */,
    value3 = 2 /*!< 2 locations available */
};
static_assert(sizeof(USB0_GNPTXSTS_NPTxQSpcAvail) == 1);

/**
 * Converts USB0_GNPTXSTS_NPTxQSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GNPTXSTS_NPTxQSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_GNPTXSTS_NPTxQSpcAvail";

    switch (instance)
    {
    case USB0_GNPTXSTS_NPTxQSpcAvail::value1:
        result = "value1";
        break;
    case USB0_GNPTXSTS_NPTxQSpcAvail::value2:
        result = "value2";
        break;
    case USB0_GNPTXSTS_NPTxQSpcAvail::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GNPTXSTS_NPTxQSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GNPTXSTS_NPTxQSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GNPTXSTS_NPTxQSpcAvail::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GNPTXSTS_NPTxQSpcAvail::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_GNPTXSTS_NPTxQSpcAvail::value3;
    }

    return result;
}

}; // namespace XMC4700