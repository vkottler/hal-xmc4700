/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXOCON_IPEN1 : uint8_t
{
    value1 /*!< Flag EXICONx.FL is excluded from the pattern detection */,
    value2 = 1 /*!< Flag EXICONx.FL is included in the pattern detection */
};
static_assert(sizeof(ERU0_EXOCON_IPEN1) == 1);

static constexpr uint16_t ERU0_EXOCON_IPEN1_id = 835;

/**
 * Converts ERU0_EXOCON_IPEN1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXOCON_IPEN1 instance)
{
    const char *result = "UNKNOWN ERU0_EXOCON_IPEN1";

    switch (instance)
    {
    case ERU0_EXOCON_IPEN1::value1:
        result = "value1";
        break;
    case ERU0_EXOCON_IPEN1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXOCON_IPEN1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXOCON_IPEN1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXOCON_IPEN1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXOCON_IPEN1::value2;
    }

    return result;
}

}; // namespace XMC4700
