/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_SesReq : uint8_t
{
    value1 /*!< No session request */,
    value2 = 1 /*!< Session request */
};
static_assert(sizeof(USB0_GOTGCTL_SesReq) == 1);

static constexpr uint16_t USB0_GOTGCTL_SesReq_id = 3110;

/**
 * Converts USB0_GOTGCTL_SesReq to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_SesReq instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_SesReq";

    switch (instance)
    {
    case USB0_GOTGCTL_SesReq::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_SesReq::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_SesReq.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_SesReq &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_SesReq::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_SesReq::value2;
    }

    return result;
}

}; // namespace XMC4700
