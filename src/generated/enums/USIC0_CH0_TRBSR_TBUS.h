/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSR_TBUS : uint8_t
{
    transmit_buffer_information_has_been_complete_cont /*!< The transmit buffer
                                                          information has been
                                                          completely updated.
                                                        */
        ,
    fifo_memory_update_after_write_inx_ongoing_wr_cont =
        1 /*!< The FIFO memory update after write to INx is ongoing. A write to
             INx will be delayed. FIFO pointers from the previous INx write are
             not yet updated. */
};
static_assert(sizeof(USIC0_CH0_TRBSR_TBUS) == 1);

/**
 * Converts USIC0_CH0_TRBSR_TBUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSR_TBUS instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSR_TBUS";

    switch (instance)
    {
    case USIC0_CH0_TRBSR_TBUS::
        transmit_buffer_information_has_been_complete_cont:
        result = "transmit_buffer_information_has_been_complete_cont";
        break;
    case USIC0_CH0_TRBSR_TBUS::
        fifo_memory_update_after_write_inx_ongoing_wr_cont:
        result = "fifo_memory_update_after_write_inx_ongoing_wr_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSR_TBUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSR_TBUS &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "transmit_buffer_information_has_been_complete_cont", 50)))
    {
        output = USIC0_CH0_TRBSR_TBUS::
            transmit_buffer_information_has_been_complete_cont;
    }
    else if ((result = !strncmp(
                  data, "fifo_memory_update_after_write_inx_ongoing_wr_cont",
                  50)))
    {
        output = USIC0_CH0_TRBSR_TBUS::
            fifo_memory_update_after_write_inx_ongoing_wr_cont;
    }

    return result;
}

}; // namespace XMC4700
