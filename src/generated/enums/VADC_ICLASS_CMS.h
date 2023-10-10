/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_ICLASS_CMS : uint8_t
{
    value1 /*!< 12-bit conversion */,
    value2 = 1 /*!< 10-bit conversion */,
    value3 = 2 /*!< 8-bit conversion */,
    value6 = 5 /*!< 10-bit fast compare mode */
};
static_assert(sizeof(VADC_ICLASS_CMS) == 1);

static constexpr uint16_t VADC_ICLASS_CMS_id = 1406;

/**
 * Converts VADC_ICLASS_CMS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_ICLASS_CMS instance)
{
    const char *result = "UNKNOWN VADC_ICLASS_CMS";

    switch (instance)
    {
    case VADC_ICLASS_CMS::value1:
        result = "value1";
        break;
    case VADC_ICLASS_CMS::value2:
        result = "value2";
        break;
    case VADC_ICLASS_CMS::value3:
        result = "value3";
        break;
    case VADC_ICLASS_CMS::value6:
        result = "value6";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_ICLASS_CMS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_ICLASS_CMS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_ICLASS_CMS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_ICLASS_CMS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_ICLASS_CMS::value3;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = VADC_ICLASS_CMS::value6;
    }

    return result;
}

}; // namespace XMC4700