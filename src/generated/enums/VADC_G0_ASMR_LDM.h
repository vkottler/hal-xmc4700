/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ASMR_LDM : uint8_t
{
    value1 /*!< Overwrite mode: Copy all bits from the select registers to the pending registers upon a load event */,
    value2 = 1 /*!< Combine mode: Set all pending bits that are set in the select registers upon a load event (logic OR) */
};
static_assert(sizeof(VADC_G0_ASMR_LDM) == 1);

/**
 * Converts VADC_G0_ASMR_LDM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASMR_LDM instance)
{
    const char *result = "UNKNOWN VADC_G0_ASMR_LDM";

    switch (instance)
    {
    case VADC_G0_ASMR_LDM::value1:
        result = "value1";
        break;
    case VADC_G0_ASMR_LDM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASMR_LDM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASMR_LDM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_ASMR_LDM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_ASMR_LDM::value2;
    }

    return result;
}

}; // namespace XMC4700
