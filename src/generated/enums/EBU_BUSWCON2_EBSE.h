/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSWCON2_EBSE : uint8_t
{
    value1 /*!< ADV is delayed. */,
    value2 = 1 /*!< ADV is not delayed. */
};
static_assert(sizeof(EBU_BUSWCON2_EBSE) == 1);

static constexpr uint16_t EBU_BUSWCON2_EBSE_id = 494;

/**
 * Converts EBU_BUSWCON2_EBSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSWCON2_EBSE instance)
{
    const char *result = "UNKNOWN EBU_BUSWCON2_EBSE";

    switch (instance)
    {
    case EBU_BUSWCON2_EBSE::value1:
        result = "value1";
        break;
    case EBU_BUSWCON2_EBSE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSWCON2_EBSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSWCON2_EBSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSWCON2_EBSE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSWCON2_EBSE::value2;
    }

    return result;
}

}; // namespace XMC4700
