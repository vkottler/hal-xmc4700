/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCFG_PerFrInt : uint8_t
{
    value1 /*!< 80% of the frame interval */,
    value2 = 1 /*!< 85% */,
    value3 = 2 /*!< 90% */,
    value4 = 3 /*!< 95% */
};
static_assert(sizeof(USB0_DCFG_PerFrInt) == 1);

/**
 * Converts USB0_DCFG_PerFrInt to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCFG_PerFrInt instance)
{
    const char *result = "UNKNOWN USB0_DCFG_PerFrInt";

    switch (instance)
    {
    case USB0_DCFG_PerFrInt::value1:
        result = "value1";
        break;
    case USB0_DCFG_PerFrInt::value2:
        result = "value2";
        break;
    case USB0_DCFG_PerFrInt::value3:
        result = "value3";
        break;
    case USB0_DCFG_PerFrInt::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCFG_PerFrInt.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCFG_PerFrInt &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCFG_PerFrInt::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCFG_PerFrInt::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_DCFG_PerFrInt::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_DCFG_PerFrInt::value4;
    }

    return result;
}

}; // namespace XMC4700