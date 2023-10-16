/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_GENERAL_G0ORCEN_ENORC7 : uint8_t
{
    value1 /*!< Disabled */,
    value2 = 1 /*!< Enabled */
};
static_assert(sizeof(SCU_GENERAL_G0ORCEN_ENORC7) == 1);

/**
 * Converts SCU_GENERAL_G0ORCEN_ENORC7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_GENERAL_G0ORCEN_ENORC7 instance)
{
    const char *result = "UNKNOWN SCU_GENERAL_G0ORCEN_ENORC7";

    switch (instance)
    {
    case SCU_GENERAL_G0ORCEN_ENORC7::value1:
        result = "value1";
        break;
    case SCU_GENERAL_G0ORCEN_ENORC7::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_GENERAL_G0ORCEN_ENORC7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_GENERAL_G0ORCEN_ENORC7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_GENERAL_G0ORCEN_ENORC7::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_GENERAL_G0ORCEN_ENORC7::value2;
    }

    return result;
}

}; // namespace XMC4700
