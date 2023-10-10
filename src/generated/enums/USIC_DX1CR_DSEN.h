/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_DX1CR_DSEN : uint8_t
{
    value1 /*!< The un-synchronized signal can be taken as input for the data
              shift unit. */
        ,
    value2 = 1 /*!< The synchronized signal can be taken as input for the data
                  shift unit. */
};
static_assert(sizeof(USIC_DX1CR_DSEN) == 1);

static constexpr uint16_t USIC_DX1CR_DSEN_id = 1119;

/**
 * Converts USIC_DX1CR_DSEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_DX1CR_DSEN instance)
{
    const char *result = "UNKNOWN USIC_DX1CR_DSEN";

    switch (instance)
    {
    case USIC_DX1CR_DSEN::value1:
        result = "value1";
        break;
    case USIC_DX1CR_DSEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_DX1CR_DSEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_DX1CR_DSEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_DX1CR_DSEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_DX1CR_DSEN::value2;
    }

    return result;
}

}; // namespace XMC4700
