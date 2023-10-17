/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHCTR_BWDCH : uint8_t
{
    gnd /*!< Select VAGND */,
    ref = 1 /*!< Select VAREF */
};
static_assert(sizeof(VADC_G0_CHCTR_BWDCH) == 1);

/**
 * Converts VADC_G0_CHCTR_BWDCH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHCTR_BWDCH instance)
{
    const char *result = "UNKNOWN VADC_G0_CHCTR_BWDCH";

    switch (instance)
    {
    case VADC_G0_CHCTR_BWDCH::gnd:
        result = "gnd";
        break;
    case VADC_G0_CHCTR_BWDCH::ref:
        result = "ref";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHCTR_BWDCH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHCTR_BWDCH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "gnd", 3)))
    {
        output = VADC_G0_CHCTR_BWDCH::gnd;
    }
    else if ((result = !strncmp(data, "ref", 3)))
    {
        output = VADC_G0_CHCTR_BWDCH::ref;
    }

    return result;
}

}; // namespace XMC4700
