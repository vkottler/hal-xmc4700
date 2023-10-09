/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GRXSTSR_DEVICEMODE_PktSts : uint8_t
{
    value1 = 1 /*!< Global OUT NAK (triggers an interrupt) */,
    value2 = 2 /*!< OUT data packet received */,
    value3 = 3 /*!< OUT transfer completed (triggers an interrupt) */,
    value4 = 4 /*!< SETUP transaction completed (triggers an interrupt) */,
    value5 = 6 /*!< SETUP data packet received */
};
static_assert(sizeof(USB0_GRXSTSR_DEVICEMODE_PktSts) == 1);

static constexpr uint16_t USB0_GRXSTSR_DEVICEMODE_PktSts_id = 337;

/**
 * Converts USB0_GRXSTSR_DEVICEMODE_PktSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GRXSTSR_DEVICEMODE_PktSts instance)
{
    const char *result = "UNKNOWN USB0_GRXSTSR_DEVICEMODE_PktSts";

    switch (instance)
    {
    case USB0_GRXSTSR_DEVICEMODE_PktSts::value1:
        result = "value1";
        break;
    case USB0_GRXSTSR_DEVICEMODE_PktSts::value2:
        result = "value2";
        break;
    case USB0_GRXSTSR_DEVICEMODE_PktSts::value3:
        result = "value3";
        break;
    case USB0_GRXSTSR_DEVICEMODE_PktSts::value4:
        result = "value4";
        break;
    case USB0_GRXSTSR_DEVICEMODE_PktSts::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GRXSTSR_DEVICEMODE_PktSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USB0_GRXSTSR_DEVICEMODE_PktSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GRXSTSR_DEVICEMODE_PktSts::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GRXSTSR_DEVICEMODE_PktSts::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_GRXSTSR_DEVICEMODE_PktSts::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_GRXSTSR_DEVICEMODE_PktSts::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = USB0_GRXSTSR_DEVICEMODE_PktSts::value5;
    }

    return result;
}

}; // namespace XMC4700
