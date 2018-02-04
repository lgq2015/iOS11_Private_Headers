/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFRankingFeedback : SFFeedback <NSCopying> {
    double  _blendingDuration;
    NSString * _l2ModelVersion;
    NSString * _l2ShadowModelVersion;
    NSString * _l3ModelVersion;
    NSArray * _sections;
}

@property (nonatomic) double blendingDuration;
@property (nonatomic, copy) NSString *l2ModelVersion;
@property (nonatomic, copy) NSString *l2ShadowModelVersion;
@property (nonatomic, copy) NSString *l3ModelVersion;
@property (nonatomic, copy) NSArray *sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)blendingDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 blendingDuration:(double)arg2;
- (id)l2ModelVersion;
- (id)l2ShadowModelVersion;
- (id)l3ModelVersion;
- (id)sections;
- (void)setBlendingDuration:(double)arg1;
- (void)setL2ModelVersion:(id)arg1;
- (void)setL2ShadowModelVersion:(id)arg1;
- (void)setL3ModelVersion:(id)arg1;
- (void)setSections:(id)arg1;

@end
