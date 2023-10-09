/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPTXSTS_PTxQSpcAvail : uint8_t
{
    value1 /*!< Periodic Transmit Request Queue is full */,
    value2 = 1 /*!< 1 location available */,
    value3 = 2 /*!< 2 locations available */
};
static_assert(sizeof(USB0_HPTXSTS_PTxQSpcAvail) == 1);

static constexpr uint16_t USB0_HPTXSTS_PTxQSpcAvail_id = 350;

/**
 * Converts USB0_HPTXSTS_PTxQSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPTXSTS_PTxQSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_HPTXSTS_PTxQSpcAvail";

    switch (instance)
    {
    case USB0_HPTXSTS_PTxQSpcAvail::value1:
        result = "value1";
        break;
    case USB0_HPTXSTS_PTxQSpcAvail::value2:
        result = "value2";
        break;
    case USB0_HPTXSTS_PTxQSpcAvail::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPTXSTS_PTxQSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPTXSTS_PTxQSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_HPTXSTS_PTxQSpcAvail::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_HPTXSTS_PTxQSpcAvail::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_HPTXSTS_PTxQSpcAvail::value3;
    }

    return result;
}

}; // namespace XMC4700
