/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Physical Sector Repair command disabled; Erase Physical Sector command sequence available.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Physical Sector Repair command sequence enabled; Erase Physical Sector command sequence disabled.",
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

enum class FLASH0_PROCON1_PSR : uint8_t
{
    value1 /*!< Physical Sector Repair command disabled; Erase Physical Sector command sequence available. */,
    value2 = 1 /*!< Physical Sector Repair command sequence enabled; Erase Physical Sector command sequence disabled. */
};
static_assert(sizeof(FLASH0_PROCON1_PSR) == 1);

static constexpr uint16_t FLASH0_PROCON1_PSR_id = 1970;

/**
 * Converts FLASH0_PROCON1_PSR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON1_PSR instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON1_PSR";

    switch (instance)
    {
    case FLASH0_PROCON1_PSR::value1:
        result = "value1";
        break;
    case FLASH0_PROCON1_PSR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON1_PSR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON1_PSR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_PROCON1_PSR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_PROCON1_PSR::value2;
    }

    return result;
}

}; // namespace XMC4700