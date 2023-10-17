/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TBCTR_STBTM : uint8_t
{
    _0_while_trbsrstbt1_standard_buffer_event_be_g_cont /*!< Trigger mode 0:
                                                           While TRBSR.STBT=1,
                                                           a standard buffer
                                                           event will be
                                                           generated whenever
                                                           there is a data
                                                           transfer to TBUF or
                                                           data write to INx
                                                           (depending on
                                                           TBCTR.LOF setting).
                                                           STBT is cleared when
                                                           TRBSR.TBFLVL=TBCTR.LIMIT.
                                                         */
        ,
    _1_while_trbsrstbt1_standard_buffer_event_be_g_cont =
        1 /*!< Trigger mode 1: While TRBSR.STBT=1, a standard buffer event will
             be generated whenever there is a data transfer to TBUF or data
             write to INx (depending on TBCTR.LOF setting). STBT is cleared
             when TRBSR.TBFLVL=TBCTR.SIZE. */
};
static_assert(sizeof(USIC0_CH0_TBCTR_STBTM) == 1);

/**
 * Converts USIC0_CH0_TBCTR_STBTM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TBCTR_STBTM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TBCTR_STBTM";

    switch (instance)
    {
    case USIC0_CH0_TBCTR_STBTM::
        _0_while_trbsrstbt1_standard_buffer_event_be_g_cont:
        result = "_0_while_trbsrstbt1_standard_buffer_event_be_g_cont";
        break;
    case USIC0_CH0_TBCTR_STBTM::
        _1_while_trbsrstbt1_standard_buffer_event_be_g_cont:
        result = "_1_while_trbsrstbt1_standard_buffer_event_be_g_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TBCTR_STBTM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TBCTR_STBTM &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "_0_while_trbsrstbt1_standard_buffer_event_be_g_cont", 51)))
    {
        output = USIC0_CH0_TBCTR_STBTM::
            _0_while_trbsrstbt1_standard_buffer_event_be_g_cont;
    }
    else if ((result = !strncmp(
                  data, "_1_while_trbsrstbt1_standard_buffer_event_be_g_cont",
                  51)))
    {
        output = USIC0_CH0_TBCTR_STBTM::
            _1_while_trbsrstbt1_standard_buffer_event_be_g_cont;
    }

    return result;
}

}; // namespace XMC4700
