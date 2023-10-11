/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_DDF : uint8_t
{
    value1 /*!< Data read access to the Flash memory area is allowed. */,
    value2 = 1 /*!< Data read access to the Flash memory area is not allowed. This bit is not taken into account while RPA='0'. */
};
static_assert(sizeof(FLASH0_FCON_DDF) == 1);

static constexpr uint16_t FLASH0_FCON_DDF_id = 639;

/**
 * Converts FLASH0_FCON_DDF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_DDF instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_DDF";

    switch (instance)
    {
    case FLASH0_FCON_DDF::value1:
        result = "value1";
        break;
    case FLASH0_FCON_DDF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_DDF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_DDF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_DDF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_DDF::value2;
    }

    return result;
}

}; // namespace XMC4700
