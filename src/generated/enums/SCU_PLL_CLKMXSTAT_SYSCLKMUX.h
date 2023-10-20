/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_CLKMXSTAT_SYSCLKMUX : uint8_t
{
    fofi_clock_active = 1 /*!< fOFI clock active */,
    fpll_clock_active = 2 /*!< fPLL clock active */
};
static_assert(sizeof(SCU_PLL_CLKMXSTAT_SYSCLKMUX) == 1);

/**
 * Converts SCU_PLL_CLKMXSTAT_SYSCLKMUX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_CLKMXSTAT_SYSCLKMUX instance)
{
    const char *result = "UNKNOWN SCU_PLL_CLKMXSTAT_SYSCLKMUX";

    switch (instance)
    {
    case SCU_PLL_CLKMXSTAT_SYSCLKMUX::fofi_clock_active:
        result = "fofi_clock_active";
        break;
    case SCU_PLL_CLKMXSTAT_SYSCLKMUX::fpll_clock_active:
        result = "fpll_clock_active";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_CLKMXSTAT_SYSCLKMUX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_CLKMXSTAT_SYSCLKMUX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "fofi_clock_active", 17)))
    {
        output = SCU_PLL_CLKMXSTAT_SYSCLKMUX::fofi_clock_active;
    }
    else if ((result = !strncmp(data, "fpll_clock_active", 17)))
    {
        output = SCU_PLL_CLKMXSTAT_SYSCLKMUX::fpll_clock_active;
    }

    return result;
}

}; // namespace XMC4700
