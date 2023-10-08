/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value2": {
 *       "description": "Address bit 21 to 20",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Address bit 22 to 21",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Address bit 23 to 22",
 *       "value": 3
 *     },
 *     "value5": {
 *       "description": "Address bit 24 to 23",
 *       "value": 4
 *     },
 *     "value6": {
 *       "description": "Address bit 25 to 24",
 *       "value": 5
 *     },
 *     "value7": {
 *       "description": "Address bit 26 to 25",
 *       "value": 6
 *     },
 *     "value8": {
 *       "description": "Address bit 26",
 *       "value": 7
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

enum class EBU_SDRMCON_BANKM : uint8_t
{
    value2 = 1 /*!< Address bit 21 to 20 */,
    value3 = 2 /*!< Address bit 22 to 21 */,
    value4 = 3 /*!< Address bit 23 to 22 */,
    value5 = 4 /*!< Address bit 24 to 23 */,
    value6 = 5 /*!< Address bit 25 to 24 */,
    value7 = 6 /*!< Address bit 26 to 25 */,
    value8 = 7 /*!< Address bit 26 */
};
static_assert(sizeof(EBU_SDRMCON_BANKM) == 1);

static constexpr uint16_t EBU_SDRMCON_BANKM_id = 545;

/**
 * Converts EBU_SDRMCON_BANKM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMCON_BANKM instance)
{
    const char *result = "UNKNOWN EBU_SDRMCON_BANKM";

    switch (instance)
    {
    case EBU_SDRMCON_BANKM::value2:
        result = "value2";
        break;
    case EBU_SDRMCON_BANKM::value3:
        result = "value3";
        break;
    case EBU_SDRMCON_BANKM::value4:
        result = "value4";
        break;
    case EBU_SDRMCON_BANKM::value5:
        result = "value5";
        break;
    case EBU_SDRMCON_BANKM::value6:
        result = "value6";
        break;
    case EBU_SDRMCON_BANKM::value7:
        result = "value7";
        break;
    case EBU_SDRMCON_BANKM::value8:
        result = "value8";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMCON_BANKM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMCON_BANKM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRMCON_BANKM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_SDRMCON_BANKM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_SDRMCON_BANKM::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = EBU_SDRMCON_BANKM::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = EBU_SDRMCON_BANKM::value6;
    }
    else if ((result = !strncmp(data, "value7", 6)))
    {
        output = EBU_SDRMCON_BANKM::value7;
    }
    else if ((result = !strncmp(data, "value8", 6)))
    {
        output = EBU_SDRMCON_BANKM::value8;
    }

    return result;
}

}; // namespace XMC4700