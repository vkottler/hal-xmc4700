/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP0_EXTCLOCK : uint8_t
{
    equal_int_clk_frequency /*!< Equal to INT_CLK frequency. */,
    _12_int_clk_frequency = 1 /*!< 1/2 of INT_CLK frequency. */,
    _13_int_clk_frequency = 2 /*!< 1/3 of INT_CLK frequency. */,
    _14_int_clk_frequency_default_after_reset =
        3 /*!< 1/4 of INT_CLK frequency (default after reset). */
};
static_assert(sizeof(EBU_BUSRAP0_EXTCLOCK) == 1);

/**
 * Converts EBU_BUSRAP0_EXTCLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP0_EXTCLOCK instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP0_EXTCLOCK";

    switch (instance)
    {
    case EBU_BUSRAP0_EXTCLOCK::equal_int_clk_frequency:
        result = "equal_int_clk_frequency";
        break;
    case EBU_BUSRAP0_EXTCLOCK::_12_int_clk_frequency:
        result = "_12_int_clk_frequency";
        break;
    case EBU_BUSRAP0_EXTCLOCK::_13_int_clk_frequency:
        result = "_13_int_clk_frequency";
        break;
    case EBU_BUSRAP0_EXTCLOCK::_14_int_clk_frequency_default_after_reset:
        result = "_14_int_clk_frequency_default_after_reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP0_EXTCLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP0_EXTCLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "equal_int_clk_frequency", 23)))
    {
        output = EBU_BUSRAP0_EXTCLOCK::equal_int_clk_frequency;
    }
    else if ((result = !strncmp(data, "_12_int_clk_frequency", 21)))
    {
        output = EBU_BUSRAP0_EXTCLOCK::_12_int_clk_frequency;
    }
    else if ((result = !strncmp(data, "_13_int_clk_frequency", 21)))
    {
        output = EBU_BUSRAP0_EXTCLOCK::_13_int_clk_frequency;
    }
    else if ((result = !strncmp(
                  data, "_14_int_clk_frequency_default_after_reset", 41)))
    {
        output =
            EBU_BUSRAP0_EXTCLOCK::_14_int_clk_frequency_default_after_reset;
    }

    return result;
}

}; // namespace XMC4700
