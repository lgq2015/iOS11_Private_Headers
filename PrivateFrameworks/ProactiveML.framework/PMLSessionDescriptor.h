/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol> {
    NSString * _locale;
    NSString * _name;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *version;

+ (id)descriptorForName:(id)arg1 version:(id)arg2 locale:(id)arg3;

- (void).cxx_destruct;
- (id)baseSessionDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSubSessionDescriptor;
- (id)locale;
- (id)name;
- (id)subSessionDescriptorForLabel:(unsigned long long)arg1;
- (unsigned long long)subSessionLabel;
- (id)toPlistWithChunks:(id)arg1;
- (id)version;

@end
