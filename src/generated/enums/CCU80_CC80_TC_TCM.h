/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_TCM : uint8_t
{
    edge_aligned_mode /*!< Edge aligned mode */,
    center_aligned_mode = 1 /*!< Center aligned mode */
};
static_assert(sizeof(CCU80_CC80_TC_TCM) == 1);

/**
 * Converts CCU80_CC80_TC_TCM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_TCM instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_TCM";

    switch (instance)
    {
    case CCU80_CC80_TC_TCM::edge_aligned_mode:
        result = "edge_aligned_mode";
        break;
    case CCU80_CC80_TC_TCM::center_aligned_mode:
        result = "center_aligned_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_TCM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_TCM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "edge_aligned_mode", 17)))
    {
        output = CCU80_CC80_TC_TCM::edge_aligned_mode;
    }
    else if ((result = !strncmp(data, "center_aligned_mode", 19)))
    {
        output = CCU80_CC80_TC_TCM::center_aligned_mode;
    }

    return result;
}

}; // namespace XMC4700
