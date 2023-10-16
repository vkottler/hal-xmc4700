/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PFLG_CNTS : uint8_t
{
    value1 /*!< Quadrature clock not generated */,
    value2 = 1 /*!< Quadrature clock generated */
};
static_assert(sizeof(POSIF0_PFLG_CNTS) == 1);

/**
 * Converts POSIF0_PFLG_CNTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PFLG_CNTS instance)
{
    const char *result = "UNKNOWN POSIF0_PFLG_CNTS";

    switch (instance)
    {
    case POSIF0_PFLG_CNTS::value1:
        result = "value1";
        break;
    case POSIF0_PFLG_CNTS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PFLG_CNTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PFLG_CNTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PFLG_CNTS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PFLG_CNTS::value2;
    }

    return result;
}

}; // namespace XMC4700
