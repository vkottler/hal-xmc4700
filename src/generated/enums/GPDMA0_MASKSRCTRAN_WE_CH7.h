/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "write disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "write enabled",
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

enum class GPDMA0_MASKSRCTRAN_WE_CH7 : uint8_t
{
    value1 /*!< write disabled */,
    value2 = 1 /*!< write enabled */
};
static_assert(sizeof(GPDMA0_MASKSRCTRAN_WE_CH7) == 1);

static constexpr uint16_t GPDMA0_MASKSRCTRAN_WE_CH7_id = 2200;

/**
 * Converts GPDMA0_MASKSRCTRAN_WE_CH7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_MASKSRCTRAN_WE_CH7 instance)
{
    const char *result = "UNKNOWN GPDMA0_MASKSRCTRAN_WE_CH7";

    switch (instance)
    {
    case GPDMA0_MASKSRCTRAN_WE_CH7::value1:
        result = "value1";
        break;
    case GPDMA0_MASKSRCTRAN_WE_CH7::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_MASKSRCTRAN_WE_CH7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_MASKSRCTRAN_WE_CH7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_MASKSRCTRAN_WE_CH7::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_MASKSRCTRAN_WE_CH7::value2;
    }

    return result;
}

}; // namespace XMC4700
