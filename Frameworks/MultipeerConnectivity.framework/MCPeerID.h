/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {
    MCPeerIDInternal * _internal;
}

@property (nonatomic, readonly) NSString *displayName;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameAndPID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1;
- (id)initWithIDString:(id)arg1 displayName:(id)arg2;
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)internalDescription;
- (bool)isEqual:(id)arg1;
- (unsigned int)pid;
- (unsigned long long)pid64;
- (id)serializedRepresentation;

@end
