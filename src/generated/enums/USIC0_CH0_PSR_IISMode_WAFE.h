/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_IISMode_WAFE : uint8_t
{
    value1 /*!< A WA falling edge has not been generated. */,
    value2 = 1 /*!< A WA falling edge has been generated. */
};
static_assert(sizeof(USIC0_CH0_PSR_IISMode_WAFE) == 1);

static constexpr uint16_t USIC0_CH0_PSR_IISMode_WAFE_id = 3400;

/**
 * Converts USIC0_CH0_PSR_IISMode_WAFE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_IISMode_WAFE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_IISMode_WAFE";

    switch (instance)
    {
    case USIC0_CH0_PSR_IISMode_WAFE::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_IISMode_WAFE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_IISMode_WAFE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_IISMode_WAFE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_IISMode_WAFE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_IISMode_WAFE::value2;
    }

    return result;
}

}; // namespace XMC4700
