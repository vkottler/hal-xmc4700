/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtSusp : uint8_t
{
    not_suspend_mode /*!< Port not in Suspend mode */,
    suspend_mode = 1 /*!< Port in Suspend mode */
};
static_assert(sizeof(USB0_HPRT_PrtSusp) == 1);

/**
 * Converts USB0_HPRT_PrtSusp to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtSusp instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtSusp";

    switch (instance)
    {
    case USB0_HPRT_PrtSusp::not_suspend_mode:
        result = "not_suspend_mode";
        break;
    case USB0_HPRT_PrtSusp::suspend_mode:
        result = "suspend_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtSusp.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtSusp &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_suspend_mode", 16)))
    {
        output = USB0_HPRT_PrtSusp::not_suspend_mode;
    }
    else if ((result = !strncmp(data, "suspend_mode", 12)))
    {
        output = USB0_HPRT_PrtSusp::suspend_mode;
    }

    return result;
}

}; // namespace XMC4700
