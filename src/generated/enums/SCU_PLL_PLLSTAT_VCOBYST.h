/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_VCOBYST : uint8_t
{
    value1 /*!< Free-running / Normal Mode is entered */,
    value2 = 1 /*!< Prescaler Mode is entered */
};
static_assert(sizeof(SCU_PLL_PLLSTAT_VCOBYST) == 1);

/**
 * Converts SCU_PLL_PLLSTAT_VCOBYST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLSTAT_VCOBYST instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLSTAT_VCOBYST";

    switch (instance)
    {
    case SCU_PLL_PLLSTAT_VCOBYST::value1:
        result = "value1";
        break;
    case SCU_PLL_PLLSTAT_VCOBYST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLSTAT_VCOBYST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLSTAT_VCOBYST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_PLLSTAT_VCOBYST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_PLLSTAT_VCOBYST::value2;
    }

    return result;
}

}; // namespace XMC4700
