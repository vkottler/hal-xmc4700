/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The data word in TBUF is not considered as first word of a frame.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The data word in TBUF is considered as first word of a frame. A currently running frame is finished and MSLS becomes deactivated (respecting the programmed delays).",
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

enum class USIC0_CH0_TCSR_SOF : uint8_t
{
    value1 /*!< The data word in TBUF is not considered as first word of a frame. */,
    value2 = 1 /*!< The data word in TBUF is considered as first word of a frame. A currently running frame is finished and MSLS becomes deactivated (respecting the programmed delays). */
};
static_assert(sizeof(USIC0_CH0_TCSR_SOF) == 1);

static constexpr uint16_t USIC0_CH0_TCSR_SOF_id = 93;

/**
 * Converts USIC0_CH0_TCSR_SOF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_SOF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_SOF";

    switch (instance)
    {
    case USIC0_CH0_TCSR_SOF::value1:
        result = "value1";
        break;
    case USIC0_CH0_TCSR_SOF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_SOF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_SOF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TCSR_SOF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TCSR_SOF::value2;
    }

    return result;
}

}; // namespace XMC4700