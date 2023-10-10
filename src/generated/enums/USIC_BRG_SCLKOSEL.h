/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_BRG_SCLKOSEL : uint8_t
{
    value1 /*!< SCLK from the baud rate generator is selected as the SCLKOUT
              input source. */
        ,
    value2 = 1 /*!< The transmit shift clock from DX1 input stage is selected
                  as the SCLKOUT input source. */
};
static_assert(sizeof(USIC_BRG_SCLKOSEL) == 1);

static constexpr uint16_t USIC_BRG_SCLKOSEL_id = 1101;

/**
 * Converts USIC_BRG_SCLKOSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_BRG_SCLKOSEL instance)
{
    const char *result = "UNKNOWN USIC_BRG_SCLKOSEL";

    switch (instance)
    {
    case USIC_BRG_SCLKOSEL::value1:
        result = "value1";
        break;
    case USIC_BRG_SCLKOSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_BRG_SCLKOSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_BRG_SCLKOSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_BRG_SCLKOSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_BRG_SCLKOSEL::value2;
    }

    return result;
}

}; // namespace XMC4700