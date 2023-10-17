/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtRst : uint8_t
{
    not_reset /*!< Port not in reset */,
    reset = 1 /*!< Port in reset */
};
static_assert(sizeof(USB0_HPRT_PrtRst) == 1);

/**
 * Converts USB0_HPRT_PrtRst to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtRst instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtRst";

    switch (instance)
    {
    case USB0_HPRT_PrtRst::not_reset:
        result = "not_reset";
        break;
    case USB0_HPRT_PrtRst::reset:
        result = "reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtRst.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtRst &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_reset", 9)))
    {
        output = USB0_HPRT_PrtRst::not_reset;
    }
    else if ((result = !strncmp(data, "reset", 5)))
    {
        output = USB0_HPRT_PrtRst::reset;
    }

    return result;
}

}; // namespace XMC4700
