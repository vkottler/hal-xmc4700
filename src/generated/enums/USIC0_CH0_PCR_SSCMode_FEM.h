/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_SSCMode_FEM : uint8_t
{
    current_data_frame_considered_finished_when_l_cont /*!< The current data
                                                          frame is considered
                                                          as finished when the
                                                          last bit of a data
                                                          word has been sent
                                                          out and the transmit
                                                          buffer TBUF does not
                                                          contain new data (TDV
                                                          = 0). */
        ,
    msls_signal_kept_active_also_while_no_new_dat_cont =
        1 /*!< The MSLS signal is kept active also while no new data is
             available and no other end of frame condition is reached. In this
             case, the software can accept delays in delivering the data
             without automatic deactivation of MSLS in multi-word data frames.
           */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_FEM) == 1);

/**
 * Converts USIC0_CH0_PCR_SSCMode_FEM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_FEM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_FEM";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_FEM::
        current_data_frame_considered_finished_when_l_cont:
        result = "current_data_frame_considered_finished_when_l_cont";
        break;
    case USIC0_CH0_PCR_SSCMode_FEM::
        msls_signal_kept_active_also_while_no_new_dat_cont:
        result = "msls_signal_kept_active_also_while_no_new_dat_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_FEM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_FEM &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "current_data_frame_considered_finished_when_l_cont", 50)))
    {
        output = USIC0_CH0_PCR_SSCMode_FEM::
            current_data_frame_considered_finished_when_l_cont;
    }
    else if ((result = !strncmp(
                  data, "msls_signal_kept_active_also_while_no_new_dat_cont",
                  50)))
    {
        output = USIC0_CH0_PCR_SSCMode_FEM::
            msls_signal_kept_active_also_while_no_new_dat_cont;
    }

    return result;
}

}; // namespace XMC4700
