/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_ICSR_VECTPENDING : uint8_t
{
    no_pending_exceptions /*!< no pending exceptions */
};
static_assert(sizeof(PPB_ICSR_VECTPENDING) == 1);

/**
 * Converts PPB_ICSR_VECTPENDING to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_ICSR_VECTPENDING instance)
{
    const char *result = "UNKNOWN PPB_ICSR_VECTPENDING";

    switch (instance)
    {
    case PPB_ICSR_VECTPENDING::no_pending_exceptions:
        result = "no_pending_exceptions";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_ICSR_VECTPENDING.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_ICSR_VECTPENDING &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_pending_exceptions", 21)))
    {
        output = PPB_ICSR_VECTPENDING::no_pending_exceptions;
    }

    return result;
}

}; // namespace XMC4700
