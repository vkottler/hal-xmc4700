/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_SDMA_SUPPORT : uint8_t
{
    sdma_not_supported /*!< SDMA not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_SDMA_SUPPORT) == 1);

/**
 * Converts SDMMC_CAPABILITIES_SDMA_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_SDMA_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_SDMA_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_SDMA_SUPPORT::sdma_not_supported:
        result = "sdma_not_supported";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_SDMA_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_SDMA_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sdma_not_supported", 18)))
    {
        output = SDMMC_CAPABILITIES_SDMA_SUPPORT::sdma_not_supported;
    }

    return result;
}

}; // namespace XMC4700
