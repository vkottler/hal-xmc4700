/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Bypass Mode is not entered",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Bypass Mode is entered. Input fOSC is selected as output fPLL.",
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

enum class SCU_PLL_USBPLLSTAT_BY : uint8_t
{
    value1 /*!< Bypass Mode is not entered */,
    value2 = 1 /*!< Bypass Mode is entered. Input fOSC is selected as output fPLL. */
};
static_assert(sizeof(SCU_PLL_USBPLLSTAT_BY) == 1);

static constexpr uint16_t SCU_PLL_USBPLLSTAT_BY_id = 1304;

/**
 * Converts SCU_PLL_USBPLLSTAT_BY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_USBPLLSTAT_BY instance)
{
    const char *result = "UNKNOWN SCU_PLL_USBPLLSTAT_BY";

    switch (instance)
    {
    case SCU_PLL_USBPLLSTAT_BY::value1:
        result = "value1";
        break;
    case SCU_PLL_USBPLLSTAT_BY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_USBPLLSTAT_BY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_USBPLLSTAT_BY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_USBPLLSTAT_BY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_USBPLLSTAT_BY::value2;
    }

    return result;
}

}; // namespace XMC4700
