/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXICON_NB : uint8_t
{
    value1 /*!< Input B is used directly */,
    value2 = 1 /*!< Input B is inverted */
};
static_assert(sizeof(ERU0_EXICON_NB) == 1);

static constexpr uint16_t ERU0_EXICON_NB_id = 576;

/**
 * Converts ERU0_EXICON_NB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXICON_NB instance)
{
    const char *result = "UNKNOWN ERU0_EXICON_NB";

    switch (instance)
    {
    case ERU0_EXICON_NB::value1:
        result = "value1";
        break;
    case ERU0_EXICON_NB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXICON_NB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXICON_NB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXICON_NB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXICON_NB::value2;
    }

    return result;
}

}; // namespace XMC4700
