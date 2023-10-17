/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_ASCMode_TXIDLE : uint8_t
{
    not_been_idle /*!< The transmitter line has not yet been idle. */,
    been_idle_frame_transmission_possible =
        1 /*!< The transmitter line has been idle and frame transmission is
             possible. */
};
static_assert(sizeof(USIC0_CH0_PSR_ASCMode_TXIDLE) == 1);

/**
 * Converts USIC0_CH0_PSR_ASCMode_TXIDLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_ASCMode_TXIDLE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_ASCMode_TXIDLE";

    switch (instance)
    {
    case USIC0_CH0_PSR_ASCMode_TXIDLE::not_been_idle:
        result = "not_been_idle";
        break;
    case USIC0_CH0_PSR_ASCMode_TXIDLE::been_idle_frame_transmission_possible:
        result = "been_idle_frame_transmission_possible";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_ASCMode_TXIDLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_ASCMode_TXIDLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_been_idle", 13)))
    {
        output = USIC0_CH0_PSR_ASCMode_TXIDLE::not_been_idle;
    }
    else if ((result =
                  !strncmp(data, "been_idle_frame_transmission_possible", 37)))
    {
        output = USIC0_CH0_PSR_ASCMode_TXIDLE::
            been_idle_frame_transmission_possible;
    }

    return result;
}

}; // namespace XMC4700
