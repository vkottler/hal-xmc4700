/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP1_DOEPTSIZ_ISO_RxDPID : uint8_t
{
    data0 /*!< DATA0 */,
    data2 = 1 /*!< DATA2 */,
    data1 = 2 /*!< DATA1 */,
    mdata = 3 /*!< MDATA */
};
static_assert(sizeof(USB0_EP1_DOEPTSIZ_ISO_RxDPID) == 1);

/**
 * Converts USB0_EP1_DOEPTSIZ_ISO_RxDPID to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP1_DOEPTSIZ_ISO_RxDPID instance)
{
    const char *result = "UNKNOWN USB0_EP1_DOEPTSIZ_ISO_RxDPID";

    switch (instance)
    {
    case USB0_EP1_DOEPTSIZ_ISO_RxDPID::data0:
        result = "data0";
        break;
    case USB0_EP1_DOEPTSIZ_ISO_RxDPID::data2:
        result = "data2";
        break;
    case USB0_EP1_DOEPTSIZ_ISO_RxDPID::data1:
        result = "data1";
        break;
    case USB0_EP1_DOEPTSIZ_ISO_RxDPID::mdata:
        result = "mdata";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP1_DOEPTSIZ_ISO_RxDPID.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_EP1_DOEPTSIZ_ISO_RxDPID &output)
{
    bool result = false;

    if ((result = !strncmp(data, "data0", 5)))
    {
        output = USB0_EP1_DOEPTSIZ_ISO_RxDPID::data0;
    }
    else if ((result = !strncmp(data, "data2", 5)))
    {
        output = USB0_EP1_DOEPTSIZ_ISO_RxDPID::data2;
    }
    else if ((result = !strncmp(data, "data1", 5)))
    {
        output = USB0_EP1_DOEPTSIZ_ISO_RxDPID::data1;
    }
    else if ((result = !strncmp(data, "mdata", 5)))
    {
        output = USB0_EP1_DOEPTSIZ_ISO_RxDPID::mdata;
    }

    return result;
}

}; // namespace XMC4700
