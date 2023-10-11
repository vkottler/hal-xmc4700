/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_HI_SDR104_SUPPORT : uint8_t
{
    value1 /*!< SDR104 is not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_HI_SDR104_SUPPORT) == 1);

static constexpr uint16_t SDMMC_CAPABILITIES_HI_SDR104_SUPPORT_id = 3070;

/**
 * Converts SDMMC_CAPABILITIES_HI_SDR104_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_HI_SDR104_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_HI_SDR104_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_HI_SDR104_SUPPORT::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_HI_SDR104_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CAPABILITIES_HI_SDR104_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CAPABILITIES_HI_SDR104_SUPPORT::value1;
    }

    return result;
}

}; // namespace XMC4700
