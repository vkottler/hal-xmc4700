/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_SCTR_HPCDIR : uint8_t
{
    value1 /*!< The pin(s) with hardware pin control enabled are selected to be
              in input mode. */
        ,
    value2 = 1 /*!< The pin(s) with hardware pin control enabled are selected
                  to be in output mode. */
};
static_assert(sizeof(USIC_SCTR_HPCDIR) == 1);

static constexpr uint16_t USIC_SCTR_HPCDIR_id = 1159;

/**
 * Converts USIC_SCTR_HPCDIR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_SCTR_HPCDIR instance)
{
    const char *result = "UNKNOWN USIC_SCTR_HPCDIR";

    switch (instance)
    {
    case USIC_SCTR_HPCDIR::value1:
        result = "value1";
        break;
    case USIC_SCTR_HPCDIR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_SCTR_HPCDIR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_SCTR_HPCDIR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_SCTR_HPCDIR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_SCTR_HPCDIR::value2;
    }

    return result;
}

}; // namespace XMC4700