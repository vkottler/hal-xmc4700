/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PFLG_PCLKS : uint8_t
{
    value1 /*!< Period clock not generated */,
    value2 = 1 /*!< Period clock generated */
};
static_assert(sizeof(POSIF0_PFLG_PCLKS) == 1);

static constexpr uint16_t POSIF0_PFLG_PCLKS_id = 2314;

/**
 * Converts POSIF0_PFLG_PCLKS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PFLG_PCLKS instance)
{
    const char *result = "UNKNOWN POSIF0_PFLG_PCLKS";

    switch (instance)
    {
    case POSIF0_PFLG_PCLKS::value1:
        result = "value1";
        break;
    case POSIF0_PFLG_PCLKS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PFLG_PCLKS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PFLG_PCLKS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PFLG_PCLKS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PFLG_PCLKS::value2;
    }

    return result;
}

}; // namespace XMC4700
