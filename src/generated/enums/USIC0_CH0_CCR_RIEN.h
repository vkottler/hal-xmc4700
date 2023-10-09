/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCR_RIEN : uint8_t
{
    value1 /*!< The receive interrupt is disabled. */,
    value2 = 1 /*!< The receive interrupt is enabled. In case of a receive
                  event, the service request output SRx indicated by INPR.RINP
                  is activated. */
};
static_assert(sizeof(USIC0_CH0_CCR_RIEN) == 1);

static constexpr uint16_t USIC0_CH0_CCR_RIEN_id = 145;

/**
 * Converts USIC0_CH0_CCR_RIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_RIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_RIEN";

    switch (instance)
    {
    case USIC0_CH0_CCR_RIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_CCR_RIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_RIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_RIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_CCR_RIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_CCR_RIEN::value2;
    }

    return result;
}

}; // namespace XMC4700
