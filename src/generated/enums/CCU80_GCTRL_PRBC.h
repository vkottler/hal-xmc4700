/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCTRL_PRBC : uint8_t
{
    value1 /*!< SW only */,
    value2 = 1 /*!< GSTATThe register contains the status of the prescaler and each timer slice (idle mode or running)..PRB and prescaler registers are cleared when the Run Bit of CC80 is cleared. */,
    value3 = 2 /*!< GSTATThe register contains the status of the prescaler and each timer slice (idle mode or running)..PRB and prescaler registers are cleared when the Run Bit of CC81 is cleared. */,
    value4 = 3 /*!< GSTATThe register contains the status of the prescaler and each timer slice (idle mode or running)..PRB and prescaler registers are cleared when the Run Bit of CC82 is cleared. */,
    value5 = 4 /*!< GSTATThe register contains the status of the prescaler and each timer slice (idle mode or running)..PRB and prescaler registers are cleared when the Run Bit of CC83 is cleared. */
};
static_assert(sizeof(CCU80_GCTRL_PRBC) == 1);

/**
 * Converts CCU80_GCTRL_PRBC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCTRL_PRBC instance)
{
    const char *result = "UNKNOWN CCU80_GCTRL_PRBC";

    switch (instance)
    {
    case CCU80_GCTRL_PRBC::value1:
        result = "value1";
        break;
    case CCU80_GCTRL_PRBC::value2:
        result = "value2";
        break;
    case CCU80_GCTRL_PRBC::value3:
        result = "value3";
        break;
    case CCU80_GCTRL_PRBC::value4:
        result = "value4";
        break;
    case CCU80_GCTRL_PRBC::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCTRL_PRBC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCTRL_PRBC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GCTRL_PRBC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GCTRL_PRBC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_GCTRL_PRBC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_GCTRL_PRBC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = CCU80_GCTRL_PRBC::value5;
    }

    return result;
}

}; // namespace XMC4700
