/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "MHz",
 *       "value": 1
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

enum class SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT : uint8_t
{
    value1 = 1 /*!< MHz */
};
static_assert(sizeof(SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT) == 1);

static constexpr uint16_t SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT_id = 1551;

/**
 * Converts SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CAPABILITIES_TIMEOUT_CLOCK_UNIT::value1;
    }

    return result;
}

}; // namespace XMC4700