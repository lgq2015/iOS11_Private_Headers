/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRPhoneTrieReader : NSObject {
    unsigned char  _maxPhoneNumLength;
    unsigned char  _minPhoneNumLength;
    NSData * _phoneFile;
    struct _CFBurstTrie { } * _trie;
}

@property (nonatomic, readonly) unsigned char maxPhoneNumLength;
@property (nonatomic, readonly) unsigned char minPhoneNumLength;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (bool)lookupPhoneNumber:(id)arg1 idResult:(unsigned int*)arg2;
- (unsigned char)maxPhoneNumLength;
- (unsigned char)minPhoneNumLength;

@end
