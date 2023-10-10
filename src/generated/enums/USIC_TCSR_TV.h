/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TCSR_TV : uint8_t
{
    value1 /*!< The latest start of a data word transmission has taken place
              while no valid data was available. As a result, the transmission
              of a data words with passive level (SCTR.PDL) has been started.
            */
        ,
    value2 = 1 /*!< The latest start of a data word transmission has taken
                  place with valid data from TBUF. */
};
static_assert(sizeof(USIC_TCSR_TV) == 1);

static constexpr uint16_t USIC_TCSR_TV_id = 1165;

/**
 * Converts USIC_TCSR_TV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TCSR_TV instance)
{
    const char *result = "UNKNOWN USIC_TCSR_TV";

    switch (instance)
    {
    case USIC_TCSR_TV::value1:
        result = "value1";
        break;
    case USIC_TCSR_TV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TCSR_TV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TCSR_TV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TCSR_TV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TCSR_TV::value2;
    }

    return result;
}

}; // namespace XMC4700
