/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_BFL_BFA3 : uint8_t
{
    above_define_cont /*!< Set boundary flag BFLy if result is above the
                         defined band or compare value, clear if below */
        ,
    below_define_cont = 1 /*!< Set boundary flag BFLy if result is below the
                             defined band or compare value, clear if above */
};
static_assert(sizeof(VADC_G0_BFL_BFA3) == 1);

/**
 * Converts VADC_G0_BFL_BFA3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFL_BFA3 instance)
{
    const char *result = "UNKNOWN VADC_G0_BFL_BFA3";

    switch (instance)
    {
    case VADC_G0_BFL_BFA3::above_define_cont:
        result = "above_define_cont";
        break;
    case VADC_G0_BFL_BFA3::below_define_cont:
        result = "below_define_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFL_BFA3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFL_BFA3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "above_define_cont", 17)))
    {
        output = VADC_G0_BFL_BFA3::above_define_cont;
    }
    else if ((result = !strncmp(data, "below_define_cont", 17)))
    {
        output = VADC_G0_BFL_BFA3::below_define_cont;
    }

    return result;
}

}; // namespace XMC4700
