/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_SesReqScs : uint8_t
{
    value1 /*!< Session request failure */,
    value2 = 1 /*!< Session request success */
};
static_assert(sizeof(USB0_GOTGCTL_SesReqScs) == 1);

/**
 * Converts USB0_GOTGCTL_SesReqScs to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_SesReqScs instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_SesReqScs";

    switch (instance)
    {
    case USB0_GOTGCTL_SesReqScs::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_SesReqScs::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_SesReqScs.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_SesReqScs &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_SesReqScs::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_SesReqScs::value2;
    }

    return result;
}

}; // namespace XMC4700
