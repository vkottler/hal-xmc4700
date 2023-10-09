/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_IICMode_PCR : uint8_t
{
    value1 /*!< A stop condition has not yet been detected. */,
    value2 = 1 /*!< A stop condition has been detected. */
};
static_assert(sizeof(USIC0_CH0_PSR_IICMode_PCR) == 1);

static constexpr uint16_t USIC0_CH0_PSR_IICMode_PCR_id = 201;

/**
 * Converts USIC0_CH0_PSR_IICMode_PCR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_IICMode_PCR instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_IICMode_PCR";

    switch (instance)
    {
    case USIC0_CH0_PSR_IICMode_PCR::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_IICMode_PCR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_IICMode_PCR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_IICMode_PCR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_IICMode_PCR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_IICMode_PCR::value2;
    }

    return result;
}

}; // namespace XMC4700
