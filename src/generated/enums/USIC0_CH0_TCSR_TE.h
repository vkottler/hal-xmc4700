/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_TE : uint8_t
{
    value1 /*!< The trigger event has not yet been detected. A transmission of the data word in TBUF can not be started. */,
    value2 = 1 /*!< The trigger event has been detected (or the trigger mechanism is switched off) and a transmission of the data word in TBUF can not be started. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TE) == 1);

/**
 * Converts USIC0_CH0_TCSR_TE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TE";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TE::value1:
        result = "value1";
        break;
    case USIC0_CH0_TCSR_TE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TCSR_TE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TCSR_TE::value2;
    }

    return result;
}

}; // namespace XMC4700
