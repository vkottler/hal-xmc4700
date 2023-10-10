/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF_PFLGE_CHESEL : uint8_t
{
    value1 /*!< Correct Hall Event interrupt forward to POSIFx.SR0 */,
    value2 = 1 /*!< Correct Hall Event interrupt forward to POSIFx.SR1 */
};
static_assert(sizeof(POSIF_PFLGE_CHESEL) == 1);

static constexpr uint16_t POSIF_PFLGE_CHESEL_id = 731;

/**
 * Converts POSIF_PFLGE_CHESEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF_PFLGE_CHESEL instance)
{
    const char *result = "UNKNOWN POSIF_PFLGE_CHESEL";

    switch (instance)
    {
    case POSIF_PFLGE_CHESEL::value1:
        result = "value1";
        break;
    case POSIF_PFLGE_CHESEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF_PFLGE_CHESEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF_PFLGE_CHESEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF_PFLGE_CHESEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF_PFLGE_CHESEL::value2;
    }

    return result;
}

}; // namespace XMC4700
