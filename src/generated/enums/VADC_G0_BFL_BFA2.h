/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFL_BFA2 : uint8_t
{
    value1 /*!< Set boundary flag BFLy if result is above the defined band or compare value, clear if below */,
    value2 = 1 /*!< Set boundary flag BFLy if result is below the defined band or compare value, clear if above */
};
static_assert(sizeof(VADC_G0_BFL_BFA2) == 1);

static constexpr uint16_t VADC_G0_BFL_BFA2_id = 3586;

/**
 * Converts VADC_G0_BFL_BFA2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFL_BFA2 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFL_BFA2";

    switch (instance)
    {
    case VADC_G0_BFL_BFA2::value1:
        result = "value1";
        break;
    case VADC_G0_BFL_BFA2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFL_BFA2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFL_BFA2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_BFL_BFA2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_BFL_BFA2::value2;
    }

    return result;
}

}; // namespace XMC4700
