/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_DSLEEPCR_FPDN : uint8_t
{
    flash_power_down_module = 1 /*!< Flash power down module */,
    no_effect /*!< No effect */
};
static_assert(sizeof(SCU_CLK_DSLEEPCR_FPDN) == 1);

/**
 * Converts SCU_CLK_DSLEEPCR_FPDN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_DSLEEPCR_FPDN instance)
{
    const char *result = "UNKNOWN SCU_CLK_DSLEEPCR_FPDN";

    switch (instance)
    {
    case SCU_CLK_DSLEEPCR_FPDN::flash_power_down_module:
        result = "flash_power_down_module";
        break;
    case SCU_CLK_DSLEEPCR_FPDN::no_effect:
        result = "no_effect";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_DSLEEPCR_FPDN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_DSLEEPCR_FPDN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "flash_power_down_module", 23)))
    {
        output = SCU_CLK_DSLEEPCR_FPDN::flash_power_down_module;
    }
    else if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_CLK_DSLEEPCR_FPDN::no_effect;
    }

    return result;
}

}; // namespace XMC4700
