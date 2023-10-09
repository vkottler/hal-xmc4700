/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCST_S3SS : uint8_t
{
    value1 /*!< Shadow transfer has not been requested */,
    value2 = 1 /*!< Shadow transfer has been requested */
};
static_assert(sizeof(CCU80_GCST_S3SS) == 1);

static constexpr uint16_t CCU80_GCST_S3SS_id = 1734;

/**
 * Converts CCU80_GCST_S3SS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCST_S3SS instance)
{
    const char *result = "UNKNOWN CCU80_GCST_S3SS";

    switch (instance)
    {
    case CCU80_GCST_S3SS::value1:
        result = "value1";
        break;
    case CCU80_GCST_S3SS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCST_S3SS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCST_S3SS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GCST_S3SS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GCST_S3SS::value2;
    }

    return result;
}

}; // namespace XMC4700
