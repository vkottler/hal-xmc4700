/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_QCTRL0_TMEN : uint8_t
{
    value1 /*!< No timer mode: standard gating mechanism can be used */,
    value2 = 1 /*!< Timer mode for equidistant sampling enabled: standard
                  gating mechanism must be disabled */
};
static_assert(sizeof(VADC_QCTRL0_TMEN) == 1);

static constexpr uint16_t VADC_QCTRL0_TMEN_id = 1440;

/**
 * Converts VADC_QCTRL0_TMEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_QCTRL0_TMEN instance)
{
    const char *result = "UNKNOWN VADC_QCTRL0_TMEN";

    switch (instance)
    {
    case VADC_QCTRL0_TMEN::value1:
        result = "value1";
        break;
    case VADC_QCTRL0_TMEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_QCTRL0_TMEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_QCTRL0_TMEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_QCTRL0_TMEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_QCTRL0_TMEN::value2;
    }

    return result;
}

}; // namespace XMC4700
