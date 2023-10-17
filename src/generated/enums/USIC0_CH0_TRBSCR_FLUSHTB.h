/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSCR_FLUSHTB : uint8_t
{
    no_effect /*!< No effect. */,
    transmit_fifo_buffer_cleared_filling_level_cl_cont =
        1 /*!< The transmit FIFO buffer is cleared (filling level is cleared
             and output pointer is set to input pointer value). Should only be
             used while the FIFO buffer is not taking part in data traffic. */
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
    case USIC0_CH0_TRBSCR_FLUSHTB::no_effect:
        result = "no_effect";
        break;
    case USIC0_CH0_TRBSCR_FLUSHTB::
        transmit_fifo_buffer_cleared_filling_level_cl_cont:
        result = "transmit_fifo_buffer_cleared_filling_level_cl_cont";
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

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = USIC0_CH0_TRBSCR_FLUSHTB::no_effect;
    }
    else if ((result = !strncmp(
                  data, "transmit_fifo_buffer_cleared_filling_level_cl_cont",
                  50)))
    {
        output = USIC0_CH0_TRBSCR_FLUSHTB::
            transmit_fifo_buffer_cleared_filling_level_cl_cont;
    }

    return result;
}

}; // namespace XMC4700
