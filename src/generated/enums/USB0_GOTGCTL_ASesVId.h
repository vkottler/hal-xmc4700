/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GOTGCTL_ASesVId : uint8_t
{
    value1 /*!< A-session is not valid */,
    value2 = 1 /*!< A-session is valid */
};
static_assert(sizeof(USB0_GOTGCTL_ASesVId) == 1);

static constexpr uint16_t USB0_GOTGCTL_ASesVId_id = 304;

/**
 * Converts USB0_GOTGCTL_ASesVId to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GOTGCTL_ASesVId instance)
{
    const char *result = "UNKNOWN USB0_GOTGCTL_ASesVId";

    switch (instance)
    {
    case USB0_GOTGCTL_ASesVId::value1:
        result = "value1";
        break;
    case USB0_GOTGCTL_ASesVId::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GOTGCTL_ASesVId.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GOTGCTL_ASesVId &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GOTGCTL_ASesVId::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GOTGCTL_ASesVId::value2;
    }

    return result;
}

}; // namespace XMC4700
