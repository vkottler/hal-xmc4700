/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_BYPCR_BPRIO : uint8_t
{
    value1 /*!< The transmit FIFO data has a higher priority than the bypass data. */,
    value2 = 1 /*!< The bypass data has a higher priority than the transmit FIFO data. */
};
static_assert(sizeof(USIC0_CH0_BYPCR_BPRIO) == 1);

/**
 * Converts USIC0_CH0_BYPCR_BPRIO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BYPCR_BPRIO instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BYPCR_BPRIO";

    switch (instance)
    {
    case USIC0_CH0_BYPCR_BPRIO::value1:
        result = "value1";
        break;
    case USIC0_CH0_BYPCR_BPRIO::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BYPCR_BPRIO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BYPCR_BPRIO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_BYPCR_BPRIO::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_BYPCR_BPRIO::value2;
    }

    return result;
}

}; // namespace XMC4700
