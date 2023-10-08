/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A time quantum lasts (BRP+1) clock cycles.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A time quantum lasts 8 (BRP+1) clock cycles.",
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

enum class CAN_NODE0_NBTR_DIV8 : uint8_t
{
    value1 /*!< A time quantum lasts (BRP+1) clock cycles. */,
    value2 = 1 /*!< A time quantum lasts 8 (BRP+1) clock cycles. */
};
static_assert(sizeof(CAN_NODE0_NBTR_DIV8) == 1);

static constexpr uint16_t CAN_NODE0_NBTR_DIV8_id = 857;

/**
 * Converts CAN_NODE0_NBTR_DIV8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NBTR_DIV8 instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NBTR_DIV8";

    switch (instance)
    {
    case CAN_NODE0_NBTR_DIV8::value1:
        result = "value1";
        break;
    case CAN_NODE0_NBTR_DIV8::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NBTR_DIV8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NBTR_DIV8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_NODE0_NBTR_DIV8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_NODE0_NBTR_DIV8::value2;
    }

    return result;
}

}; // namespace XMC4700