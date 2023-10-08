/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "1 packet",
 *       "value": 1
 *     },
 *     "value2": {
 *       "description": "2 packets",
 *       "value": 2
 *     },
 *     "value3": {
 *       "description": "3 packets",
 *       "value": 3
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP0_DOEPTSIZ0_SUPCnt : uint8_t
{
    value1 = 1 /*!< 1 packet */,
    value2 = 2 /*!< 2 packets */,
    value3 = 3 /*!< 3 packets */
};
static_assert(sizeof(USB0_EP0_DOEPTSIZ0_SUPCnt) == 1);

static constexpr uint16_t USB0_EP0_DOEPTSIZ0_SUPCnt_id = 1818;

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
    case USB0_EP0_DOEPTSIZ0_SUPCnt::value1:
        result = "value1";
        break;
    case USB0_EP0_DOEPTSIZ0_SUPCnt::value2:
        result = "value2";
        break;
    case USB0_EP0_DOEPTSIZ0_SUPCnt::value3:
        result = "value3";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_EP0_DOEPTSIZ0_SUPCnt::value3;
    }

    return result;
}

}; // namespace XMC4700
