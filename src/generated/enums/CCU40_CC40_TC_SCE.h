/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_SCE : uint8_t
{
    value1 /*!< Capture into CC4yC0VThis register contains the values
              associated with the Capture 0 field./CC4yC1VThis register
              contains the values associated with the Capture 1 field.
              registers control by CCycapt0 and capture into CC4yC3VThis
              register contains the values associated with the Capture 3
              field./CC4yC2VThis register contains the values associated with
              the Capture 2 field. control by CCycapt1 */
        ,
    value2 = 1 /*!< Capture into CC4yC0VThis register contains the values
                  associated with the Capture 0 field./CC4yC1VThis register
                  contains the values associated with the Capture 1 field. and
                  CC4yC3VThis register contains the values associated with the
                  Capture 3 field./CC4yC2VThis register contains the values
                  associated with the Capture 2 field. control by CCycapt1 */
};
static_assert(sizeof(CCU40_CC40_TC_SCE) == 1);

static constexpr uint16_t CCU40_CC40_TC_SCE_id = 1394;

/**
 * Converts CCU40_CC40_TC_SCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_SCE instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_SCE";

    switch (instance)
    {
    case CCU40_CC40_TC_SCE::value1:
        result = "value1";
        break;
    case CCU40_CC40_TC_SCE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_SCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_SCE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_TC_SCE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_TC_SCE::value2;
    }

    return result;
}

}; // namespace XMC4700
