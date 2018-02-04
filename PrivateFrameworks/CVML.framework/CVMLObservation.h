/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLObservation : NSObject <NSCoding> {
    float  _confidence;
}

@property float confidence;

- (float)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 forKey:(id)arg2;
- (id)serializeSelfForKey:(id)arg1;
- (void)setConfidence:(float)arg1;

@end
