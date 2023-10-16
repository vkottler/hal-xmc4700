/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_WKUPSEL : uint8_t
{
    value1 /*!< HIB_IO_1 pin selected */,
    value2 = 1 /*!< HIB_IO_0 pin selected */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_WKUPSEL) == 1);

/**
 * Converts SCU_HIBERNATE_HDCR_WKUPSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_WKUPSEL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_WKUPSEL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_WKUPSEL::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_WKUPSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_WKUPSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_WKUPSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_WKUPSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_WKUPSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
