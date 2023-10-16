/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_PDR1_PD12 : uint8_t
{
    sd_she /*!< A2 strong driver, sharp edge */,
    sd_mee = 1 /*!< A2 strong driver, medium edge */,
    sd_soe = 2 /*!< A2 strong driver, soft edge */,
    md = 4 /*!< A2 medium driver */,
    wd = 7 /*!< A2 weak driver */
};
static_assert(sizeof(PORT5_PDR1_PD12) == 1);

/**
 * Converts PORT5_PDR1_PD12 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_PDR1_PD12 instance)
{
    const char *result = "UNKNOWN PORT5_PDR1_PD12";

    switch (instance)
    {
    case PORT5_PDR1_PD12::sd_she:
        result = "sd_she";
        break;
    case PORT5_PDR1_PD12::sd_mee:
        result = "sd_mee";
        break;
    case PORT5_PDR1_PD12::sd_soe:
        result = "sd_soe";
        break;
    case PORT5_PDR1_PD12::md:
        result = "md";
        break;
    case PORT5_PDR1_PD12::wd:
        result = "wd";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_PDR1_PD12.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_PDR1_PD12 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sd_she", 6)))
    {
        output = PORT5_PDR1_PD12::sd_she;
    }
    else if ((result = !strncmp(data, "sd_mee", 6)))
    {
        output = PORT5_PDR1_PD12::sd_mee;
    }
    else if ((result = !strncmp(data, "sd_soe", 6)))
    {
        output = PORT5_PDR1_PD12::sd_soe;
    }
    else if ((result = !strncmp(data, "md", 2)))
    {
        output = PORT5_PDR1_PD12::md;
    }
    else if ((result = !strncmp(data, "wd", 2)))
    {
        output = PORT5_PDR1_PD12::wd;
    }

    return result;
}

}; // namespace XMC4700
