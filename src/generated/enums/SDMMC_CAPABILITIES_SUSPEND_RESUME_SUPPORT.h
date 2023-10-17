/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT : uint8_t
{
    supported = 1 /*!< Supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT) == 1);

/**
 * Converts SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT::supported:
        result = "supported";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "supported", 9)))
    {
        output = SDMMC_CAPABILITIES_SUSPEND_RESUME_SUPPORT::supported;
    }

    return result;
}

}; // namespace XMC4700
