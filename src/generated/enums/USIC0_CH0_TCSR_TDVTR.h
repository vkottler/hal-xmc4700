/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_TDVTR : uint8_t
{
    permanently_set /*!< Bit TCSR.TE is permanently set. */,
    set_if_dx2t_becomes_active_while_tdv_1 =
        1 /*!< Bit TCSR.TE is set if DX2T becomes active while TDV = 1. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TDVTR) == 1);

/**
 * Converts USIC0_CH0_TCSR_TDVTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TDVTR instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TDVTR";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TDVTR::permanently_set:
        result = "permanently_set";
        break;
    case USIC0_CH0_TCSR_TDVTR::set_if_dx2t_becomes_active_while_tdv_1:
        result = "set_if_dx2t_becomes_active_while_tdv_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TDVTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TDVTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "permanently_set", 15)))
    {
        output = USIC0_CH0_TCSR_TDVTR::permanently_set;
    }
    else if ((result = !strncmp(data, "set_if_dx2t_becomes_active_while_tdv_1",
                                38)))
    {
        output = USIC0_CH0_TCSR_TDVTR::set_if_dx2t_becomes_active_while_tdv_1;
    }

    return result;
}

}; // namespace XMC4700
