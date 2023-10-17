/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHCTR_RESPOS : uint8_t
{
    left_aligned /*!< Store results left-aligned */,
    right_aligned = 1 /*!< Store results right-aligned */
};
static_assert(sizeof(VADC_G0_CHCTR_RESPOS) == 1);

/**
 * Converts VADC_G0_CHCTR_RESPOS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHCTR_RESPOS instance)
{
    const char *result = "UNKNOWN VADC_G0_CHCTR_RESPOS";

    switch (instance)
    {
    case VADC_G0_CHCTR_RESPOS::left_aligned:
        result = "left_aligned";
        break;
    case VADC_G0_CHCTR_RESPOS::right_aligned:
        result = "right_aligned";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHCTR_RESPOS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHCTR_RESPOS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "left_aligned", 12)))
    {
        output = VADC_G0_CHCTR_RESPOS::left_aligned;
    }
    else if ((result = !strncmp(data, "right_aligned", 13)))
    {
        output = VADC_G0_CHCTR_RESPOS::right_aligned;
    }

    return result;
}

}; // namespace XMC4700
