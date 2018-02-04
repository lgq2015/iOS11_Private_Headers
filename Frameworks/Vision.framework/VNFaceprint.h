/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceprint : NSObject <NSCopying, NSSecureCoding, VNFaceprintModel, VNSerializing> {
    NSData * _faceprint;
    NSString * _faceprintInputPath;
    NSString * _key;
    unsigned int  _platform;
    unsigned int  _profile;
}

@property (nonatomic, retain) NSData *faceprint;
@property (nonatomic, copy) NSString *faceprintInputPath;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned int profile;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)faceprintInputPath;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned int)platform;
- (unsigned int)profile;
- (id)serializeStateAndReturnError:(id*)arg1;
- (void)setFaceprint:(id)arg1;
- (void)setFaceprintInputPath:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setProfile:(unsigned int)arg1;

@end
