/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBCTR_RNM : uint8_t
{
    filling_level_mode_standard_receive_buffer_ev_cont /*!< Filling level mode:
                                                          A standard receive
                                                          buffer event occurs
                                                          when the filling
                                                          level equals the
                                                          limit value and
                                                          changes, either due
                                                          to a read access from
                                                          OUTR (LOF = 0) or due
                                                          to a new received
                                                          data word (LOF = 1).
                                                        */
        ,
    rci_mode_standard_receive_buffer_event_occurs_cont =
        1 /*!< RCI mode: A standard receive buffer event occurs when register
             OUTR is updated with a new value if the corresponding value in
             OUTR.RCI[4] = 0. If OUTR.RCI[4] = 1, an alternative receive buffer
             event occurs instead of the standard receive buffer event. */
};
static_assert(sizeof(USIC0_CH0_RBCTR_RNM) == 1);

/**
 * Converts USIC0_CH0_RBCTR_RNM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBCTR_RNM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBCTR_RNM";

    switch (instance)
    {
    case USIC0_CH0_RBCTR_RNM::
        filling_level_mode_standard_receive_buffer_ev_cont:
        result = "filling_level_mode_standard_receive_buffer_ev_cont";
        break;
    case USIC0_CH0_RBCTR_RNM::
        rci_mode_standard_receive_buffer_event_occurs_cont:
        result = "rci_mode_standard_receive_buffer_event_occurs_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBCTR_RNM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBCTR_RNM &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "filling_level_mode_standard_receive_buffer_ev_cont", 50)))
    {
        output = USIC0_CH0_RBCTR_RNM::
            filling_level_mode_standard_receive_buffer_ev_cont;
    }
    else if ((result = !strncmp(
                  data, "rci_mode_standard_receive_buffer_event_occurs_cont",
                  50)))
    {
        output = USIC0_CH0_RBCTR_RNM::
            rci_mode_standard_receive_buffer_event_occurs_cont;
    }

    return result;
}

}; // namespace XMC4700
