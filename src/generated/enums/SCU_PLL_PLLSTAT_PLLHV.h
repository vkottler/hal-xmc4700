/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_PLLHV : uint8_t
{
    not_usable_frequency_fosc_too_high /*!< The OSC frequency is not usable.
                                          Frequency fOSC is too high. */
        ,
    usable = 1 /*!< The OSC frequency is usable */
};
static_assert(sizeof(SCU_PLL_PLLSTAT_PLLHV) == 1);

/**
 * Converts SCU_PLL_PLLSTAT_PLLHV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLSTAT_PLLHV instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLSTAT_PLLHV";

    switch (instance)
    {
    case SCU_PLL_PLLSTAT_PLLHV::not_usable_frequency_fosc_too_high:
        result = "not_usable_frequency_fosc_too_high";
        break;
    case SCU_PLL_PLLSTAT_PLLHV::usable:
        result = "usable";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLSTAT_PLLHV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLSTAT_PLLHV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_usable_frequency_fosc_too_high", 34)))
    {
        output = SCU_PLL_PLLSTAT_PLLHV::not_usable_frequency_fosc_too_high;
    }
    else if ((result = !strncmp(data, "usable", 6)))
    {
        output = SCU_PLL_PLLSTAT_PLLHV::usable;
    }

    return result;
}

}; // namespace XMC4700
