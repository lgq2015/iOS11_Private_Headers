/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGenericMessage : MRProtocolMessage

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *key;

- (id)data;
- (id)initWithKey:(id)arg1 data:(id)arg2;
- (id)key;
- (unsigned long long)type;

@end
