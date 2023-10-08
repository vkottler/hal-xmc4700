/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Space/data available for single AHB transfer of the specified transfer width.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Data available is greater than or equal to half the FIFO depth for destination transfers and space available is greater than half the fifo depth for source transfers. The exceptions are at the end of a burst transaction request or at the end of a block transfer.",
 *       "value": 1
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

enum class GPDMA1_CH0_CFGH_FIFO_MODE : uint8_t
{
    value1 /*!< Space/data available for single AHB transfer of the specified transfer width. */,
    value2 = 1 /*!< Data available is greater than or equal to half the FIFO depth for destination transfers and space available is greater than half the fifo depth for source transfers. The exceptions are at the end of a burst transaction request or at the end of a block transfer. */
};
static_assert(sizeof(GPDMA1_CH0_CFGH_FIFO_MODE) == 1);

static constexpr uint16_t GPDMA1_CH0_CFGH_FIFO_MODE_id = 2008;

/**
 * Converts GPDMA1_CH0_CFGH_FIFO_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CFGH_FIFO_MODE instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CFGH_FIFO_MODE";

    switch (instance)
    {
    case GPDMA1_CH0_CFGH_FIFO_MODE::value1:
        result = "value1";
        break;
    case GPDMA1_CH0_CFGH_FIFO_MODE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CFGH_FIFO_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CFGH_FIFO_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA1_CH0_CFGH_FIFO_MODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA1_CH0_CFGH_FIFO_MODE::value2;
    }

    return result;
}

}; // namespace XMC4700