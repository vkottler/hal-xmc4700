/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "sd_soe": {
 *       "description": "A1+ strong driver, soft edge",
 *       "value": 2
 *     },
 *     "sd_sle": {
 *       "description": "A1+ strong driver, slow edge",
 *       "value": 3
 *     },
 *     "md": {
 *       "description": "A1+ medium driver",
 *       "value": 4
 *     },
 *     "wd": {
 *       "description": "A1+ weak driver",
 *       "value": 7
 *     },
 *     "sd_soe_alt": {
 *       "description": "A1+ strong driver, soft edge (alternate value)",
 *       "value": 0
 *     },
 *     "sd_sle_alt": {
 *       "description": "A1+ strong driver, slow edge (alternate value)",
 *       "value": 1
 *     },
 *     "md_alt": {
 *       "description": "A1+ medium driver (alternate value)",
 *       "value": 6
 *     },
 *     "wd_alt": {
 *       "description": "A1+ weak driver (alternate value)",
 *       "value": 5
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT0_PDR1_PD15 : uint8_t
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
static_assert(sizeof(PORT0_PDR1_PD15) == 1);

static constexpr uint16_t PORT0_PDR1_PD15_id = 1662;

/**
 * Converts PORT0_PDR1_PD15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_PDR1_PD15 instance)
{
    const char *result = "UNKNOWN PORT0_PDR1_PD15";

    switch (instance)
    {
    case PORT0_PDR1_PD15::sd_soe:
        result = "sd_soe";
        break;
    case PORT0_PDR1_PD15::sd_sle:
        result = "sd_sle";
        break;
    case PORT0_PDR1_PD15::md:
        result = "md";
        break;
    case PORT0_PDR1_PD15::wd:
        result = "wd";
        break;
    case PORT0_PDR1_PD15::sd_soe_alt:
        result = "sd_soe_alt";
        break;
    case PORT0_PDR1_PD15::sd_sle_alt:
        result = "sd_sle_alt";
        break;
    case PORT0_PDR1_PD15::md_alt:
        result = "md_alt";
        break;
    case PORT0_PDR1_PD15::wd_alt:
        result = "wd_alt";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_PDR1_PD15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_PDR1_PD15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "sd_soe", 6)))
    {
        output = PORT0_PDR1_PD15::sd_soe;
    }
    else if ((result = !strncmp(data, "sd_sle", 6)))
    {
        output = PORT0_PDR1_PD15::sd_sle;
    }
    else if ((result = !strncmp(data, "md", 2)))
    {
        output = PORT0_PDR1_PD15::md;
    }
    else if ((result = !strncmp(data, "wd", 2)))
    {
        output = PORT0_PDR1_PD15::wd;
    }
    else if ((result = !strncmp(data, "sd_soe_alt", 10)))
    {
        output = PORT0_PDR1_PD15::sd_soe_alt;
    }
    else if ((result = !strncmp(data, "sd_sle_alt", 10)))
    {
        output = PORT0_PDR1_PD15::sd_sle_alt;
    }
    else if ((result = !strncmp(data, "md_alt", 6)))
    {
        output = PORT0_PDR1_PD15::md_alt;
    }
    else if ((result = !strncmp(data, "wd_alt", 6)))
    {
        output = PORT0_PDR1_PD15::wd_alt;
    }

    return result;
}

}; // namespace XMC4700
