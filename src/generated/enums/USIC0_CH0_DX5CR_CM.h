/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX5CR_CM : uint8_t
{
    value1 /*!< The trigger activation is disabled. */,
    value2 = 1 /*!< A rising edge activates DXnT. */,
    value3 = 2 /*!< A falling edge activates DXnT. */,
    value4 = 3 /*!< Both edges activate DXnT. */
};
static_assert(sizeof(USIC0_CH0_DX5CR_CM) == 1);

/**
 * Converts USIC0_CH0_DX5CR_CM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX5CR_CM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX5CR_CM";

    switch (instance)
    {
    case USIC0_CH0_DX5CR_CM::value1:
        result = "value1";
        break;
    case USIC0_CH0_DX5CR_CM::value2:
        result = "value2";
        break;
    case USIC0_CH0_DX5CR_CM::value3:
        result = "value3";
        break;
    case USIC0_CH0_DX5CR_CM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX5CR_CM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX5CR_CM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_DX5CR_CM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_DX5CR_CM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_DX5CR_CM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_DX5CR_CM::value4;
    }

    return result;
}

}; // namespace XMC4700
