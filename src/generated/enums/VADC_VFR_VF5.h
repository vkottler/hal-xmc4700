/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_VFR_VF5 : uint8_t
{
    value1 /*!< Read access: No new valid data available Write access: No
              effect */
        ,
    value2 = 1 /*!< Read access: Result register x contains valid data and has
                  not yet been read, or bit FCR has been updated Write access:
                  Clear this valid flag and bitfield DRC in register GxRESy
                  (overrides a hardware set action) */
};
static_assert(sizeof(VADC_VFR_VF5) == 1);

static constexpr uint16_t VADC_VFR_VF5_id = 1596;

/**
 * Converts VADC_VFR_VF5 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_VFR_VF5 instance)
{
    const char *result = "UNKNOWN VADC_VFR_VF5";

    switch (instance)
    {
    case VADC_VFR_VF5::value1:
        result = "value1";
        break;
    case VADC_VFR_VF5::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_VFR_VF5.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_VFR_VF5 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_VFR_VF5::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_VFR_VF5::value2;
    }

    return result;
}

}; // namespace XMC4700
