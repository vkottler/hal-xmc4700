/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_SSCMode_MSLS : uint8_t
{
    inactive_0 /*!< The internal signal MSLS is inactive (0). */,
    active_1 = 1 /*!< The internal signal MSLS is active (1). */
};
static_assert(sizeof(USIC0_CH0_PSR_SSCMode_MSLS) == 1);

/**
 * Converts USIC0_CH0_PSR_SSCMode_MSLS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_SSCMode_MSLS instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_SSCMode_MSLS";

    switch (instance)
    {
    case USIC0_CH0_PSR_SSCMode_MSLS::inactive_0:
        result = "inactive_0";
        break;
    case USIC0_CH0_PSR_SSCMode_MSLS::active_1:
        result = "active_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_SSCMode_MSLS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_SSCMode_MSLS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "inactive_0", 10)))
    {
        output = USIC0_CH0_PSR_SSCMode_MSLS::inactive_0;
    }
    else if ((result = !strncmp(data, "active_1", 8)))
    {
        output = USIC0_CH0_PSR_SSCMode_MSLS::active_1;
    }

    return result;
}

}; // namespace XMC4700
