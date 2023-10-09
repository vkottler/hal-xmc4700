/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_CH0_HCTSIZ_SCATGATHER_Pid : uint8_t
{
    value1 /*!< DATA0 */,
    value2 = 1 /*!< DATA2 */,
    value3 = 2 /*!< DATA1 */,
    value4 = 3 /*!< MDATA (non-control) */
};
static_assert(sizeof(USB0_CH0_HCTSIZ_SCATGATHER_Pid) == 1);

static constexpr uint16_t USB0_CH0_HCTSIZ_SCATGATHER_Pid_id = 814;

/**
 * Converts USB0_CH0_HCTSIZ_SCATGATHER_Pid to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCTSIZ_SCATGATHER_Pid instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCTSIZ_SCATGATHER_Pid";

    switch (instance)
    {
    case USB0_CH0_HCTSIZ_SCATGATHER_Pid::value1:
        result = "value1";
        break;
    case USB0_CH0_HCTSIZ_SCATGATHER_Pid::value2:
        result = "value2";
        break;
    case USB0_CH0_HCTSIZ_SCATGATHER_Pid::value3:
        result = "value3";
        break;
    case USB0_CH0_HCTSIZ_SCATGATHER_Pid::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCTSIZ_SCATGATHER_Pid.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USB0_CH0_HCTSIZ_SCATGATHER_Pid &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_CH0_HCTSIZ_SCATGATHER_Pid::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_CH0_HCTSIZ_SCATGATHER_Pid::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_CH0_HCTSIZ_SCATGATHER_Pid::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_CH0_HCTSIZ_SCATGATHER_Pid::value4;
    }

    return result;
}

}; // namespace XMC4700
