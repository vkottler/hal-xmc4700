/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHCTR_BNDSELL : uint8_t
{
    value1 /*!< Use group-specific boundary 0 */,
    value2 = 1 /*!< Use group-specific boundary 1 */,
    value3 = 2 /*!< Use global boundary 0 */,
    value4 = 3 /*!< Use global boundary 1 */
};
static_assert(sizeof(VADC_G0_CHCTR_BNDSELL) == 1);

static constexpr uint16_t VADC_G0_CHCTR_BNDSELL_id = 1115;

/**
 * Converts VADC_G0_CHCTR_BNDSELL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHCTR_BNDSELL instance)
{
    const char *result = "UNKNOWN VADC_G0_CHCTR_BNDSELL";

    switch (instance)
    {
    case VADC_G0_CHCTR_BNDSELL::value1:
        result = "value1";
        break;
    case VADC_G0_CHCTR_BNDSELL::value2:
        result = "value2";
        break;
    case VADC_G0_CHCTR_BNDSELL::value3:
        result = "value3";
        break;
    case VADC_G0_CHCTR_BNDSELL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHCTR_BNDSELL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHCTR_BNDSELL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_CHCTR_BNDSELL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_CHCTR_BNDSELL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_CHCTR_BNDSELL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_CHCTR_BNDSELL::value4;
    }

    return result;
}

}; // namespace XMC4700
