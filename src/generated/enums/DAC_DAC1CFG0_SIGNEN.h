/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC1CFG0_SIGNEN : uint8_t
{
    value1 /*!< disable */,
    value2 = 1 /*!< enable */
};
static_assert(sizeof(DAC_DAC1CFG0_SIGNEN) == 1);

static constexpr uint16_t DAC_DAC1CFG0_SIGNEN_id = 221;

/**
 * Converts DAC_DAC1CFG0_SIGNEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC1CFG0_SIGNEN instance)
{
    const char *result = "UNKNOWN DAC_DAC1CFG0_SIGNEN";

    switch (instance)
    {
    case DAC_DAC1CFG0_SIGNEN::value1:
        result = "value1";
        break;
    case DAC_DAC1CFG0_SIGNEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC1CFG0_SIGNEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC1CFG0_SIGNEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC1CFG0_SIGNEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC1CFG0_SIGNEN::value2;
    }

    return result;
}

}; // namespace XMC4700
