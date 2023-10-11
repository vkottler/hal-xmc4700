/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PFLGE_EINDX : uint8_t
{
    value1 /*!< Index event interrupt disabled */,
    value2 = 1 /*!< Index event interrupt enabled */
};
static_assert(sizeof(POSIF0_PFLGE_EINDX) == 1);

static constexpr uint16_t POSIF0_PFLGE_EINDX_id = 2336;

/**
 * Converts POSIF0_PFLGE_EINDX to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PFLGE_EINDX instance)
{
    const char *result = "UNKNOWN POSIF0_PFLGE_EINDX";

    switch (instance)
    {
    case POSIF0_PFLGE_EINDX::value1:
        result = "value1";
        break;
    case POSIF0_PFLGE_EINDX::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PFLGE_EINDX.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PFLGE_EINDX &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PFLGE_EINDX::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PFLGE_EINDX::value2;
    }

    return result;
}

}; // namespace XMC4700
