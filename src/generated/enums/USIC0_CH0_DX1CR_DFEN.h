/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX1CR_DFEN : uint8_t
{
    value1 /*!< The input signal is not digitally filtered. */,
    value2 = 1 /*!< The input signal is digitally filtered. */
};
static_assert(sizeof(USIC0_CH0_DX1CR_DFEN) == 1);

/**
 * Converts USIC0_CH0_DX1CR_DFEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX1CR_DFEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX1CR_DFEN";

    switch (instance)
    {
    case USIC0_CH0_DX1CR_DFEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_DX1CR_DFEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX1CR_DFEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX1CR_DFEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_DX1CR_DFEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_DX1CR_DFEN::value2;
    }

    return result;
}

}; // namespace XMC4700
