/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_LPC : uint8_t
{
    filter_disabled /*!< Low pass filter disabled */,
    1_clock_cycle = 1 /*!< Low pass of 1 clock cycle */,
    2_clock_cycles = 2 /*!< Low pass of 2 clock cycles */,
    4_clock_cycles = 3 /*!< Low pass of 4 clock cycles */,
    8_clock_cycles = 4 /*!< Low pass of 8 clock cycles */,
    16_clock_cycles = 5 /*!< Low pass of 16 clock cycles */,
    32_clock_cycles = 6 /*!< Low pass of 32 clock cycles */,
    64_clock_cycles = 7 /*!< Low pass of 64 clock cycles */
};
static_assert(sizeof(POSIF0_PCONF_LPC) == 1);

/**
 * Converts POSIF0_PCONF_LPC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_LPC instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_LPC";

    switch (instance)
    {
    case POSIF0_PCONF_LPC::filter_disabled:
        result = "filter_disabled";
        break;
    case POSIF0_PCONF_LPC::1_clock_cycle:
        result = "1_clock_cycle";
        break;
    case POSIF0_PCONF_LPC::2_clock_cycles:
        result = "2_clock_cycles";
        break;
    case POSIF0_PCONF_LPC::4_clock_cycles:
        result = "4_clock_cycles";
        break;
    case POSIF0_PCONF_LPC::8_clock_cycles:
        result = "8_clock_cycles";
        break;
    case POSIF0_PCONF_LPC::16_clock_cycles:
        result = "16_clock_cycles";
        break;
    case POSIF0_PCONF_LPC::32_clock_cycles:
        result = "32_clock_cycles";
        break;
    case POSIF0_PCONF_LPC::64_clock_cycles:
        result = "64_clock_cycles";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_LPC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_LPC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "filter_disabled", 15)))
    {
        output = POSIF0_PCONF_LPC::filter_disabled;
    }
    else if ((result = !strncmp(data, "1_clock_cycle", 13)))
    {
        output = POSIF0_PCONF_LPC::1_clock_cycle;
    }
    else if ((result = !strncmp(data, "2_clock_cycles", 14)))
    {
        output = POSIF0_PCONF_LPC::2_clock_cycles;
    }
    else if ((result = !strncmp(data, "4_clock_cycles", 14)))
    {
        output = POSIF0_PCONF_LPC::4_clock_cycles;
    }
    else if ((result = !strncmp(data, "8_clock_cycles", 14)))
    {
        output = POSIF0_PCONF_LPC::8_clock_cycles;
    }
    else if ((result = !strncmp(data, "16_clock_cycles", 15)))
    {
        output = POSIF0_PCONF_LPC::16_clock_cycles;
    }
    else if ((result = !strncmp(data, "32_clock_cycles", 15)))
    {
        output = POSIF0_PCONF_LPC::32_clock_cycles;
    }
    else if ((result = !strncmp(data, "64_clock_cycles", 15)))
    {
        output = POSIF0_PCONF_LPC::64_clock_cycles;
    }

    return result;
}

}; // namespace XMC4700
