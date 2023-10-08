/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Non-periodic Transmit Request Queue is full",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "1 location available",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "2 locations available",
 *       "value": 2
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
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

static constexpr uint16_t USB0_GNPTXSTS_NPTxQSpcAvail_id = 344;

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