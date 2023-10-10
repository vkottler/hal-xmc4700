/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TRBSR_TBERI : uint8_t
{
    value1 /*!< A transmit buffer error event has not been detected. */,
    value2 = 1 /*!< A transmit buffer error event has been detected. */
};
static_assert(sizeof(USIC_TRBSR_TBERI) == 1);

static constexpr uint16_t USIC_TRBSR_TBERI_id = 1365;

/**
 * Converts USIC_TRBSR_TBERI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TRBSR_TBERI instance)
{
    const char *result = "UNKNOWN USIC_TRBSR_TBERI";

    switch (instance)
    {
    case USIC_TRBSR_TBERI::value1:
        result = "value1";
        break;
    case USIC_TRBSR_TBERI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TRBSR_TBERI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TRBSR_TBERI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TRBSR_TBERI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TRBSR_TBERI::value2;
    }

    return result;
}

}; // namespace XMC4700
