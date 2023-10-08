/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Standard Message Object",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Receive FIFO Base Object",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Transmit FIFO Base Object",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Transmit FIFO Slave Object",
 *       "value": 3
 *     },
 *     "value5": {
 *       "description": "Gateway Source Object",
 *       "value": 4
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

enum class CAN_MO_MOFCR_MMC : uint8_t
{
    value1 /*!< Standard Message Object */,
    value2 = 1 /*!< Receive FIFO Base Object */,
    value3 = 2 /*!< Transmit FIFO Base Object */,
    value4 = 3 /*!< Transmit FIFO Slave Object */,
    value5 = 4 /*!< Gateway Source Object */
};
static_assert(sizeof(CAN_MO_MOFCR_MMC) == 1);

static constexpr uint16_t CAN_MO_MOFCR_MMC_id = 2117;

/**
 * Converts CAN_MO_MOFCR_MMC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOFCR_MMC instance)
{
    const char *result = "UNKNOWN CAN_MO_MOFCR_MMC";

    switch (instance)
    {
    case CAN_MO_MOFCR_MMC::value1:
        result = "value1";
        break;
    case CAN_MO_MOFCR_MMC::value2:
        result = "value2";
        break;
    case CAN_MO_MOFCR_MMC::value3:
        result = "value3";
        break;
    case CAN_MO_MOFCR_MMC::value4:
        result = "value4";
        break;
    case CAN_MO_MOFCR_MMC::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOFCR_MMC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOFCR_MMC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOFCR_MMC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOFCR_MMC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CAN_MO_MOFCR_MMC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CAN_MO_MOFCR_MMC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = CAN_MO_MOFCR_MMC::value5;
    }

    return result;
}

}; // namespace XMC4700
