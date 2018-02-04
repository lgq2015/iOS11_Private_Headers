/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLImageprintObservation : CVMLObservation {
    NSUUID * _identifier;
    MPImageDescriptor * _imageprintDescriptor;
    NSString * _imageprintType;
    NSString * _imageprintVersion;
}

@property (retain) NSUUID *identifier;
@property (retain) MPImageDescriptor *imageprintDescriptor;
@property (retain) NSString *imageprintType;
@property (retain) NSString *imageprintVersion;
@property (readonly) NSData *rawImageprintDescriptor;

+ (id)calculateDistanceBetweenImageprint1:(id)arg1 andImageprint2:(id)arg2;

- (void).cxx_destruct;
- (id)calculateDistanceFromImageprint:(id)arg1;
- (id)calculateDistanceFromImageprintObservation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)imageprintDescriptor;
- (id)imageprintType;
- (id)imageprintVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (id)isImageprintValid;
- (id)rawImageprintDescriptor;
- (id)serialize;
- (id)serializeAsVNImageprintStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setIdentifier:(id)arg1;
- (void)setImageprintDescriptor:(id)arg1;
- (void)setImageprintType:(id)arg1;
- (void)setImageprintVersion:(id)arg1;

@end
