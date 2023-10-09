/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ICLASS_CME : uint8_t
{
    value1 /*!< 12-bit conversion */,
    value2 = 1 /*!< 10-bit conversion */,
    value3 = 2 /*!< 8-bit conversion */,
    value6 = 5 /*!< 10-bit fast compare mode */
};
static_assert(sizeof(VADC_G0_ICLASS_CME) == 1);

static constexpr uint16_t VADC_G0_ICLASS_CME_id = 909;

/**
 * Converts VADC_G0_ICLASS_CME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ICLASS_CME instance)
{
    const char *result = "UNKNOWN VADC_G0_ICLASS_CME";

    switch (instance)
    {
    case VADC_G0_ICLASS_CME::value1:
        result = "value1";
        break;
    case VADC_G0_ICLASS_CME::value2:
        result = "value2";
        break;
    case VADC_G0_ICLASS_CME::value3:
        result = "value3";
        break;
    case VADC_G0_ICLASS_CME::value6:
        result = "value6";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ICLASS_CME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ICLASS_CME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_ICLASS_CME::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_ICLASS_CME::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_ICLASS_CME::value3;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = VADC_G0_ICLASS_CME::value6;
    }

    return result;
}

}; // namespace XMC4700
