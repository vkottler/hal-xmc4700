/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_K1RDY : uint8_t
{
    value1 /*!< K1-Divider does not operate with the new value */,
    value2 = 1 /*!< K1-Divider operate with the new value */
};
static_assert(sizeof(SCU_PLL_PLLSTAT_K1RDY) == 1);

static constexpr uint16_t SCU_PLL_PLLSTAT_K1RDY_id = 2774;

/**
 * Converts SCU_PLL_PLLSTAT_K1RDY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLSTAT_K1RDY instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLSTAT_K1RDY";

    switch (instance)
    {
    case SCU_PLL_PLLSTAT_K1RDY::value1:
        result = "value1";
        break;
    case SCU_PLL_PLLSTAT_K1RDY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLSTAT_K1RDY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLSTAT_K1RDY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_PLLSTAT_K1RDY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_PLLSTAT_K1RDY::value2;
    }

    return result;
}

}; // namespace XMC4700
