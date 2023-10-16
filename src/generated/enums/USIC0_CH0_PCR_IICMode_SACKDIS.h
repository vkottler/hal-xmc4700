/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IICMode_SACKDIS : uint8_t
{
    value1 /*!< The generation of an active slave acknowledge is enabled (slave acknowledge with 0 level = more bytes can be received). */,
    value2 = 1 /*!< The generation of an active slave acknowledge is disabled (slave acknowledge with 1 level = reception stopped). */
};
static_assert(sizeof(USIC0_CH0_PCR_IICMode_SACKDIS) == 1);

/**
 * Converts USIC0_CH0_PCR_IICMode_SACKDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IICMode_SACKDIS instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IICMode_SACKDIS";

    switch (instance)
    {
    case USIC0_CH0_PCR_IICMode_SACKDIS::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_IICMode_SACKDIS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IICMode_SACKDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_IICMode_SACKDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_IICMode_SACKDIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_IICMode_SACKDIS::value2;
    }

    return result;
}

}; // namespace XMC4700
