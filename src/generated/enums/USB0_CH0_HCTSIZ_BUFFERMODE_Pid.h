/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_CH0_HCTSIZ_BUFFERMODE_Pid : uint8_t
{
    data0 /*!< DATA0 */,
    data2 = 1 /*!< DATA2 */,
    data1 = 2 /*!< DATA1 */,
    mdata_non_controlsetup_control =
        3 /*!< MDATA (non-control)/SETUP (control) */
};
static_assert(sizeof(USB0_CH0_HCTSIZ_BUFFERMODE_Pid) == 1);

/**
 * Converts USB0_CH0_HCTSIZ_BUFFERMODE_Pid to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCTSIZ_BUFFERMODE_Pid instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCTSIZ_BUFFERMODE_Pid";

    switch (instance)
    {
    case USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data0:
        result = "data0";
        break;
    case USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data2:
        result = "data2";
        break;
    case USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data1:
        result = "data1";
        break;
    case USB0_CH0_HCTSIZ_BUFFERMODE_Pid::mdata_non_controlsetup_control:
        result = "mdata_non_controlsetup_control";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCTSIZ_BUFFERMODE_Pid.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USB0_CH0_HCTSIZ_BUFFERMODE_Pid &output)
{
    bool result = false;

    if ((result = !strncmp(data, "data0", 5)))
    {
        output = USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data0;
    }
    else if ((result = !strncmp(data, "data2", 5)))
    {
        output = USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data2;
    }
    else if ((result = !strncmp(data, "data1", 5)))
    {
        output = USB0_CH0_HCTSIZ_BUFFERMODE_Pid::data1;
    }
    else if ((result = !strncmp(data, "mdata_non_controlsetup_control", 30)))
    {
        output =
            USB0_CH0_HCTSIZ_BUFFERMODE_Pid::mdata_non_controlsetup_control;
    }

    return result;
}

}; // namespace XMC4700
