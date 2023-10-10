/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_REFLAG_REV5 : uint8_t
{
    value1 /*!< No result event */,
    value2 = 1 /*!< New result was stored in register GxRESy */
};
static_assert(sizeof(VADC_REFLAG_REV5) == 1);

static constexpr uint16_t VADC_REFLAG_REV5_id = 1513;

/**
 * Converts VADC_REFLAG_REV5 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_REFLAG_REV5 instance)
{
    const char *result = "UNKNOWN VADC_REFLAG_REV5";

    switch (instance)
    {
    case VADC_REFLAG_REV5::value1:
        result = "value1";
        break;
    case VADC_REFLAG_REV5::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_REFLAG_REV5.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_REFLAG_REV5 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_REFLAG_REV5::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_REFLAG_REV5::value2;
    }

    return result;
}

}; // namespace XMC4700
