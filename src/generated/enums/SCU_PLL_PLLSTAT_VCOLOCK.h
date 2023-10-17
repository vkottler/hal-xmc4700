/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_VCOLOCK : uint8_t
{
    not_locked /*!< PLL not locked */,
    locked = 1 /*!< PLL locked */
};
static_assert(sizeof(SCU_PLL_PLLSTAT_VCOLOCK) == 1);

/**
 * Converts SCU_PLL_PLLSTAT_VCOLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLSTAT_VCOLOCK instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLSTAT_VCOLOCK";

    switch (instance)
    {
    case SCU_PLL_PLLSTAT_VCOLOCK::not_locked:
        result = "not_locked";
        break;
    case SCU_PLL_PLLSTAT_VCOLOCK::locked:
        result = "locked";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLSTAT_VCOLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLSTAT_VCOLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_locked", 10)))
    {
        output = SCU_PLL_PLLSTAT_VCOLOCK::not_locked;
    }
    else if ((result = !strncmp(data, "locked", 6)))
    {
        output = SCU_PLL_PLLSTAT_VCOLOCK::locked;
    }

    return result;
}

}; // namespace XMC4700
