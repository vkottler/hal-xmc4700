/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IICMode_ACK00 : uint8_t
{
    not_sensitive_this_address /*!< The slave device is not sensitive to this
                                  address. */
        ,
    sensitive_this_address =
        1 /*!< The slave device is sensitive to this address. */
};
static_assert(sizeof(USIC0_CH0_PCR_IICMode_ACK00) == 1);

/**
 * Converts USIC0_CH0_PCR_IICMode_ACK00 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IICMode_ACK00 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IICMode_ACK00";

    switch (instance)
    {
    case USIC0_CH0_PCR_IICMode_ACK00::not_sensitive_this_address:
        result = "not_sensitive_this_address";
        break;
    case USIC0_CH0_PCR_IICMode_ACK00::sensitive_this_address:
        result = "sensitive_this_address";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IICMode_ACK00.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_IICMode_ACK00 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_sensitive_this_address", 26)))
    {
        output = USIC0_CH0_PCR_IICMode_ACK00::not_sensitive_this_address;
    }
    else if ((result = !strncmp(data, "sensitive_this_address", 22)))
    {
        output = USIC0_CH0_PCR_IICMode_ACK00::sensitive_this_address;
    }

    return result;
}

}; // namespace XMC4700
