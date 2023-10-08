/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "VCO bandwidth is operation in the normal range. VCO output frequency is between 260 and 520 MHz for a input frequency between 8 and 16 MHz.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "VCO bandwidth is operation in the test range. VCO output frequency is between 260 and 520 MHz for a input frequency between 8 and 16 MHz.",
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

enum class SCU_PLL_PLLCON0_VCOTR : uint8_t
{
    value1 /*!< VCO bandwidth is operation in the normal range. VCO output frequency is between 260 and 520 MHz for a input frequency between 8 and 16 MHz. */,
    value2 = 1 /*!< VCO bandwidth is operation in the test range. VCO output frequency is between 260 and 520 MHz for a input frequency between 8 and 16 MHz. */
};
static_assert(sizeof(SCU_PLL_PLLCON0_VCOTR) == 1);

static constexpr uint16_t SCU_PLL_PLLCON0_VCOTR_id = 1298;

/**
 * Converts SCU_PLL_PLLCON0_VCOTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLCON0_VCOTR instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLCON0_VCOTR";

    switch (instance)
    {
    case SCU_PLL_PLLCON0_VCOTR::value1:
        result = "value1";
        break;
    case SCU_PLL_PLLCON0_VCOTR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLCON0_VCOTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLCON0_VCOTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_PLLCON0_VCOTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_PLLCON0_VCOTR::value2;
    }

    return result;
}

}; // namespace XMC4700
