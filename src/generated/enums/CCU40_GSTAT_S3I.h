/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GSTAT_S3I : uint8_t
{
    value1 /*!< Running */,
    value2 = 1 /*!< Idle */
};
static_assert(sizeof(CCU40_GSTAT_S3I) == 1);

static constexpr uint16_t CCU40_GSTAT_S3I_id = 66;

/**
 * Converts CCU40_GSTAT_S3I to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GSTAT_S3I instance)
{
    const char *result = "UNKNOWN CCU40_GSTAT_S3I";

    switch (instance)
    {
    case CCU40_GSTAT_S3I::value1:
        result = "value1";
        break;
    case CCU40_GSTAT_S3I::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GSTAT_S3I.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GSTAT_S3I &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GSTAT_S3I::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GSTAT_S3I::value2;
    }

    return result;
}

}; // namespace XMC4700
