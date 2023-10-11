/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP0_DIEPCTL0_NAKSts : uint8_t
{
    value1 /*!< The core is transmitting non-NAK handshakes based on the FIFO status */,
    value2 = 1 /*!< The core is transmitting NAK handshakes on this endpoint. */
};
static_assert(sizeof(USB0_EP0_DIEPCTL0_NAKSts) == 1);

static constexpr uint16_t USB0_EP0_DIEPCTL0_NAKSts_id = 3172;

/**
 * Converts USB0_EP0_DIEPCTL0_NAKSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP0_DIEPCTL0_NAKSts instance)
{
    const char *result = "UNKNOWN USB0_EP0_DIEPCTL0_NAKSts";

    switch (instance)
    {
    case USB0_EP0_DIEPCTL0_NAKSts::value1:
        result = "value1";
        break;
    case USB0_EP0_DIEPCTL0_NAKSts::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP0_DIEPCTL0_NAKSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_EP0_DIEPCTL0_NAKSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_EP0_DIEPCTL0_NAKSts::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_EP0_DIEPCTL0_NAKSts::value2;
    }

    return result;
}

}; // namespace XMC4700
