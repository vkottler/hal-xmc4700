/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT2_PDR0_PD6 : uint8_t
{
    sd_soe = 2 /*!< A1+ strong driver, soft edge */,
    sd_sle = 3 /*!< A1+ strong driver, slow edge */,
    md = 4 /*!< A1+ medium driver */,
    wd = 7 /*!< A1+ weak driver */,
    sd_soe_alt /*!< A1+ strong driver, soft edge (alternate value) */,
    sd_sle_alt = 1 /*!< A1+ strong driver, slow edge (alternate value) */,
    md_alt = 6 /*!< A1+ medium driver (alternate value) */,
    wd_alt = 5 /*!< A1+ weak driver (alternate value) */
};
static_assert(sizeof(PORT2_PDR0_PD6) == 1);

/**
 * Converts PORT2_PDR0_PD6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT2_PDR0_PD6 instance)
{
    const char *result = "UNKNOWN PORT2_PDR0_PD6";

    switch (instance)
    {
    case PORT2_PDR0_PD6::sd_soe:
        result = "sd_soe";
        break;
    case PORT2_PDR0_PD6::sd_sle:
        result = "sd_sle";
        break;
    case PORT2_PDR0_PD6::md:
        result = "md";
        break;
    case PORT2_PDR0_PD6::wd:
        result = "wd";
        break;
    case PORT2_PDR0_PD6::sd_soe_alt:
        result = "sd_soe_alt";
        break;
    case PORT2_PDR0_PD6::sd_sle_alt:
        result = "sd_sle_alt";
        break;
    case PORT2_PDR0_PD6::md_alt:
        result = "md_alt";
        break;
    case PORT2_PDR0_PD6::wd_alt:
        result = "wd_alt";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT2_PDR0_PD6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT2_PDR0_PD6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sd_soe", 6)))
    {
        output = PORT2_PDR0_PD6::sd_soe;
    }
    else if ((result = !strncmp(data, "sd_sle", 6)))
    {
        output = PORT2_PDR0_PD6::sd_sle;
    }
    else if ((result = !strncmp(data, "md", 2)))
    {
        output = PORT2_PDR0_PD6::md;
    }
    else if ((result = !strncmp(data, "wd", 2)))
    {
        output = PORT2_PDR0_PD6::wd;
    }
    else if ((result = !strncmp(data, "sd_soe_alt", 10)))
    {
        output = PORT2_PDR0_PD6::sd_soe_alt;
    }
    else if ((result = !strncmp(data, "sd_sle_alt", 10)))
    {
        output = PORT2_PDR0_PD6::sd_sle_alt;
    }
    else if ((result = !strncmp(data, "md_alt", 6)))
    {
        output = PORT2_PDR0_PD6::md_alt;
    }
    else if ((result = !strncmp(data, "wd_alt", 6)))
    {
        output = PORT2_PDR0_PD6::wd_alt;
    }

    return result;
}

}; // namespace XMC4700