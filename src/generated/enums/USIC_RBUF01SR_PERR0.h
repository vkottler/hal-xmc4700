/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_RBUF01SR_PERR0 : uint8_t
{
    value1 /*!< The received protocol-related argument PAR matches the expected
              value. The reception of the data word sets bit PSR.RIF and can
              generate a receive interrupt. */
        ,
    value2 = 1 /*!< The received protocol-related argument PAR does not match
                  the expected value. The reception of the data word sets bit
                  PSR.AIF and can generate an alternative receive interrupt. */
};
static_assert(sizeof(USIC_RBUF01SR_PERR0) == 1);

static constexpr uint16_t USIC_RBUF01SR_PERR0_id = 1325;

/**
 * Converts USIC_RBUF01SR_PERR0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_RBUF01SR_PERR0 instance)
{
    const char *result = "UNKNOWN USIC_RBUF01SR_PERR0";

    switch (instance)
    {
    case USIC_RBUF01SR_PERR0::value1:
        result = "value1";
        break;
    case USIC_RBUF01SR_PERR0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_RBUF01SR_PERR0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_RBUF01SR_PERR0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_RBUF01SR_PERR0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_RBUF01SR_PERR0::value2;
    }

    return result;
}

}; // namespace XMC4700
