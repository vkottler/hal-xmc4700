/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Not last transaction in current block",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Last transaction in current block",
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

enum class GPDMA0_LSTDSTREG_CH5 : uint8_t
{
    value1 /*!< Not last transaction in current block */,
    value2 = 1 /*!< Last transaction in current block */
};
static_assert(sizeof(GPDMA0_LSTDSTREG_CH5) == 1);

static constexpr uint16_t GPDMA0_LSTDSTREG_CH5_id = 2330;

/**
 * Converts GPDMA0_LSTDSTREG_CH5 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_LSTDSTREG_CH5 instance)
{
    const char *result = "UNKNOWN GPDMA0_LSTDSTREG_CH5";

    switch (instance)
    {
    case GPDMA0_LSTDSTREG_CH5::value1:
        result = "value1";
        break;
    case GPDMA0_LSTDSTREG_CH5::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_LSTDSTREG_CH5.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_LSTDSTREG_CH5 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_LSTDSTREG_CH5::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_LSTDSTREG_CH5::value2;
    }

    return result;
}

}; // namespace XMC4700
