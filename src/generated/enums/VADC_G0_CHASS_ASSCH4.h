/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHASS_ASSCH4 : uint8_t
{
    value1 /*!< Channel y can be a background channel converted with lowest priority */,
    value2 = 1 /*!< Channel y is a priority channel within group x */
};
static_assert(sizeof(VADC_G0_CHASS_ASSCH4) == 1);

/**
 * Converts VADC_G0_CHASS_ASSCH4 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHASS_ASSCH4 instance)
{
    const char *result = "UNKNOWN VADC_G0_CHASS_ASSCH4";

    switch (instance)
    {
    case VADC_G0_CHASS_ASSCH4::value1:
        result = "value1";
        break;
    case VADC_G0_CHASS_ASSCH4::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHASS_ASSCH4.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHASS_ASSCH4 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_CHASS_ASSCH4::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_CHASS_ASSCH4::value2;
    }

    return result;
}

}; // namespace XMC4700
