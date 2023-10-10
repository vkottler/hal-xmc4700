/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF_PFLGE_EMST : uint8_t
{
    value1 /*!< Shadow transfer event interrupt disabled */,
    value2 = 1 /*!< Shadow transfer event interrupt enabled */
};
static_assert(sizeof(POSIF_PFLGE_EMST) == 1);

static constexpr uint16_t POSIF_PFLGE_EMST_id = 737;

/**
 * Converts POSIF_PFLGE_EMST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF_PFLGE_EMST instance)
{
    const char *result = "UNKNOWN POSIF_PFLGE_EMST";

    switch (instance)
    {
    case POSIF_PFLGE_EMST::value1:
        result = "value1";
        break;
    case POSIF_PFLGE_EMST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF_PFLGE_EMST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF_PFLGE_EMST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF_PFLGE_EMST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF_PFLGE_EMST::value2;
    }

    return result;
}

}; // namespace XMC4700
