/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_RASR_XN : uint8_t
{
    enabled /*!< instruction fetches enabled */,
    disabled = 1 /*!< instruction fetches disabled. */
};
static_assert(sizeof(PPB_MPU_RASR_XN) == 1);

/**
 * Converts PPB_MPU_RASR_XN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RASR_XN instance)
{
    const char *result = "UNKNOWN PPB_MPU_RASR_XN";

    switch (instance)
    {
    case PPB_MPU_RASR_XN::enabled:
        result = "enabled";
        break;
    case PPB_MPU_RASR_XN::disabled:
        result = "disabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RASR_XN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RASR_XN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled", 7)))
    {
        output = PPB_MPU_RASR_XN::enabled;
    }
    else if ((result = !strncmp(data, "disabled", 8)))
    {
        output = PPB_MPU_RASR_XN::disabled;
    }

    return result;
}

}; // namespace XMC4700
