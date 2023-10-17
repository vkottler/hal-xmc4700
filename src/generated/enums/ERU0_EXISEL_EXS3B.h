/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXISEL_EXS3B : uint8_t
{
    _0_selected /*!< Input ERU_3B0 is selected */,
    _1_selected = 1 /*!< Input ERU_3B1 is selected */,
    _2_selected = 2 /*!< Input ERU_3B2 is selected */,
    _3_selected = 3 /*!< Input ERU_3B3 is selected */
};
static_assert(sizeof(ERU0_EXISEL_EXS3B) == 1);

/**
 * Converts ERU0_EXISEL_EXS3B to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXISEL_EXS3B instance)
{
    const char *result = "UNKNOWN ERU0_EXISEL_EXS3B";

    switch (instance)
    {
    case ERU0_EXISEL_EXS3B::_0_selected:
        result = "_0_selected";
        break;
    case ERU0_EXISEL_EXS3B::_1_selected:
        result = "_1_selected";
        break;
    case ERU0_EXISEL_EXS3B::_2_selected:
        result = "_2_selected";
        break;
    case ERU0_EXISEL_EXS3B::_3_selected:
        result = "_3_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXISEL_EXS3B.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXISEL_EXS3B &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_selected", 11)))
    {
        output = ERU0_EXISEL_EXS3B::_0_selected;
    }
    else if ((result = !strncmp(data, "_1_selected", 11)))
    {
        output = ERU0_EXISEL_EXS3B::_1_selected;
    }
    else if ((result = !strncmp(data, "_2_selected", 11)))
    {
        output = ERU0_EXISEL_EXS3B::_2_selected;
    }
    else if ((result = !strncmp(data, "_3_selected", 11)))
    {
        output = ERU0_EXISEL_EXS3B::_3_selected;
    }

    return result;
}

}; // namespace XMC4700
