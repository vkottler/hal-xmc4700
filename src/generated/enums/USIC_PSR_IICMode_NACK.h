/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PSR_IICMode_NACK : uint8_t
{
    value1 /*!< A non-acknowledge has not been received. */,
    value2 = 1 /*!< A non-acknowledge has been received. */
};
static_assert(sizeof(USIC_PSR_IICMode_NACK) == 1);

static constexpr uint16_t USIC_PSR_IICMode_NACK_id = 1280;

/**
 * Converts USIC_PSR_IICMode_NACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PSR_IICMode_NACK instance)
{
    const char *result = "UNKNOWN USIC_PSR_IICMode_NACK";

    switch (instance)
    {
    case USIC_PSR_IICMode_NACK::value1:
        result = "value1";
        break;
    case USIC_PSR_IICMode_NACK::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PSR_IICMode_NACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PSR_IICMode_NACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PSR_IICMode_NACK::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PSR_IICMode_NACK::value2;
    }

    return result;
}

}; // namespace XMC4700
