/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CLKCLR_WDTCDI : uint8_t
{
    no_effect /*!< No effect */,
    disable_clock = 1 /*!< Disable clock */
};
static_assert(sizeof(SCU_CLK_CLKCLR_WDTCDI) == 1);

/**
 * Converts SCU_CLK_CLKCLR_WDTCDI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CLKCLR_WDTCDI instance)
{
    const char *result = "UNKNOWN SCU_CLK_CLKCLR_WDTCDI";

    switch (instance)
    {
    case SCU_CLK_CLKCLR_WDTCDI::no_effect:
        result = "no_effect";
        break;
    case SCU_CLK_CLKCLR_WDTCDI::disable_clock:
        result = "disable_clock";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CLKCLR_WDTCDI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CLKCLR_WDTCDI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_CLK_CLKCLR_WDTCDI::no_effect;
    }
    else if ((result = !strncmp(data, "disable_clock", 13)))
    {
        output = SCU_CLK_CLKCLR_WDTCDI::disable_clock;
    }

    return result;
}

}; // namespace XMC4700
