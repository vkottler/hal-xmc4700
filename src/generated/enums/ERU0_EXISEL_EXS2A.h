/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXISEL_EXS2A : uint8_t
{
    value1 /*!< Input ERU_2A0 is selected */,
    value2 = 1 /*!< Input ERU_2A1 is selected */,
    value3 = 2 /*!< Input ERU_2A2 is selected */,
    value4 = 3 /*!< Input ERU_2A3 is selected */
};
static_assert(sizeof(ERU0_EXISEL_EXS2A) == 1);

/**
 * Converts ERU0_EXISEL_EXS2A to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXISEL_EXS2A instance)
{
    const char *result = "UNKNOWN ERU0_EXISEL_EXS2A";

    switch (instance)
    {
    case ERU0_EXISEL_EXS2A::value1:
        result = "value1";
        break;
    case ERU0_EXISEL_EXS2A::value2:
        result = "value2";
        break;
    case ERU0_EXISEL_EXS2A::value3:
        result = "value3";
        break;
    case ERU0_EXISEL_EXS2A::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXISEL_EXS2A.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXISEL_EXS2A &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXISEL_EXS2A::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXISEL_EXS2A::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ERU0_EXISEL_EXS2A::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ERU0_EXISEL_EXS2A::value4;
    }

    return result;
}

}; // namespace XMC4700
