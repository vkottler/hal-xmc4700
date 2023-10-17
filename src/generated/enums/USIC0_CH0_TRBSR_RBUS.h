/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSR_RBUS : uint8_t
{
    receive_buffer_information_has_been_completel_cont /*!< The receive buffer
                                                          information has been
                                                          completely updated.
                                                        */
        ,
    outr_update_fifo_memory_ongoing_read_outr_be__cont =
        1 /*!< The OUTR update from the FIFO memory is ongoing. A read from
             OUTR will be delayed. FIFO pointers from the previous read are not
             yet updated. */
};
static_assert(sizeof(USIC0_CH0_TRBSR_RBUS) == 1);

/**
 * Converts USIC0_CH0_TRBSR_RBUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSR_RBUS instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSR_RBUS";

    switch (instance)
    {
    case USIC0_CH0_TRBSR_RBUS::
        receive_buffer_information_has_been_completel_cont:
        result = "receive_buffer_information_has_been_completel_cont";
        break;
    case USIC0_CH0_TRBSR_RBUS::
        outr_update_fifo_memory_ongoing_read_outr_be__cont:
        result = "outr_update_fifo_memory_ongoing_read_outr_be__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSR_RBUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSR_RBUS &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "receive_buffer_information_has_been_completel_cont", 50)))
    {
        output = USIC0_CH0_TRBSR_RBUS::
            receive_buffer_information_has_been_completel_cont;
    }
    else if ((result = !strncmp(
                  data, "outr_update_fifo_memory_ongoing_read_outr_be__cont",
                  50)))
    {
        output = USIC0_CH0_TRBSR_RBUS::
            outr_update_fifo_memory_ongoing_read_outr_be__cont;
    }

    return result;
}

}; // namespace XMC4700
