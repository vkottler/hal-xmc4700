/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF_PFLG_CHES : uint8_t
{
    value1 /*!< Correct Hall Event not detected */,
    value2 = 1 /*!< Correct Hall Event detected */
};
static_assert(sizeof(POSIF_PFLG_CHES) == 1);

static constexpr uint16_t POSIF_PFLG_CHES_id = 722;

/**
 * Converts POSIF_PFLG_CHES to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF_PFLG_CHES instance)
{
    const char *result = "UNKNOWN POSIF_PFLG_CHES";

    switch (instance)
    {
    case POSIF_PFLG_CHES::value1:
        result = "value1";
        break;
    case POSIF_PFLG_CHES::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF_PFLG_CHES.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF_PFLG_CHES &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF_PFLG_CHES::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF_PFLG_CHES::value2;
    }

    return result;
}

}; // namespace XMC4700
