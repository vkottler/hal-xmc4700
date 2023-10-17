/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT : uint8_t
{
    driver_type_c_not_supported /*!< Driver Type C is not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT) == 1);

/**
 * Converts SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT::driver_type_c_not_supported:
        result = "driver_type_c_not_supported";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "driver_type_c_not_supported", 27)))
    {
        output =
            SDMMC_CAPABILITIES_HI_DRV_C_SUPPORT::driver_type_c_not_supported;
    }

    return result;
}

}; // namespace XMC4700
