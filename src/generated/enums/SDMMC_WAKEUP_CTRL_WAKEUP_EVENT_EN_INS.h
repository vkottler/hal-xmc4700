/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Disable",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Enable",
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

enum class SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS) == 1);

static constexpr uint16_t SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS_id = 1466;

/**
 * Converts SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS instance)
{
    const char *result = "UNKNOWN SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS";

    switch (instance)
    {
    case SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS::value1:
        result = "value1";
        break;
    case SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_WAKEUP_CTRL_WAKEUP_EVENT_EN_INS::value2;
    }

    return result;
}

}; // namespace XMC4700