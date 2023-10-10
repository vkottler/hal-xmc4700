/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TRBSR_TFULL : uint8_t
{
    value1 /*!< The transmit buffer is not full. */,
    value2 = 1 /*!< The transmit buffer is full. */
};
static_assert(sizeof(USIC_TRBSR_TFULL) == 1);

static constexpr uint16_t USIC_TRBSR_TFULL_id = 1363;

/**
 * Converts USIC_TRBSR_TFULL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TRBSR_TFULL instance)
{
    const char *result = "UNKNOWN USIC_TRBSR_TFULL";

    switch (instance)
    {
    case USIC_TRBSR_TFULL::value1:
        result = "value1";
        break;
    case USIC_TRBSR_TFULL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TRBSR_TFULL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TRBSR_TFULL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TRBSR_TFULL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TRBSR_TFULL::value2;
    }

    return result;
}

}; // namespace XMC4700
