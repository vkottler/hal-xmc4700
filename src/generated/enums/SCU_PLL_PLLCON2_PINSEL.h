/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLCON2_PINSEL : uint8_t
{
    value1 /*!< PLL external oscillator selected */,
    value2 = 1 /*!< Backup clock fofi selected */
};
static_assert(sizeof(SCU_PLL_PLLCON2_PINSEL) == 1);

/**
 * Converts SCU_PLL_PLLCON2_PINSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLCON2_PINSEL instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLCON2_PINSEL";

    switch (instance)
    {
    case SCU_PLL_PLLCON2_PINSEL::value1:
        result = "value1";
        break;
    case SCU_PLL_PLLCON2_PINSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLCON2_PINSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLCON2_PINSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PLL_PLLCON2_PINSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PLL_PLLCON2_PINSEL::value2;
    }

    return result;
}

}; // namespace XMC4700