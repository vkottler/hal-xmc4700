/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP0_DOEPTSIZ0_SUPCnt : uint8_t
{
    1_packet = 1 /*!< 1 packet */,
    2_packets = 2 /*!< 2 packets */,
    3_packets = 3 /*!< 3 packets */
};
static_assert(sizeof(USB0_EP0_DOEPTSIZ0_SUPCnt) == 1);

/**
 * Converts USB0_EP0_DOEPTSIZ0_SUPCnt to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP0_DOEPTSIZ0_SUPCnt instance)
{
    const char *result = "UNKNOWN USB0_EP0_DOEPTSIZ0_SUPCnt";

    switch (instance)
    {
    case USB0_EP0_DOEPTSIZ0_SUPCnt::1_packet:
        result = "1_packet";
        break;
    case USB0_EP0_DOEPTSIZ0_SUPCnt::2_packets:
        result = "2_packets";
        break;
    case USB0_EP0_DOEPTSIZ0_SUPCnt::3_packets:
        result = "3_packets";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP0_DOEPTSIZ0_SUPCnt.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_EP0_DOEPTSIZ0_SUPCnt &output)
{
    bool result = false;

    if ((result = !strncmp(data, "1_packet", 8)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::1_packet;
    }
    else if ((result = !strncmp(data, "2_packets", 9)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::2_packets;
    }
    else if ((result = !strncmp(data, "3_packets", 9)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::3_packets;
    }

    return result;
}

}; // namespace XMC4700
