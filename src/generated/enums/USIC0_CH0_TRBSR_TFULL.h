/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSR_TFULL : uint8_t
{
    not_full /*!< The transmit buffer is not full. */,
    full = 1 /*!< The transmit buffer is full. */
};
static_assert(sizeof(USIC0_CH0_TRBSR_TFULL) == 1);

/**
 * Converts USIC0_CH0_TRBSR_TFULL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSR_TFULL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSR_TFULL";

    switch (instance)
    {
    case USIC0_CH0_TRBSR_TFULL::not_full:
        result = "not_full";
        break;
    case USIC0_CH0_TRBSR_TFULL::full:
        result = "full";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSR_TFULL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSR_TFULL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_full", 8)))
    {
        output = USIC0_CH0_TRBSR_TFULL::not_full;
    }
    else if ((result = !strncmp(data, "full", 4)))
    {
        output = USIC0_CH0_TRBSR_TFULL::full;
    }

    return result;
}

}; // namespace XMC4700
