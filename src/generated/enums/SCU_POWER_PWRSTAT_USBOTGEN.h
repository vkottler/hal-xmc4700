/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Power-down",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Active",
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

enum class SCU_POWER_PWRSTAT_USBOTGEN : uint8_t
{
    value1 /*!< Power-down */,
    value2 = 1 /*!< Active */
};
static_assert(sizeof(SCU_POWER_PWRSTAT_USBOTGEN) == 1);

static constexpr uint16_t SCU_POWER_PWRSTAT_USBOTGEN_id = 633;

/**
 * Converts SCU_POWER_PWRSTAT_USBOTGEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_POWER_PWRSTAT_USBOTGEN instance)
{
    const char *result = "UNKNOWN SCU_POWER_PWRSTAT_USBOTGEN";

    switch (instance)
    {
    case SCU_POWER_PWRSTAT_USBOTGEN::value1:
        result = "value1";
        break;
    case SCU_POWER_PWRSTAT_USBOTGEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_POWER_PWRSTAT_USBOTGEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_POWER_PWRSTAT_USBOTGEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_POWER_PWRSTAT_USBOTGEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_POWER_PWRSTAT_USBOTGEN::value2;
    }

    return result;
}

}; // namespace XMC4700
