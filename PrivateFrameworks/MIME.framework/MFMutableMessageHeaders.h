/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableMessageHeaders : MFMessageHeaders {
    NSMutableDictionary * _headersAdded;
    NSMutableArray * _headersRemoved;
}

- (void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(bool)arg3;
- (id)_headerValueForKey:(id)arg1;
- (id)allHeaderKeys;
- (void)dealloc;
- (id)description;
- (id)encodedHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (bool)hasHeaderForKey:(id)arg1;
- (id)headersDictionary;
- (void)mergeHeaders:(id)arg1;
- (id)mutableCopy;
- (void)removeHeaderForKey:(id)arg1;
- (void)setAddressList:(id)arg1 forKey:(id)arg2;
- (void)setAddressListForBcc:(id)arg1;
- (void)setAddressListForCc:(id)arg1;
- (void)setAddressListForSender:(id)arg1;
- (void)setAddressListForTo:(id)arg1;
- (void)setHeader:(id)arg1 forKey:(id)arg2;
- (void)setReferences:(id)arg1;
- (void)stripInternalHeaders;

@end
