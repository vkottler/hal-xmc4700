/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFL_BFI3 : uint8_t
{
    use_bfly_directly /*!< Use BFLy directly */,
    invert_value_use_bfly = 1 /*!< Invert value and use BFLy */
};
static_assert(sizeof(VADC_G0_BFL_BFI3) == 1);

/**
 * Converts VADC_G0_BFL_BFI3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFL_BFI3 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFL_BFI3";

    switch (instance)
    {
    case VADC_G0_BFL_BFI3::use_bfly_directly:
        result = "use_bfly_directly";
        break;
    case VADC_G0_BFL_BFI3::invert_value_use_bfly:
        result = "invert_value_use_bfly";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFL_BFI3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFL_BFI3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "use_bfly_directly", 17)))
    {
        output = VADC_G0_BFL_BFI3::use_bfly_directly;
    }
    else if ((result = !strncmp(data, "invert_value_use_bfly", 21)))
    {
        output = VADC_G0_BFL_BFI3::invert_value_use_bfly;
    }

    return result;
}

}; // namespace XMC4700
