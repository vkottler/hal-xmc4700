/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_MSYNS : uint8_t
{
    value1 /*!< POSIFx.MSYNCA */,
    value2 = 1 /*!< POSIFx.MSYNCB */,
    value3 = 2 /*!< POSIFx.MSYNCC */,
    value4 = 3 /*!< POSIFx.MSYNCD */
};
static_assert(sizeof(POSIF0_PCONF_MSYNS) == 1);

static constexpr uint16_t POSIF0_PCONF_MSYNS_id = 1752;

/**
 * Converts POSIF0_PCONF_MSYNS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_MSYNS instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_MSYNS";

    switch (instance)
    {
    case POSIF0_PCONF_MSYNS::value1:
        result = "value1";
        break;
    case POSIF0_PCONF_MSYNS::value2:
        result = "value2";
        break;
    case POSIF0_PCONF_MSYNS::value3:
        result = "value3";
        break;
    case POSIF0_PCONF_MSYNS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_MSYNS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_MSYNS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PCONF_MSYNS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PCONF_MSYNS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = POSIF0_PCONF_MSYNS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = POSIF0_PCONF_MSYNS::value4;
    }

    return result;
}

}; // namespace XMC4700
