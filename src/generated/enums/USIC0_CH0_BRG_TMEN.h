/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_BRG_TMEN : uint8_t
{
    disabled_trigger_signals_dx0t_dx1t_ignored /*!< Timing measurement is
                                                  disabled: The trigger signals
                                                  DX0T and DX1T are ignored. */
        ,
    enabled_10_bit_counter_incremented_by_1_with__cont =
        1 /*!< Timing measurement is enabled: The 10-bit counter is incremented
             by 1 with fPPP and stops counting when reaching its maximum value.
             If one of the trigger signals DX0T or DX1T become active, the
             counter value is captured into bit field CTV, the counter is
             cleared and a transmit shift event is generated. */
};
static_assert(sizeof(USIC0_CH0_BRG_TMEN) == 1);

/**
 * Converts USIC0_CH0_BRG_TMEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BRG_TMEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BRG_TMEN";

    switch (instance)
    {
    case USIC0_CH0_BRG_TMEN::disabled_trigger_signals_dx0t_dx1t_ignored:
        result = "disabled_trigger_signals_dx0t_dx1t_ignored";
        break;
    case USIC0_CH0_BRG_TMEN::
        enabled_10_bit_counter_incremented_by_1_with__cont:
        result = "enabled_10_bit_counter_incremented_by_1_with__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BRG_TMEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BRG_TMEN &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "disabled_trigger_signals_dx0t_dx1t_ignored", 42)))
    {
        output =
            USIC0_CH0_BRG_TMEN::disabled_trigger_signals_dx0t_dx1t_ignored;
    }
    else if ((result = !strncmp(
                  data, "enabled_10_bit_counter_incremented_by_1_with__cont",
                  50)))
    {
        output = USIC0_CH0_BRG_TMEN::
            enabled_10_bit_counter_incremented_by_1_with__cont;
    }

    return result;
}

}; // namespace XMC4700
