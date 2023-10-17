/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GSTAT_S3I : uint8_t
{
    running /*!< Running */,
    idle = 1 /*!< Idle */
};
static_assert(sizeof(CCU40_GSTAT_S3I) == 1);

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
    case CCU40_GSTAT_S3I::running:
        result = "running";
        break;
    case CCU40_GSTAT_S3I::idle:
        result = "idle";
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

    if ((result = !strncmp(data, "running", 7)))
    {
        output = CCU40_GSTAT_S3I::running;
    }
    else if ((result = !strncmp(data, "idle", 4)))
    {
        output = CCU40_GSTAT_S3I::idle;
    }

    return result;
}

}; // namespace XMC4700
