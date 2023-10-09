/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PCR_IISMode_WAFEIEN : uint8_t
{
    value1 /*!< A protocol interrupt is not activated if a falling edge of WA
              is generated. */
        ,
    value2 = 1 /*!< A protocol interrupt is activated if a falling edge of WA
                  is generated. */
};
static_assert(sizeof(USIC0_CH0_PCR_IISMode_WAFEIEN) == 1);

static constexpr uint16_t USIC0_CH0_PCR_IISMode_WAFEIEN_id = 139;

/**
 * Converts USIC0_CH0_PCR_IISMode_WAFEIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IISMode_WAFEIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IISMode_WAFEIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_IISMode_WAFEIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_IISMode_WAFEIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IISMode_WAFEIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USIC0_CH0_PCR_IISMode_WAFEIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_WAFEIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_WAFEIEN::value2;
    }

    return result;
}

}; // namespace XMC4700
