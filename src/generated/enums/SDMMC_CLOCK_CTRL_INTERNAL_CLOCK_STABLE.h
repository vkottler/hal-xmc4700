/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Not Ready",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Ready",
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

enum class SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE : uint8_t
{
    value1 /*!< Not Ready */,
    value2 = 1 /*!< Ready */
};
static_assert(sizeof(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE) == 1);

static constexpr uint16_t SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE_id = 1469;

/**
 * Converts SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE instance)
{
    const char *result = "UNKNOWN SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE";

    switch (instance)
    {
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::value1:
        result = "value1";
        break;
    case SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_CLOCK_CTRL_INTERNAL_CLOCK_STABLE::value2;
    }

    return result;
}

}; // namespace XMC4700
