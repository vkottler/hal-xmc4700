/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_TE : uint8_t
{
    not_been_detected_transmission_data_word_tbuf_cont /*!< The trigger event
                                                          has not yet been
                                                          detected. A
                                                          transmission of the
                                                          data word in TBUF can
                                                          not be started. */
        ,
    been_detected_or_trigger_mechanism_switched_o_cont =
        1 /*!< The trigger event has been detected (or the trigger mechanism is
             switched off) and a transmission of the data word in TBUF can not
             be started. */
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
    case USIC0_CH0_TCSR_TE::not_been_detected_transmission_data_word_tbuf_cont:
        result = "not_been_detected_transmission_data_word_tbuf_cont";
        break;
    case USIC0_CH0_TCSR_TE::been_detected_or_trigger_mechanism_switched_o_cont:
        result = "been_detected_or_trigger_mechanism_switched_o_cont";
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

    if ((result = !strncmp(
             data, "not_been_detected_transmission_data_word_tbuf_cont", 50)))
    {
        output = USIC0_CH0_TCSR_TE::
            not_been_detected_transmission_data_word_tbuf_cont;
    }
    else if ((result = !strncmp(
                  data, "been_detected_or_trigger_mechanism_switched_o_cont",
                  50)))
    {
        output = USIC0_CH0_TCSR_TE::
            been_detected_or_trigger_mechanism_switched_o_cont;
    }

    return result;
}

}; // namespace XMC4700
