/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TCSR_TDEN : uint8_t
{
    value1 /*!< A transmission start of the data word in TBUF is disabled. If a
              transmission is started, the passive data level is sent out. */
        ,
    value2 = 1 /*!< A transmission of the data word in TBUF can be started if
                  TDV = 1. */
        ,
    value3 = 2 /*!< A transmission of the data word in TBUF can be started if
                  TDV = 1 while DX2S = 0. */
        ,
    value4 = 3 /*!< A transmission of the data word in TBUF can be started if
                  TDV = 1 while DX2S = 1. */
};
static_assert(sizeof(USIC_TCSR_TDEN) == 1);

static constexpr uint16_t USIC_TCSR_TDEN_id = 1169;

/**
 * Converts USIC_TCSR_TDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TCSR_TDEN instance)
{
    const char *result = "UNKNOWN USIC_TCSR_TDEN";

    switch (instance)
    {
    case USIC_TCSR_TDEN::value1:
        result = "value1";
        break;
    case USIC_TCSR_TDEN::value2:
        result = "value2";
        break;
    case USIC_TCSR_TDEN::value3:
        result = "value3";
        break;
    case USIC_TCSR_TDEN::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TCSR_TDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TCSR_TDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TCSR_TDEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TCSR_TDEN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC_TCSR_TDEN::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC_TCSR_TDEN::value4;
    }

    return result;
}

}; // namespace XMC4700
