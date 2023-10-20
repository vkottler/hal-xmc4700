/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_HI_CLK_MULT : uint8_t
{
    clock_multiplier_not_supported /*!< Clock Multiplier not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_HI_CLK_MULT) == 1);

/**
 * Converts SDMMC_CAPABILITIES_HI_CLK_MULT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_HI_CLK_MULT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_HI_CLK_MULT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_HI_CLK_MULT::clock_multiplier_not_supported:
        result = "clock_multiplier_not_supported";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_HI_CLK_MULT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_HI_CLK_MULT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "clock_multiplier_not_supported", 30)))
    {
        output =
            SDMMC_CAPABILITIES_HI_CLK_MULT::clock_multiplier_not_supported;
    }

    return result;
}

}; // namespace XMC4700
