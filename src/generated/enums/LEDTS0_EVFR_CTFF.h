/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_EVFR_CTFF : uint8_t
{
    value1 /*!< No action. */,
    value2 = 1 /*!< Bit TFF is cleared. */
};
static_assert(sizeof(LEDTS0_EVFR_CTFF) == 1);

static constexpr uint16_t LEDTS0_EVFR_CTFF_id = 883;

/**
 * Converts LEDTS0_EVFR_CTFF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_EVFR_CTFF instance)
{
    const char *result = "UNKNOWN LEDTS0_EVFR_CTFF";

    switch (instance)
    {
    case LEDTS0_EVFR_CTFF::value1:
        result = "value1";
        break;
    case LEDTS0_EVFR_CTFF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_EVFR_CTFF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_EVFR_CTFF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_EVFR_CTFF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_EVFR_CTFF::value2;
    }

    return result;
}

}; // namespace XMC4700
