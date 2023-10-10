/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU8_DTC_DTE2 : uint8_t
{
    value1 /*!< Dead Time for channel 2 is disabled */,
    value2 = 1 /*!< Dead Time for channel 2 is enabled */
};
static_assert(sizeof(CCU8_DTC_DTE2) == 1);

static constexpr uint16_t CCU8_DTC_DTE2_id = 166;

/**
 * Converts CCU8_DTC_DTE2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU8_DTC_DTE2 instance)
{
    const char *result = "UNKNOWN CCU8_DTC_DTE2";

    switch (instance)
    {
    case CCU8_DTC_DTE2::value1:
        result = "value1";
        break;
    case CCU8_DTC_DTE2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU8_DTC_DTE2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU8_DTC_DTE2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU8_DTC_DTE2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU8_DTC_DTE2::value2;
    }

    return result;
}

}; // namespace XMC4700
