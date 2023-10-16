/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_LPC : uint8_t
{
    value1 /*!< Low pass filter disabled */,
    value2 = 1 /*!< Low pass of 1 clock cycle */,
    value3 = 2 /*!< Low pass of 2 clock cycles */,
    value4 = 3 /*!< Low pass of 4 clock cycles */,
    value5 = 4 /*!< Low pass of 8 clock cycles */,
    value6 = 5 /*!< Low pass of 16 clock cycles */,
    value7 = 6 /*!< Low pass of 32 clock cycles */,
    value8 = 7 /*!< Low pass of 64 clock cycles */
};
static_assert(sizeof(POSIF0_PCONF_LPC) == 1);

/**
 * Converts POSIF0_PCONF_LPC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_LPC instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_LPC";

    switch (instance)
    {
    case POSIF0_PCONF_LPC::value1:
        result = "value1";
        break;
    case POSIF0_PCONF_LPC::value2:
        result = "value2";
        break;
    case POSIF0_PCONF_LPC::value3:
        result = "value3";
        break;
    case POSIF0_PCONF_LPC::value4:
        result = "value4";
        break;
    case POSIF0_PCONF_LPC::value5:
        result = "value5";
        break;
    case POSIF0_PCONF_LPC::value6:
        result = "value6";
        break;
    case POSIF0_PCONF_LPC::value7:
        result = "value7";
        break;
    case POSIF0_PCONF_LPC::value8:
        result = "value8";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_LPC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_LPC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PCONF_LPC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PCONF_LPC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = POSIF0_PCONF_LPC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = POSIF0_PCONF_LPC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = POSIF0_PCONF_LPC::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = POSIF0_PCONF_LPC::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = POSIF0_PCONF_LPC::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = POSIF0_PCONF_LPC::value8;
    }

    return result;
}

}; // namespace XMC4700
