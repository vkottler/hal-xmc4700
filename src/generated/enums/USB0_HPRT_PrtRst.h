/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtRst : uint8_t
{
    value1 /*!< Port not in reset */,
    value2 = 1 /*!< Port in reset */
};
static_assert(sizeof(USB0_HPRT_PrtRst) == 1);

static constexpr uint16_t USB0_HPRT_PrtRst_id = 354;

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
    case USB0_HPRT_PrtRst::value1:
        result = "value1";
        break;
    case USB0_HPRT_PrtRst::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_HPRT_PrtRst::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_HPRT_PrtRst::value2;
    }

    return result;
}

}; // namespace XMC4700
