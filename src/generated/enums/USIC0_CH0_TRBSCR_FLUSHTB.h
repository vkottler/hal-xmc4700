/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSCR_FLUSHTB : uint8_t
{
    value1 /*!< No effect. */,
    value2 = 1 /*!< The transmit FIFO buffer is cleared (filling level is cleared and output pointer is set to input pointer value). Should only be used while the FIFO buffer is not taking part in data traffic. */
};
static_assert(sizeof(USIC0_CH0_TRBSCR_FLUSHTB) == 1);

/**
 * Converts USIC0_CH0_TRBSCR_FLUSHTB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSCR_FLUSHTB instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSCR_FLUSHTB";

    switch (instance)
    {
    case USIC0_CH0_TRBSCR_FLUSHTB::value1:
        result = "value1";
        break;
    case USIC0_CH0_TRBSCR_FLUSHTB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSCR_FLUSHTB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSCR_FLUSHTB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TRBSCR_FLUSHTB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TRBSCR_FLUSHTB::value2;
    }

    return result;
}

}; // namespace XMC4700
