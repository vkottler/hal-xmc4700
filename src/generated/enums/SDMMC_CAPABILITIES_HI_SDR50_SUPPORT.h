/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "SDR50 is not supported",
 *       "value": 0
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_HI_SDR50_SUPPORT : uint8_t
{
    value1 /*!< SDR50 is not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_HI_SDR50_SUPPORT) == 1);

static constexpr uint16_t SDMMC_CAPABILITIES_HI_SDR50_SUPPORT_id = 1562;

/**
 * Converts SDMMC_CAPABILITIES_HI_SDR50_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_HI_SDR50_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_HI_SDR50_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_HI_SDR50_SUPPORT::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_HI_SDR50_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CAPABILITIES_HI_SDR50_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CAPABILITIES_HI_SDR50_SUPPORT::value1;
    }

    return result;
}

}; // namespace XMC4700
