/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCST_S1PSS : uint8_t
{
    value1 /*!< Prescaler shadow transfer has not been requested */,
    value2 = 1 /*!< Prescaler shadow transfer has been requested */
};
static_assert(sizeof(CCU80_GCST_S1PSS) == 1);

/**
 * Converts CCU80_GCST_S1PSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCST_S1PSS instance)
{
    const char *result = "UNKNOWN CCU80_GCST_S1PSS";

    switch (instance)
    {
    case CCU80_GCST_S1PSS::value1:
        result = "value1";
        break;
    case CCU80_GCST_S1PSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCST_S1PSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCST_S1PSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GCST_S1PSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GCST_S1PSS::value2;
    }

    return result;
}

}; // namespace XMC4700
