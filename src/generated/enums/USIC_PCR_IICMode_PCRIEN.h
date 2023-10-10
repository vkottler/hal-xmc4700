/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PCR_IICMode_PCRIEN : uint8_t
{
    value1 /*!< The stop condition interrupt is disabled. */,
    value2 = 1 /*!< The stop condition interrupt is enabled. */
};
static_assert(sizeof(USIC_PCR_IICMode_PCRIEN) == 1);

static constexpr uint16_t USIC_PCR_IICMode_PCRIEN_id = 1210;

/**
 * Converts USIC_PCR_IICMode_PCRIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PCR_IICMode_PCRIEN instance)
{
    const char *result = "UNKNOWN USIC_PCR_IICMode_PCRIEN";

    switch (instance)
    {
    case USIC_PCR_IICMode_PCRIEN::value1:
        result = "value1";
        break;
    case USIC_PCR_IICMode_PCRIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PCR_IICMode_PCRIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PCR_IICMode_PCRIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PCR_IICMode_PCRIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PCR_IICMode_PCRIEN::value2;
    }

    return result;
}

}; // namespace XMC4700