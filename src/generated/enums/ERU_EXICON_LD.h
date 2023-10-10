/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU_EXICON_LD : uint8_t
{
    value1 /*!< The status flag FL is not cleared by hardware and is used as
              "sticky" bit. Once set, it is not influenced by any edge until it
              becomes cleared by software. */
        ,
    value2 =
        1 /*!< The status flag FL rebuilds a level detection of the desired
             event. It becomes automatically set with a rising edge if RE = 1
             or with a falling edge if FE = 1. It becomes automatically cleared
             with a rising edge if RE = 0 or with a falling edge if FE = 0. */
};
static_assert(sizeof(ERU_EXICON_LD) == 1);

static constexpr uint16_t ERU_EXICON_LD_id = 467;

/**
 * Converts ERU_EXICON_LD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU_EXICON_LD instance)
{
    const char *result = "UNKNOWN ERU_EXICON_LD";

    switch (instance)
    {
    case ERU_EXICON_LD::value1:
        result = "value1";
        break;
    case ERU_EXICON_LD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU_EXICON_LD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU_EXICON_LD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU_EXICON_LD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU_EXICON_LD::value2;
    }

    return result;
}

}; // namespace XMC4700
