/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PCR_ASCMode_PL : uint8_t
{
    value1 /*!< The pulse length is equal to the bit length (no shortened 0).
            */
        ,
    value2 = 1 /*!< The pulse length of a 0 bit is 2 time quanta. */,
    value3 = 2 /*!< The pulse length of a 0 bit is 3 time quanta. */,
    value4 = 7 /*!< The pulse length of a 0 bit is 8 time quanta. */
};
static_assert(sizeof(USIC_PCR_ASCMode_PL) == 1);

static constexpr uint16_t USIC_PCR_ASCMode_PL_id = 1182;

/**
 * Converts USIC_PCR_ASCMode_PL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PCR_ASCMode_PL instance)
{
    const char *result = "UNKNOWN USIC_PCR_ASCMode_PL";

    switch (instance)
    {
    case USIC_PCR_ASCMode_PL::value1:
        result = "value1";
        break;
    case USIC_PCR_ASCMode_PL::value2:
        result = "value2";
        break;
    case USIC_PCR_ASCMode_PL::value3:
        result = "value3";
        break;
    case USIC_PCR_ASCMode_PL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PCR_ASCMode_PL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PCR_ASCMode_PL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PCR_ASCMode_PL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PCR_ASCMode_PL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC_PCR_ASCMode_PL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC_PCR_ASCMode_PL::value4;
    }

    return result;
}

}; // namespace XMC4700
