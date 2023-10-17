/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX1CR_CM : uint8_t
{
    trigger_activation_disabled /*!< The trigger activation is disabled. */,
    rising_edge_activates_dx1t = 1 /*!< A rising edge activates DX1T. */,
    falling_edge_activates_dx1t = 2 /*!< A falling edge activates DX1T. */,
    both_edges_activate_dx1t = 3 /*!< Both edges activate DX1T. */
};
static_assert(sizeof(USIC0_CH0_DX1CR_CM) == 1);

/**
 * Converts USIC0_CH0_DX1CR_CM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX1CR_CM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX1CR_CM";

    switch (instance)
    {
    case USIC0_CH0_DX1CR_CM::trigger_activation_disabled:
        result = "trigger_activation_disabled";
        break;
    case USIC0_CH0_DX1CR_CM::rising_edge_activates_dx1t:
        result = "rising_edge_activates_dx1t";
        break;
    case USIC0_CH0_DX1CR_CM::falling_edge_activates_dx1t:
        result = "falling_edge_activates_dx1t";
        break;
    case USIC0_CH0_DX1CR_CM::both_edges_activate_dx1t:
        result = "both_edges_activate_dx1t";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX1CR_CM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX1CR_CM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "trigger_activation_disabled", 27)))
    {
        output = USIC0_CH0_DX1CR_CM::trigger_activation_disabled;
    }
    else if ((result = !strncmp(data, "rising_edge_activates_dx1t", 26)))
    {
        output = USIC0_CH0_DX1CR_CM::rising_edge_activates_dx1t;
    }
    else if ((result = !strncmp(data, "falling_edge_activates_dx1t", 27)))
    {
        output = USIC0_CH0_DX1CR_CM::falling_edge_activates_dx1t;
    }
    else if ((result = !strncmp(data, "both_edges_activate_dx1t", 24)))
    {
        output = USIC0_CH0_DX1CR_CM::both_edges_activate_dx1t;
    }

    return result;
}

}; // namespace XMC4700
