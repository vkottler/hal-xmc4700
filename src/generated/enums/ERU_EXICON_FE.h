/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU_EXICON_FE : uint8_t
{
    value1 /*!< A falling edge is not considered as edge event */,
    value2 = 1 /*!< A falling edge is considered as edge event */
};
static_assert(sizeof(ERU_EXICON_FE) == 1);

static constexpr uint16_t ERU_EXICON_FE_id = 465;

/**
 * Converts ERU_EXICON_FE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU_EXICON_FE instance)
{
    const char *result = "UNKNOWN ERU_EXICON_FE";

    switch (instance)
    {
    case ERU_EXICON_FE::value1:
        result = "value1";
        break;
    case ERU_EXICON_FE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU_EXICON_FE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU_EXICON_FE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU_EXICON_FE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU_EXICON_FE::value2;
    }

    return result;
}

}; // namespace XMC4700
