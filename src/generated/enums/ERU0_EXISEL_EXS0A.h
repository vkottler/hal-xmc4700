/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXISEL_EXS0A : uint8_t
{
    value1 /*!< Input ERU_0A0 is selected */,
    value2 = 1 /*!< Input ERU_0A1 is selected */,
    value3 = 2 /*!< Input ERU_0A2 is selected */,
    value4 = 3 /*!< Input ERU_0A3 is selected */
};
static_assert(sizeof(ERU0_EXISEL_EXS0A) == 1);

/**
 * Converts ERU0_EXISEL_EXS0A to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXISEL_EXS0A instance)
{
    const char *result = "UNKNOWN ERU0_EXISEL_EXS0A";

    switch (instance)
    {
    case ERU0_EXISEL_EXS0A::value1:
        result = "value1";
        break;
    case ERU0_EXISEL_EXS0A::value2:
        result = "value2";
        break;
    case ERU0_EXISEL_EXS0A::value3:
        result = "value3";
        break;
    case ERU0_EXISEL_EXS0A::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXISEL_EXS0A.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXISEL_EXS0A &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXISEL_EXS0A::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXISEL_EXS0A::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ERU0_EXISEL_EXS0A::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ERU0_EXISEL_EXS0A::value4;
    }

    return result;
}

}; // namespace XMC4700
