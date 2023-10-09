/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_PROERM : uint8_t
{
    value1 /*!< Interrupt not enabled */,
    value2 = 1 /*!< Flash interrupt because of Protection Error is enabled */
};
static_assert(sizeof(FLASH0_FCON_PROERM) == 1);

static constexpr uint16_t FLASH0_FCON_PROERM_id = 1943;

/**
 * Converts FLASH0_FCON_PROERM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_PROERM instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_PROERM";

    switch (instance)
    {
    case FLASH0_FCON_PROERM::value1:
        result = "value1";
        break;
    case FLASH0_FCON_PROERM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_PROERM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_PROERM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_PROERM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_PROERM::value2;
    }

    return result;
}

}; // namespace XMC4700
