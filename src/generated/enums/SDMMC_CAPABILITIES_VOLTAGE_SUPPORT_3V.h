/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V : uint8_t
{
    _30v_not_supported /*!< 3.0V not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V) == 1);

/**
 * Converts SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V::_30v_not_supported:
        result = "_30v_not_supported";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_30v_not_supported", 18)))
    {
        output = SDMMC_CAPABILITIES_VOLTAGE_SUPPORT_3V::_30v_not_supported;
    }

    return result;
}

}; // namespace XMC4700
