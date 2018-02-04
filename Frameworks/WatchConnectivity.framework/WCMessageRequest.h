/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCMessageRequest : WCMessage <NSSecureCoding> {
    bool  _expectsResponse;
}

@property bool expectsResponse;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsResponse;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(bool)arg4 expectsResponse:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (void)setExpectsResponse:(bool)arg1;

@end
