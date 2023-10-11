/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PARITY_MCHKCON_SELUSB : uint8_t
{
    value1 /*!< Not selected */,
    value2 = 1 /*!< Selected */
};
static_assert(sizeof(SCU_PARITY_MCHKCON_SELUSB) == 1);

static constexpr uint16_t SCU_PARITY_MCHKCON_SELUSB_id = 2720;

/**
 * Converts SCU_PARITY_MCHKCON_SELUSB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_MCHKCON_SELUSB instance)
{
    const char *result = "UNKNOWN SCU_PARITY_MCHKCON_SELUSB";

    switch (instance)
    {
    case SCU_PARITY_MCHKCON_SELUSB::value1:
        result = "value1";
        break;
    case SCU_PARITY_MCHKCON_SELUSB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_MCHKCON_SELUSB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_MCHKCON_SELUSB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_MCHKCON_SELUSB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_MCHKCON_SELUSB::value2;
    }

    return result;
}

}; // namespace XMC4700
