/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __lcmtypes_lidar_object_t_hpp__
#define __lcmtypes_lidar_object_t_hpp__

#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"
#include "lcmtypes/moving_obj_t.hpp"

namespace lcmtypes
{

class lidar_object_t
{
    public:
        int64_t    utime;

        lcmtypes::moving_obj_t leftFrontObject;

        lcmtypes::moving_obj_t frontObject;

        lcmtypes::moving_obj_t rightFrontObject;

        lcmtypes::moving_obj_t leftRearObject;

        lcmtypes::moving_obj_t rearObject;

        lcmtypes::moving_obj_t rightRearObject;

        lcmtypes::moving_obj_t leftObject;

        lcmtypes::moving_obj_t rightObject;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "lidar_object_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int lidar_object_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lidar_object_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int lidar_object_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t lidar_object_t::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* lidar_object_t::getTypeName()
{
    return "lidar_object_t";
}

int lidar_object_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftFrontObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->frontObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightFrontObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftRearObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rearObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightRearObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightObject._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lidar_object_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftFrontObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->frontObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightFrontObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftRearObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rearObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightRearObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->leftObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->rightObject._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lidar_object_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += this->leftFrontObject._getEncodedSizeNoHash();
    enc_size += this->frontObject._getEncodedSizeNoHash();
    enc_size += this->rightFrontObject._getEncodedSizeNoHash();
    enc_size += this->leftRearObject._getEncodedSizeNoHash();
    enc_size += this->rearObject._getEncodedSizeNoHash();
    enc_size += this->rightRearObject._getEncodedSizeNoHash();
    enc_size += this->leftObject._getEncodedSizeNoHash();
    enc_size += this->rightObject._getEncodedSizeNoHash();
    return enc_size;
}

uint64_t lidar_object_t::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == lidar_object_t::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, (void*)lidar_object_t::getHash };

    uint64_t hash = 0x560c1f6f864502c7LL +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp) +
         lcmtypes::moving_obj_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
