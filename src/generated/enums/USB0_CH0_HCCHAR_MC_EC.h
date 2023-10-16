/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_CH0_HCCHAR_MC_EC : uint8_t
{
    value2 = 1 /*!< 1 transaction */,
    value3 = 2 /*!< 2 transactions to be issued for this endpoint per frame */,
    value4 = 3 /*!< 3 transactions to be issued for this endpoint per frame */
};
static_assert(sizeof(USB0_CH0_HCCHAR_MC_EC) == 1);

/**
 * Converts USB0_CH0_HCCHAR_MC_EC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCCHAR_MC_EC instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCCHAR_MC_EC";

    switch (instance)
    {
    case USB0_CH0_HCCHAR_MC_EC::value2:
        result = "value2";
        break;
    case USB0_CH0_HCCHAR_MC_EC::value3:
        result = "value3";
        break;
    case USB0_CH0_HCCHAR_MC_EC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCCHAR_MC_EC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_CH0_HCCHAR_MC_EC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_CH0_HCCHAR_MC_EC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_CH0_HCCHAR_MC_EC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_CH0_HCCHAR_MC_EC::value4;
    }

    return result;
}

}; // namespace XMC4700
