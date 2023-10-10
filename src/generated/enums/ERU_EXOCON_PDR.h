/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU_EXOCON_PDR : uint8_t
{
    value1 /*!< A pattern miss is detected */,
    value2 = 1 /*!< A pattern match is detected */
};
static_assert(sizeof(ERU_EXOCON_PDR) == 1);

static constexpr uint16_t ERU_EXOCON_PDR_id = 474;

/**
 * Converts ERU_EXOCON_PDR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU_EXOCON_PDR instance)
{
    const char *result = "UNKNOWN ERU_EXOCON_PDR";

    switch (instance)
    {
    case ERU_EXOCON_PDR::value1:
        result = "value1";
        break;
    case ERU_EXOCON_PDR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU_EXOCON_PDR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU_EXOCON_PDR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU_EXOCON_PDR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU_EXOCON_PDR::value2;
    }

    return result;
}

}; // namespace XMC4700
