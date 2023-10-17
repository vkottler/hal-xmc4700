/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_ASCMode_IDM : uint8_t
{
    idle_detection_switched_off_bits_psrtxidle_ps_cont /*!< The bus idle
                                                          detection is switched
                                                          off and bits
                                                          PSR.TXIDLE and
                                                          PSR.RXIDLE are set
                                                          automatically to
                                                          enable data transfers
                                                          without checking the
                                                          inputs before. */
        ,
    considered_idle_after_number_consecutive_pass_cont =
        1 /*!< The bus is considered as idle after a number of consecutive
             passive bit times defined by SCTR.FLE plus 2 (in the case without
             parity bit) or plus 3 (in the case with parity bit). */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_IDM) == 1);

/**
 * Converts USIC0_CH0_PCR_ASCMode_IDM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_IDM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_IDM";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_IDM::
        idle_detection_switched_off_bits_psrtxidle_ps_cont:
        result = "idle_detection_switched_off_bits_psrtxidle_ps_cont";
        break;
    case USIC0_CH0_PCR_ASCMode_IDM::
        considered_idle_after_number_consecutive_pass_cont:
        result = "considered_idle_after_number_consecutive_pass_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_IDM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_IDM &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "idle_detection_switched_off_bits_psrtxidle_ps_cont", 50)))
    {
        output = USIC0_CH0_PCR_ASCMode_IDM::
            idle_detection_switched_off_bits_psrtxidle_ps_cont;
    }
    else if ((result = !strncmp(
                  data, "considered_idle_after_number_consecutive_pass_cont",
                  50)))
    {
        output = USIC0_CH0_PCR_ASCMode_IDM::
            considered_idle_after_number_consecutive_pass_cont;
    }

    return result;
}

}; // namespace XMC4700
