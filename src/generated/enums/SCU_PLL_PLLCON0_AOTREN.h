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

enum class SCU_PLL_PLLCON0_AOTREN : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(SCU_PLL_PLLCON0_AOTREN) == 1);

static constexpr uint16_t SCU_PLL_PLLCON0_AOTREN_id = 1293;

/**
 * Converts SCU_PLL_PLLCON0_AOTREN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLCON0_AOTREN instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLCON0_AOTREN";

    switch (instance)
    {
    case SCU_PLL_PLLCON0_AOTREN::value1:
        result = "value1";
        break;
    case SCU_PLL_PLLCON0_AOTREN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLCON0_AOTREN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLCON0_AOTREN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_PLLCON0_AOTREN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_PLLCON0_AOTREN::value2;
    }

    return result;
}

}; // namespace XMC4700
