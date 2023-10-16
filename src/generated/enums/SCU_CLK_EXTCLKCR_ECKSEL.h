/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_EXTCLKCR_ECKSEL : uint8_t
{
    value1 /*!< fSYS clock */,
    value3 = 2 /*!< fUSB clock */,
    value4 = 3 /*!< fPLL clock divided according to ECKDIV bit field configuration */
};
static_assert(sizeof(SCU_CLK_EXTCLKCR_ECKSEL) == 1);

/**
 * Converts SCU_CLK_EXTCLKCR_ECKSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_EXTCLKCR_ECKSEL instance)
{
    const char *result = "UNKNOWN SCU_CLK_EXTCLKCR_ECKSEL";

    switch (instance)
    {
    case SCU_CLK_EXTCLKCR_ECKSEL::value1:
        result = "value1";
        break;
    case SCU_CLK_EXTCLKCR_ECKSEL::value3:
        result = "value3";
        break;
    case SCU_CLK_EXTCLKCR_ECKSEL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_EXTCLKCR_ECKSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_EXTCLKCR_ECKSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::value1;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::value4;
    }

    return result;
}

}; // namespace XMC4700
