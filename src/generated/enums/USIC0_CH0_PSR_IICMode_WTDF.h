/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_IICMode_WTDF : uint8_t
{
    not_been_found /*!< A wrong TDF code has not been found. */,
    been_found = 1 /*!< A wrong TDF code has been found. */
};
static_assert(sizeof(USIC0_CH0_PSR_IICMode_WTDF) == 1);

/**
 * Converts USIC0_CH0_PSR_IICMode_WTDF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_IICMode_WTDF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_IICMode_WTDF";

    switch (instance)
    {
    case USIC0_CH0_PSR_IICMode_WTDF::not_been_found:
        result = "not_been_found";
        break;
    case USIC0_CH0_PSR_IICMode_WTDF::been_found:
        result = "been_found";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_IICMode_WTDF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_IICMode_WTDF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_been_found", 14)))
    {
        output = USIC0_CH0_PSR_IICMode_WTDF::not_been_found;
    }
    else if ((result = !strncmp(data, "been_found", 10)))
    {
        output = USIC0_CH0_PSR_IICMode_WTDF::been_found;
    }

    return result;
}

}; // namespace XMC4700
