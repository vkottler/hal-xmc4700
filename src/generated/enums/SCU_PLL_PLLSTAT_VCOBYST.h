/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_VCOBYST : uint8_t
{
    free_running_normal_mode_entered /*!< Free-running / Normal Mode is entered
                                      */
        ,
    prescaler_mode_entered = 1 /*!< Prescaler Mode is entered */
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
    case SCU_PLL_PLLSTAT_VCOBYST::free_running_normal_mode_entered:
        result = "free_running_normal_mode_entered";
        break;
    case SCU_PLL_PLLSTAT_VCOBYST::prescaler_mode_entered:
        result = "prescaler_mode_entered";
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

    if ((result = !strncmp(data, "free_running_normal_mode_entered", 32)))
    {
        output = SCU_PLL_PLLSTAT_VCOBYST::free_running_normal_mode_entered;
    }
    else if ((result = !strncmp(data, "prescaler_mode_entered", 22)))
    {
        output = SCU_PLL_PLLSTAT_VCOBYST::prescaler_mode_entered;
    }

    return result;
}

}; // namespace XMC4700
