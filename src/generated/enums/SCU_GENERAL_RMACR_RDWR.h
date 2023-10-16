/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_GENERAL_RMACR_RDWR : uint8_t
{
    value1 /*!< transfer data from Retention Memory in Hibernate domain to RMDATA register */,
    value2 = 1 /*!< transfer data from RMDATA into Retention Memory in Hibernate domain */
};
static_assert(sizeof(SCU_GENERAL_RMACR_RDWR) == 1);

/**
 * Converts SCU_GENERAL_RMACR_RDWR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_GENERAL_RMACR_RDWR instance)
{
    const char *result = "UNKNOWN SCU_GENERAL_RMACR_RDWR";

    switch (instance)
    {
    case SCU_GENERAL_RMACR_RDWR::value1:
        result = "value1";
        break;
    case SCU_GENERAL_RMACR_RDWR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_GENERAL_RMACR_RDWR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_GENERAL_RMACR_RDWR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_GENERAL_RMACR_RDWR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_GENERAL_RMACR_RDWR::value2;
    }

    return result;
}

}; // namespace XMC4700