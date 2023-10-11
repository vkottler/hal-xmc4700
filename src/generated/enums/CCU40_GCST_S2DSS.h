/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCST_S2DSS : uint8_t
{
    value1 /*!< Dither shadow transfer has not been requested */,
    value2 = 1 /*!< Dither shadow transfer has been requested */
};
static_assert(sizeof(CCU40_GCST_S2DSS) == 1);

static constexpr uint16_t CCU40_GCST_S2DSS_id = 74;

/**
 * Converts CCU40_GCST_S2DSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCST_S2DSS instance)
{
    const char *result = "UNKNOWN CCU40_GCST_S2DSS";

    switch (instance)
    {
    case CCU40_GCST_S2DSS::value1:
        result = "value1";
        break;
    case CCU40_GCST_S2DSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCST_S2DSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCST_S2DSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GCST_S2DSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GCST_S2DSS::value2;
    }

    return result;
}

}; // namespace XMC4700
