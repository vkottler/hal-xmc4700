/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_VFR_VF7 : uint8_t
{
    value1 /*!< Read access: No new valid data available Write access: No
              effect */
        ,
    value2 = 1 /*!< Read access: Result register x contains valid data and has
                  not yet been read, or bit FCR has been updated Write access:
                  Clear this valid flag and bitfield DRC in register GxRESy
                  (overrides a hardware set action) */
};
static_assert(sizeof(VADC_G0_VFR_VF7) == 1);

static constexpr uint16_t VADC_G0_VFR_VF7_id = 1098;

/**
 * Converts VADC_G0_VFR_VF7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_VFR_VF7 instance)
{
    const char *result = "UNKNOWN VADC_G0_VFR_VF7";

    switch (instance)
    {
    case VADC_G0_VFR_VF7::value1:
        result = "value1";
        break;
    case VADC_G0_VFR_VF7::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_VFR_VF7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_VFR_VF7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_VFR_VF7::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_VFR_VF7::value2;
    }

    return result;
}

}; // namespace XMC4700
