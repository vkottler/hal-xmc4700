/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IISMode_WAREIEN : uint8_t
{
    not_activated_if_rising_edge_wa_generated /*!< A protocol interrupt is not
                                                 activated if a rising edge of
                                                 WA is generated. */
        ,
    activated_if_rising_edge_wa_generated =
        1 /*!< A protocol interrupt is activated if a rising edge of WA is
             generated. */
};
static_assert(sizeof(USIC0_CH0_PCR_IISMode_WAREIEN) == 1);

/**
 * Converts USIC0_CH0_PCR_IISMode_WAREIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IISMode_WAREIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IISMode_WAREIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_IISMode_WAREIEN::
        not_activated_if_rising_edge_wa_generated:
        result = "not_activated_if_rising_edge_wa_generated";
        break;
    case USIC0_CH0_PCR_IISMode_WAREIEN::activated_if_rising_edge_wa_generated:
        result = "activated_if_rising_edge_wa_generated";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IISMode_WAREIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USIC0_CH0_PCR_IISMode_WAREIEN &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "not_activated_if_rising_edge_wa_generated", 41)))
    {
        output = USIC0_CH0_PCR_IISMode_WAREIEN::
            not_activated_if_rising_edge_wa_generated;
    }
    else if ((result =
                  !strncmp(data, "activated_if_rising_edge_wa_generated", 37)))
    {
        output = USIC0_CH0_PCR_IISMode_WAREIEN::
            activated_if_rising_edge_wa_generated;
    }

    return result;
}

}; // namespace XMC4700
