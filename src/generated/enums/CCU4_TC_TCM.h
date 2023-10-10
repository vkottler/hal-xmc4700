/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU4_TC_TCM : uint8_t
{
    value1 /*!< Edge aligned mode */,
    value2 = 1 /*!< Center aligned mode */
};
static_assert(sizeof(CCU4_TC_TCM) == 1);

static constexpr uint16_t CCU4_TC_TCM_id = 71;

/**
 * Converts CCU4_TC_TCM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU4_TC_TCM instance)
{
    const char *result = "UNKNOWN CCU4_TC_TCM";

    switch (instance)
    {
    case CCU4_TC_TCM::value1:
        result = "value1";
        break;
    case CCU4_TC_TCM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU4_TC_TCM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU4_TC_TCM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU4_TC_TCM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU4_TC_TCM::value2;
    }

    return result;
}

}; // namespace XMC4700
