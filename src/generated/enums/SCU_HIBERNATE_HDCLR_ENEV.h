/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCLR_ENEV : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Clear wake-up event */
};
static_assert(sizeof(SCU_HIBERNATE_HDCLR_ENEV) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDCLR_ENEV_id = 2601;

/**
 * Converts SCU_HIBERNATE_HDCLR_ENEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCLR_ENEV instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCLR_ENEV";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCLR_ENEV::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCLR_ENEV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCLR_ENEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCLR_ENEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCLR_ENEV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCLR_ENEV::value2;
    }

    return result;
}

}; // namespace XMC4700
