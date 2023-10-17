/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_SSCMode_DX2TIEN : uint8_t
{
    not_generated_if_dx2t_activated /*!< A protocol interrupt is not generated
                                       if DX2T is activated. */
        ,
    generated_if_dx2t_activated =
        1 /*!< A protocol interrupt is generated if DX2T is activated. */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_DX2TIEN) == 1);

/**
 * Converts USIC0_CH0_PCR_SSCMode_DX2TIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_DX2TIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_DX2TIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_DX2TIEN::not_generated_if_dx2t_activated:
        result = "not_generated_if_dx2t_activated";
        break;
    case USIC0_CH0_PCR_SSCMode_DX2TIEN::generated_if_dx2t_activated:
        result = "generated_if_dx2t_activated";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_DX2TIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USIC0_CH0_PCR_SSCMode_DX2TIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_generated_if_dx2t_activated", 31)))
    {
        output =
            USIC0_CH0_PCR_SSCMode_DX2TIEN::not_generated_if_dx2t_activated;
    }
    else if ((result = !strncmp(data, "generated_if_dx2t_activated", 27)))
    {
        output = USIC0_CH0_PCR_SSCMode_DX2TIEN::generated_if_dx2t_activated;
    }

    return result;
}

}; // namespace XMC4700
