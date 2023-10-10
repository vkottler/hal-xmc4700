/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BFL_BFA3 : uint8_t
{
    value1 /*!< Set boundary flag BFLy if result is above the defined band or
              compare value, clear if below */
        ,
    value2 = 1 /*!< Set boundary flag BFLy if result is below the defined band
                  or compare value, clear if above */
};
static_assert(sizeof(VADC_BFL_BFA3) == 1);

static constexpr uint16_t VADC_BFL_BFA3_id = 1415;

/**
 * Converts VADC_BFL_BFA3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BFL_BFA3 instance)
{
    const char *result = "UNKNOWN VADC_BFL_BFA3";

    switch (instance)
    {
    case VADC_BFL_BFA3::value1:
        result = "value1";
        break;
    case VADC_BFL_BFA3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BFL_BFA3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BFL_BFA3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BFL_BFA3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BFL_BFA3::value2;
    }

    return result;
}

}; // namespace XMC4700
