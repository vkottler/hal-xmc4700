/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBEFLAG_REVGLBCLR : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Clear the result event flag REVGLB */
};
static_assert(sizeof(VADC_GLOBEFLAG_REVGLBCLR) == 1);

/**
 * Converts VADC_GLOBEFLAG_REVGLBCLR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBEFLAG_REVGLBCLR instance)
{
    const char *result = "UNKNOWN VADC_GLOBEFLAG_REVGLBCLR";

    switch (instance)
    {
    case VADC_GLOBEFLAG_REVGLBCLR::value1:
        result = "value1";
        break;
    case VADC_GLOBEFLAG_REVGLBCLR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBEFLAG_REVGLBCLR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBEFLAG_REVGLBCLR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBEFLAG_REVGLBCLR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBEFLAG_REVGLBCLR::value2;
    }

    return result;
}

}; // namespace XMC4700
