/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_ICSR_VECTACTIVE : uint16_t
{
    thread_mode /*!< Thread mode */
};
static_assert(sizeof(PPB_ICSR_VECTACTIVE) == 2);

/**
 * Converts PPB_ICSR_VECTACTIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_ICSR_VECTACTIVE instance)
{
    const char *result = "UNKNOWN PPB_ICSR_VECTACTIVE";

    switch (instance)
    {
    case PPB_ICSR_VECTACTIVE::thread_mode:
        result = "thread_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_ICSR_VECTACTIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_ICSR_VECTACTIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "thread_mode", 11)))
    {
        output = PPB_ICSR_VECTACTIVE::thread_mode;
    }

    return result;
}

}; // namespace XMC4700
