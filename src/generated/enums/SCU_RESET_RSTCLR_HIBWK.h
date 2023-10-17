/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTCLR_HIBWK : uint8_t
{
    no_effect /*!< No effect */,
    de_assert_reset_status_bit = 1 /*!< De-assert reset status bit */
};
static_assert(sizeof(SCU_RESET_RSTCLR_HIBWK) == 1);

/**
 * Converts SCU_RESET_RSTCLR_HIBWK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTCLR_HIBWK instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTCLR_HIBWK";

    switch (instance)
    {
    case SCU_RESET_RSTCLR_HIBWK::no_effect:
        result = "no_effect";
        break;
    case SCU_RESET_RSTCLR_HIBWK::de_assert_reset_status_bit:
        result = "de_assert_reset_status_bit";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTCLR_HIBWK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTCLR_HIBWK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_RESET_RSTCLR_HIBWK::no_effect;
    }
    else if ((result = !strncmp(data, "de_assert_reset_status_bit", 26)))
    {
        output = SCU_RESET_RSTCLR_HIBWK::de_assert_reset_status_bit;
    }

    return result;
}

}; // namespace XMC4700
