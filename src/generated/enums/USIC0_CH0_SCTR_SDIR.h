/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Shift LSB first. The first data bit of a data word is located at bit position 0.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Shift MSB first. The first data bit of a data word is located at the bit position given by bit field SCTR.WLE.",
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

enum class USIC0_CH0_SCTR_SDIR : uint8_t
{
    value1 /*!< Shift LSB first. The first data bit of a data word is located at bit position 0. */,
    value2 = 1 /*!< Shift MSB first. The first data bit of a data word is located at the bit position given by bit field SCTR.WLE. */
};
static_assert(sizeof(USIC0_CH0_SCTR_SDIR) == 1);

static constexpr uint16_t USIC0_CH0_SCTR_SDIR_id = 82;

/**
 * Converts USIC0_CH0_SCTR_SDIR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_SCTR_SDIR instance)
{
    const char *result = "UNKNOWN USIC0_CH0_SCTR_SDIR";

    switch (instance)
    {
    case USIC0_CH0_SCTR_SDIR::value1:
        result = "value1";
        break;
    case USIC0_CH0_SCTR_SDIR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_SCTR_SDIR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_SCTR_SDIR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_SCTR_SDIR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_SCTR_SDIR::value2;
    }

    return result;
}

}; // namespace XMC4700