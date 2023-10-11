/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IISMode_DTEN : uint8_t
{
    value1 /*!< The changes of the WA input signal are ignored and no transfers take place. */,
    value2 = 1 /*!< Transfers are enabled. */
};
static_assert(sizeof(USIC0_CH0_PCR_IISMode_DTEN) == 1);

static constexpr uint16_t USIC0_CH0_PCR_IISMode_DTEN_id = 3326;

/**
 * Converts USIC0_CH0_PCR_IISMode_DTEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IISMode_DTEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IISMode_DTEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_IISMode_DTEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_IISMode_DTEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IISMode_DTEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_IISMode_DTEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_DTEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_DTEN::value2;
    }

    return result;
}

}; // namespace XMC4700
