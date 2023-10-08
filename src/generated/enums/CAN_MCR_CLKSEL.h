/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No clock supplied",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "fPERIPH",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "fOHP",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "hard wired to 0",
 *       "value": 4
 *     },
 *     "value5": {
 *       "description": "hard wired to 0",
 *       "value": 8
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

enum class CAN_MCR_CLKSEL : uint8_t
{
    value1 /*!< No clock supplied */,
    value2 = 1 /*!< fPERIPH */,
    value3 = 2 /*!< fOHP */,
    value4 = 4 /*!< hard wired to 0 */,
    value5 = 8 /*!< hard wired to 0 */
};
static_assert(sizeof(CAN_MCR_CLKSEL) == 1);

static constexpr uint16_t CAN_MCR_CLKSEL_id = 6;

/**
 * Converts CAN_MCR_CLKSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MCR_CLKSEL instance)
{
    const char *result = "UNKNOWN CAN_MCR_CLKSEL";

    switch (instance)
    {
    case CAN_MCR_CLKSEL::value1:
        result = "value1";
        break;
    case CAN_MCR_CLKSEL::value2:
        result = "value2";
        break;
    case CAN_MCR_CLKSEL::value3:
        result = "value3";
        break;
    case CAN_MCR_CLKSEL::value4:
        result = "value4";
        break;
    case CAN_MCR_CLKSEL::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MCR_CLKSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MCR_CLKSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MCR_CLKSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MCR_CLKSEL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CAN_MCR_CLKSEL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CAN_MCR_CLKSEL::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = CAN_MCR_CLKSEL::value5;
    }

    return result;
}

}; // namespace XMC4700
