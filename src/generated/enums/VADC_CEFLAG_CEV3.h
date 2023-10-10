/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_CEFLAG_CEV3 : uint8_t
{
    value1 /*!< No channel event */,
    value2 = 1 /*!< A channel event has occurred */
};
static_assert(sizeof(VADC_CEFLAG_CEV3) == 1);

static constexpr uint16_t VADC_CEFLAG_CEV3_id = 1499;

/**
 * Converts VADC_CEFLAG_CEV3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CEFLAG_CEV3 instance)
{
    const char *result = "UNKNOWN VADC_CEFLAG_CEV3";

    switch (instance)
    {
    case VADC_CEFLAG_CEV3::value1:
        result = "value1";
        break;
    case VADC_CEFLAG_CEV3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CEFLAG_CEV3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CEFLAG_CEV3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_CEFLAG_CEV3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_CEFLAG_CEV3::value2;
    }

    return result;
}

}; // namespace XMC4700
