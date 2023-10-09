/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDSTAT_EPEV : uint8_t
{
    value1 /*!< Wake-up on positive edge pin event inactive */,
    value2 = 1 /*!< Wake-up on positive edge pin event active */
};
static_assert(sizeof(SCU_HIBERNATE_HDSTAT_EPEV) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDSTAT_EPEV_id = 1322;

/**
 * Converts SCU_HIBERNATE_HDSTAT_EPEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDSTAT_EPEV instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDSTAT_EPEV";

    switch (instance)
    {
    case SCU_HIBERNATE_HDSTAT_EPEV::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDSTAT_EPEV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDSTAT_EPEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDSTAT_EPEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDSTAT_EPEV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDSTAT_EPEV::value2;
    }

    return result;
}

}; // namespace XMC4700
