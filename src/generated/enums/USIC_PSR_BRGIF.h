/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PSR_BRGIF : uint8_t
{
    value1 /*!< A baud rate generator event has not occurred. */,
    value2 = 1 /*!< A baud rate generator event has occurred. */
};
static_assert(sizeof(USIC_PSR_BRGIF) == 1);

static constexpr uint16_t USIC_PSR_BRGIF_id = 1233;

/**
 * Converts USIC_PSR_BRGIF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PSR_BRGIF instance)
{
    const char *result = "UNKNOWN USIC_PSR_BRGIF";

    switch (instance)
    {
    case USIC_PSR_BRGIF::value1:
        result = "value1";
        break;
    case USIC_PSR_BRGIF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PSR_BRGIF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PSR_BRGIF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PSR_BRGIF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PSR_BRGIF::value2;
    }

    return result;
}

}; // namespace XMC4700
