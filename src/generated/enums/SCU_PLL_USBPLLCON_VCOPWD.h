/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Normal behavior",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The VCO is put into a Power Saving Mode",
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

enum class SCU_PLL_USBPLLCON_VCOPWD : uint8_t
{
    value1 /*!< Normal behavior */,
    value2 = 1 /*!< The VCO is put into a Power Saving Mode */
};
static_assert(sizeof(SCU_PLL_USBPLLCON_VCOPWD) == 1);

static constexpr uint16_t SCU_PLL_USBPLLCON_VCOPWD_id = 1312;

/**
 * Converts SCU_PLL_USBPLLCON_VCOPWD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_USBPLLCON_VCOPWD instance)
{
    const char *result = "UNKNOWN SCU_PLL_USBPLLCON_VCOPWD";

    switch (instance)
    {
    case SCU_PLL_USBPLLCON_VCOPWD::value1:
        result = "value1";
        break;
    case SCU_PLL_USBPLLCON_VCOPWD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_USBPLLCON_VCOPWD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_USBPLLCON_VCOPWD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_USBPLLCON_VCOPWD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_USBPLLCON_VCOPWD::value2;
    }

    return result;
}

}; // namespace XMC4700
