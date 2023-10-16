/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_EOF : uint8_t
{
    value1 /*!< The data word in TBUF is not considered as last word of an SSC frame. */,
    value2 = 1 /*!< The data word in TBUF is considered as last word of an SSC frame. */
};
static_assert(sizeof(USIC0_CH0_TCSR_EOF) == 1);

/**
 * Converts USIC0_CH0_TCSR_EOF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_EOF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_EOF";

    switch (instance)
    {
    case USIC0_CH0_TCSR_EOF::value1:
        result = "value1";
        break;
    case USIC0_CH0_TCSR_EOF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_EOF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_EOF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TCSR_EOF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TCSR_EOF::value2;
    }

    return result;
}

}; // namespace XMC4700
