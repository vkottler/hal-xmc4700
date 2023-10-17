/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTSTAT_HIBRS : uint8_t
{
    de_asserted /*!< Reset de-asserted */,
    asserted = 1 /*!< Reset asserted */
};
static_assert(sizeof(SCU_RESET_RSTSTAT_HIBRS) == 1);

/**
 * Converts SCU_RESET_RSTSTAT_HIBRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTSTAT_HIBRS instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTSTAT_HIBRS";

    switch (instance)
    {
    case SCU_RESET_RSTSTAT_HIBRS::de_asserted:
        result = "de_asserted";
        break;
    case SCU_RESET_RSTSTAT_HIBRS::asserted:
        result = "asserted";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTSTAT_HIBRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTSTAT_HIBRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "de_asserted", 11)))
    {
        output = SCU_RESET_RSTSTAT_HIBRS::de_asserted;
    }
    else if ((result = !strncmp(data, "asserted", 8)))
    {
        output = SCU_RESET_RSTSTAT_HIBRS::asserted;
    }

    return result;
}

}; // namespace XMC4700
