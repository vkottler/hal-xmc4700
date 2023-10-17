/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCLR_RTCEV : uint8_t
{
    no_effect /*!< No effect */,
    clear_wake_up_event = 1 /*!< Clear wake-up event */
};
static_assert(sizeof(SCU_HIBERNATE_HDCLR_RTCEV) == 1);

/**
 * Converts SCU_HIBERNATE_HDCLR_RTCEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCLR_RTCEV instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCLR_RTCEV";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCLR_RTCEV::no_effect:
        result = "no_effect";
        break;
    case SCU_HIBERNATE_HDCLR_RTCEV::clear_wake_up_event:
        result = "clear_wake_up_event";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCLR_RTCEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCLR_RTCEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = SCU_HIBERNATE_HDCLR_RTCEV::no_effect;
    }
    else if ((result = !strncmp(data, "clear_wake_up_event", 19)))
    {
        output = SCU_HIBERNATE_HDCLR_RTCEV::clear_wake_up_event;
    }

    return result;
}

}; // namespace XMC4700
