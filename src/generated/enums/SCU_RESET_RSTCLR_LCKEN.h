/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTCLR_LCKEN : uint8_t
{
    no_effect /*!< No effect */,
    disable_reset_when_lockup_gets_asserted =
        1 /*!< Disable reset when Lockup gets asserted */
};
static_assert(sizeof(SCU_RESET_RSTCLR_LCKEN) == 1);

/**
 * Converts SCU_RESET_RSTCLR_LCKEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTCLR_LCKEN instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTCLR_LCKEN";

    switch (instance)
    {
    case SCU_RESET_RSTCLR_LCKEN::no_effect:
        result = "no_effect";
        break;
    case SCU_RESET_RSTCLR_LCKEN::disable_reset_when_lockup_gets_asserted:
        result = "disable_reset_when_lockup_gets_asserted";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTCLR_LCKEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTCLR_LCKEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_RESET_RSTCLR_LCKEN::no_effect;
    }
    else if ((result = !strncmp(
                  data, "disable_reset_when_lockup_gets_asserted", 39)))
    {
        output =
            SCU_RESET_RSTCLR_LCKEN::disable_reset_when_lockup_gets_asserted;
    }

    return result;
}

}; // namespace XMC4700
