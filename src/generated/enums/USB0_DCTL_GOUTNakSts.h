/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A handshake is sent based on the FIFO Status and the NAK and STALL bit settings.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "No data is written to the RxFIFO, irrespective of space availability. Sends a NAK handshake on all packets, except on SETUP transactions. All isochronous OUT packets are dropped.",
 *       "value": 1
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

enum class USB0_DCTL_GOUTNakSts : uint8_t
{
    value1 /*!< A handshake is sent based on the FIFO Status and the NAK and STALL bit settings. */,
    value2 = 1 /*!< No data is written to the RxFIFO, irrespective of space availability. Sends a NAK handshake on all packets, except on SETUP transactions. All isochronous OUT packets are dropped. */
};
static_assert(sizeof(USB0_DCTL_GOUTNakSts) == 1);

static constexpr uint16_t USB0_DCTL_GOUTNakSts_id = 367;

/**
 * Converts USB0_DCTL_GOUTNakSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCTL_GOUTNakSts instance)
{
    const char *result = "UNKNOWN USB0_DCTL_GOUTNakSts";

    switch (instance)
    {
    case USB0_DCTL_GOUTNakSts::value1:
        result = "value1";
        break;
    case USB0_DCTL_GOUTNakSts::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCTL_GOUTNakSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCTL_GOUTNakSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCTL_GOUTNakSts::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCTL_GOUTNakSts::value2;
    }

    return result;
}

}; // namespace XMC4700
