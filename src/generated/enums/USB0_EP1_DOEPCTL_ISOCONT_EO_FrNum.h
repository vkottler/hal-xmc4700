/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum : uint8_t
{
    value1 /*!< Even frame */,
    value2 = 1 /*!< Odd rame */
};
static_assert(sizeof(USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum) == 1);

/**
 * Converts USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum instance)
{
    const char *result = "UNKNOWN USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum";

    switch (instance)
    {
    case USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum::value1:
        result = "value1";
        break;
    case USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_EP1_DOEPCTL_ISOCONT_EO_FrNum::value2;
    }

    return result;
}

}; // namespace XMC4700