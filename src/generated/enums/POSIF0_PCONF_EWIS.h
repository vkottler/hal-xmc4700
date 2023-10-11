/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_EWIS : uint8_t
{
    value1 /*!< POSIFx.EWHEA */,
    value2 = 1 /*!< POSIFx.EWHEB */,
    value3 = 2 /*!< POSIFx.EWHEC */,
    value4 = 3 /*!< POSIFx.EWHED */
};
static_assert(sizeof(POSIF0_PCONF_EWIS) == 1);

static constexpr uint16_t POSIF0_PCONF_EWIS_id = 2293;

/**
 * Converts POSIF0_PCONF_EWIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_EWIS instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_EWIS";

    switch (instance)
    {
    case POSIF0_PCONF_EWIS::value1:
        result = "value1";
        break;
    case POSIF0_PCONF_EWIS::value2:
        result = "value2";
        break;
    case POSIF0_PCONF_EWIS::value3:
        result = "value3";
        break;
    case POSIF0_PCONF_EWIS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_EWIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_EWIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PCONF_EWIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PCONF_EWIS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = POSIF0_PCONF_EWIS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = POSIF0_PCONF_EWIS::value4;
    }

    return result;
}

}; // namespace XMC4700
