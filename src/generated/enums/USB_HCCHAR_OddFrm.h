/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB_HCCHAR_OddFrm : uint8_t
{
    value1 /*!< Even frame */,
    value2 = 1 /*!< Odd frame */
};
static_assert(sizeof(USB_HCCHAR_OddFrm) == 1);

static constexpr uint16_t USB_HCCHAR_OddFrm_id = 1080;

/**
 * Converts USB_HCCHAR_OddFrm to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB_HCCHAR_OddFrm instance)
{
    const char *result = "UNKNOWN USB_HCCHAR_OddFrm";

    switch (instance)
    {
    case USB_HCCHAR_OddFrm::value1:
        result = "value1";
        break;
    case USB_HCCHAR_OddFrm::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB_HCCHAR_OddFrm.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB_HCCHAR_OddFrm &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB_HCCHAR_OddFrm::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB_HCCHAR_OddFrm::value2;
    }

    return result;
}

}; // namespace XMC4700