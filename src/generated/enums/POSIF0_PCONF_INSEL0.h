/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_INSEL0 : uint8_t
{
    value1 /*!< POSIFx.IN0A */,
    value2 = 1 /*!< POSIFx.IN0B */,
    value3 = 2 /*!< POSIFx.IN0C */,
    value4 = 3 /*!< POSIFx.IN0D */
};
static_assert(sizeof(POSIF0_PCONF_INSEL0) == 1);

/**
 * Converts POSIF0_PCONF_INSEL0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_INSEL0 instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_INSEL0";

    switch (instance)
    {
    case POSIF0_PCONF_INSEL0::value1:
        result = "value1";
        break;
    case POSIF0_PCONF_INSEL0::value2:
        result = "value2";
        break;
    case POSIF0_PCONF_INSEL0::value3:
        result = "value3";
        break;
    case POSIF0_PCONF_INSEL0::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_INSEL0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_INSEL0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PCONF_INSEL0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PCONF_INSEL0::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = POSIF0_PCONF_INSEL0::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = POSIF0_PCONF_INSEL0::value4;
    }

    return result;
}

}; // namespace XMC4700
