/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTSET_HIBRS : uint8_t
{
    no_effect /*!< No effect */,
    assert_reset = 1 /*!< Assert reset */
};
static_assert(sizeof(SCU_RESET_RSTSET_HIBRS) == 1);

/**
 * Converts SCU_RESET_RSTSET_HIBRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTSET_HIBRS instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTSET_HIBRS";

    switch (instance)
    {
    case SCU_RESET_RSTSET_HIBRS::no_effect:
        result = "no_effect";
        break;
    case SCU_RESET_RSTSET_HIBRS::assert_reset:
        result = "assert_reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTSET_HIBRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTSET_HIBRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_RESET_RSTSET_HIBRS::no_effect;
    }
    else if ((result = !strncmp(data, "assert_reset", 12)))
    {
        output = SCU_RESET_RSTSET_HIBRS::assert_reset;
    }

    return result;
}

}; // namespace XMC4700
