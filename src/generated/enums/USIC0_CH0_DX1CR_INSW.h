/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX1CR_INSW : uint8_t
{
    value1 /*!< The input of the data shift unit is controlled by the protocol pre-processor. */,
    value2 = 1 /*!< The input of the data shift unit is connected to the selected data input line. This setting is used if the signals are directly derived from an input pin without treatment by the protocol pre-processor. */
};
static_assert(sizeof(USIC0_CH0_DX1CR_INSW) == 1);

/**
 * Converts USIC0_CH0_DX1CR_INSW to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX1CR_INSW instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX1CR_INSW";

    switch (instance)
    {
    case USIC0_CH0_DX1CR_INSW::value1:
        result = "value1";
        break;
    case USIC0_CH0_DX1CR_INSW::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX1CR_INSW.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX1CR_INSW &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_DX1CR_INSW::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_DX1CR_INSW::value2;
    }

    return result;
}

}; // namespace XMC4700
