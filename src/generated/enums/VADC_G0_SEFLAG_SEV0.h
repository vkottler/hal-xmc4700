/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_SEFLAG_SEV0 : uint8_t
{
    value1 /*!< No source event */,
    value2 = 1 /*!< A source event has occurred */
};
static_assert(sizeof(VADC_G0_SEFLAG_SEV0) == 1);

static constexpr uint16_t VADC_G0_SEFLAG_SEV0_id = 3690;

/**
 * Converts VADC_G0_SEFLAG_SEV0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_SEFLAG_SEV0 instance)
{
    const char *result = "UNKNOWN VADC_G0_SEFLAG_SEV0";

    switch (instance)
    {
    case VADC_G0_SEFLAG_SEV0::value1:
        result = "value1";
        break;
    case VADC_G0_SEFLAG_SEV0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_SEFLAG_SEV0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_SEFLAG_SEV0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_SEFLAG_SEV0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_SEFLAG_SEV0::value2;
    }

    return result;
}

}; // namespace XMC4700
