/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_SSCMode_PARIEN : uint8_t
{
    not_generated_with_detection_parity_error /*!< A protocol interrupt is not
                                                 generated with the detection
                                                 of a parity error. */
        ,
    generated_with_detection_parity_error =
        1 /*!< A protocol interrupt is generated with the detection of a parity
             error. */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_PARIEN) == 1);

/**
 * Converts USIC0_CH0_PCR_SSCMode_PARIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_PARIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_PARIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_PARIEN::
        not_generated_with_detection_parity_error:
        result = "not_generated_with_detection_parity_error";
        break;
    case USIC0_CH0_PCR_SSCMode_PARIEN::generated_with_detection_parity_error:
        result = "generated_with_detection_parity_error";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_PARIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_PARIEN &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "not_generated_with_detection_parity_error", 41)))
    {
        output = USIC0_CH0_PCR_SSCMode_PARIEN::
            not_generated_with_detection_parity_error;
    }
    else if ((result =
                  !strncmp(data, "generated_with_detection_parity_error", 37)))
    {
        output = USIC0_CH0_PCR_SSCMode_PARIEN::
            generated_with_detection_parity_error;
    }

    return result;
}

}; // namespace XMC4700
